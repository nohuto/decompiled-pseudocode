/*
 * XREFs of SeDeleteAccessState @ 0x14083D240
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x140776CD4 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140777110 (PspReferenceCpuPartitionByHandle.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB9B8 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x14083B940 (PsOpenThread.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     PspCombineSecurityDomains @ 0x1408AB200 (PspCombineSecurityDomains.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1408F2544 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14090ADCC (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     WmipCreateGuidObject @ 0x1409B4758 (WmipCreateGuidObject.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtGetNextThread @ 0x140A1A3A0 (NtGetNextThread.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 */

char __fastcall SeDeleteAccessState(__int64 a1)
{
  signed __int64 v2; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v5; // rtt
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  SepDeleteAccessState(a1);
  if ( SeTokenLeakTracking )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1144) + 284LL));
      if ( *(_QWORD *)(a1 + 48) == SepTokenLeakToken )
        __debugbreak();
    }
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 1144) + 284LL));
      if ( *(_QWORD *)(a1 + 32) == SepTokenLeakToken )
        __debugbreak();
    }
  }
  v2 = *(_QWORD *)(a1 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v2 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      LOBYTE(ActiveProcessors) = ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
      goto LABEL_7;
    }
    v5 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Process[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v5 != ActiveProcessors );
  if ( ObpTraceFlags )
    LOBYTE(ActiveProcessors) = ObpPushStackInfo(v2 - 48, 0, 1u, 0x75536553u);
LABEL_7:
  v6 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v6 )
    LOBYTE(ActiveProcessors) = ObfDereferenceObjectWithTag(v6, 0x75536553u);
  *(_QWORD *)(a1 + 32) = 0LL;
  return ActiveProcessors;
}
