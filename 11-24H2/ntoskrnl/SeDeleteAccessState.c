/*
 * XREFs of SeDeleteAccessState @ 0x140840F80
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x140776AB4 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140776EF0 (PspReferenceCpuPartitionByHandle.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x1407C1620 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB468 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14091735C (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 *     PspCombineSecurityDomains @ 0x14094706C (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     WmipCreateGuidObject @ 0x1409CBCD8 (WmipCreateGuidObject.c)
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 */

char __fastcall SeDeleteAccessState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v8; // rtt
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  SepDeleteAccessState(a1, a2, a3, a4);
  if ( SeTokenLeakTracking )
  {
    v10 = *(_QWORD *)(a1 + 48);
    if ( v10 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 1144) + 284LL));
      if ( *(_QWORD *)(a1 + 48) == SepTokenLeakToken )
        __debugbreak();
    }
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 1144) + 284LL));
      if ( *(_QWORD *)(a1 + 32) == SepTokenLeakToken )
        __debugbreak();
    }
  }
  v5 = *(_QWORD *)(a1 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v5 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      LOBYTE(ActiveProcessors) = ObfDereferenceObjectWithTag((PVOID)v5, 0x75536553u);
      goto LABEL_7;
    }
    v8 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Process[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v8 != ActiveProcessors );
  if ( ObpTraceFlags )
    LOBYTE(ActiveProcessors) = ObpPushStackInfo(v5 - 48, 0, 1u, 0x75536553u);
LABEL_7:
  v9 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v9 )
    LOBYTE(ActiveProcessors) = ObfDereferenceObjectWithTag(v9, 0x75536553u);
  *(_QWORD *)(a1 + 32) = 0LL;
  return ActiveProcessors;
}
