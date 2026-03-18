/*
 * XREFs of SeDeleteAccessState @ 0x140844A10
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407670E4 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140767520 (PspReferenceCpuPartitionByHandle.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407CBCA8 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     PspCombineSecurityDomains @ 0x1408EDED8 (PspCombineSecurityDomains.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140920D58 (PspOneDirectionSecurityDomainCombine.c)
 *     WmipCreateGuidObject @ 0x1409B3958 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
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
