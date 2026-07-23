/*
 * XREFs of Amd64RemoveProfileSource @ 0x140569A10
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     HalpRemoveProfileSourceFromList @ 0x140543948 (HalpRemoveProfileSourceFromList.c)
 *     Amd64IsProfileBeingUsed @ 0x14056939C (Amd64IsProfileBeingUsed.c)
 */

__int64 __fastcall Amd64RemoveProfileSource(__int64 a1)
{
  unsigned int v1; // esi
  int v2; // edi
  __int64 result; // rax
  ULONG ActiveProcessorCount; // ebp
  unsigned int i; // ebx
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v1 = 0;
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x21u )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0; i < ActiveProcessorCount; ++i )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), i) )
    {
      result = Amd64IsProfileBeingUsed(0, i, v2);
      if ( (int)result < 0 )
        return result;
      result = Amd64IsProfileBeingUsed(100, i, v2);
      if ( (int)result < 0 )
        return result;
      result = Amd64IsProfileBeingUsed(101, i, v2);
      v1 = result;
      if ( (int)result < 0 )
        return result;
    }
  }
  v7 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  v9 = HalpRemoveProfileSourceFromList((int *)a1, v8, &v13);
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v7);
  if ( v9 )
  {
    v11 = v13;
    HalpMmAllocCtxFree(v10, *(_QWORD *)(v13 + 296));
    HalpMmAllocCtxFree(v12, v11);
    --HalpProfileSourceDescriptorCount;
  }
  else if ( !v13 )
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
