/*
 * XREFs of MiInitializeCachedExtentWalker @ 0x1404BA55C
 * Callers:
 *     MiTransferFileExtent @ 0x1404BA3CC (MiTransferFileExtent.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x14067C2C4 (MiGetCachedExtentWalkerNextPage.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiLocateCachedExtent @ 0x1404BA6E8 (MiLocateCachedExtent.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeCachedExtentWalker(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 *v4; // r15
  volatile LONG *v5; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CachedExtent; // r14
  __int64 *v13; // rdi
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-48h]
  volatile signed __int32 *v22; // [rsp+38h] [rbp-40h]
  KIRQL v23; // [rsp+88h] [rbp+10h]

  v4 = (unsigned __int64 *)(a2 + 1);
  v5 = (volatile LONG *)(*a2 + 72);
  v21 = 1;
  v22 = v5;
  v9 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v23 = ExAcquireSpinLockShared(v5);
    CachedExtent = MiLocateCachedExtent(a2, a3);
    v13 = (__int64 *)(CachedExtent + 32);
    if ( CachedExtent )
    {
      if ( *v13 != 0x8000000000000000uLL )
        break;
    }
    MiReleaseSpinLockShared(v22, v23, v10, v11);
    if ( !a4 || !v21 )
    {
      result = 3221225626LL;
      if ( CachedExtent )
      {
        if ( *v13 == 0x8000000000000000uLL )
          return 3221227273LL;
      }
      return result;
    }
    v4 = (unsigned __int64 *)(a2 + 1);
    result = MiAllocateFileExtents((ULONG_PTR)a2, 2, -1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v21 = 0;
    }
    v5 = v22;
  }
  v15 = *v4;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v16 = MiStartingOffset(a2, v15, 0xFFFFFFFF);
  v19 = *v13;
  if ( *v13 == 0x8000000000000000uLL )
  {
    v20 = 0x8000000000000000uLL;
  }
  else
  {
    v9 = v19 + *(_QWORD *)(CachedExtent + 40);
    v20 = v19 + (unsigned int)((a3 - v16) >> 12) - (unsigned __int64)*(unsigned int *)(CachedExtent + 24);
  }
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v9;
  MiReleaseSpinLockShared(v22, v23, v17, v18);
  return 0LL;
}
