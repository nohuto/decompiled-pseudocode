/*
 * XREFs of EmonRemoveProfileSourceOriginal @ 0x14055DC40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     HalpRemoveProfileSourceFromList @ 0x140546088 (HalpRemoveProfileSourceFromList.c)
 *     EmonIsProfileSourceInUseOriginal @ 0x14055BF04 (EmonIsProfileSourceInUseOriginal.c)
 */

__int64 __fastcall EmonRemoveProfileSourceOriginal(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  ULONG ActiveProcessorCount; // ebp
  unsigned int i; // ebx
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v13 = 0LL;
  if ( v1 <= 0x24 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0; i < ActiveProcessorCount; ++i )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), i)
      && (EmonIsProfileSourceInUseOriginal(0, i, v1) || EmonIsProfileSourceInUseOriginal(1, i, v1)) )
    {
      return 2147483665LL;
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
  return v2;
}
