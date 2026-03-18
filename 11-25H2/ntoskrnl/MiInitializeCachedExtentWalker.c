/*
 * XREFs of MiInitializeCachedExtentWalker @ 0x1404C091C
 * Callers:
 *     MiTransferFileExtent @ 0x1404C078C (MiTransferFileExtent.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x14066F924 (MiGetCachedExtentWalkerNextPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiLocateCachedExtent @ 0x1404C0AA8 (MiLocateCachedExtent.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeCachedExtentWalker(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 *v4; // r15
  volatile LONG *v5; // rax
  unsigned __int64 v9; // rbx
  __int64 CachedExtent; // r14
  __int64 *v11; // rdi
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-48h]
  volatile signed __int32 *v18; // [rsp+38h] [rbp-40h]
  KIRQL v19; // [rsp+88h] [rbp+10h]

  v4 = a2 + 1;
  v5 = (volatile LONG *)(*a2 + 72);
  v17 = 1;
  v18 = v5;
  v9 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v19 = ExAcquireSpinLockShared(v5);
    CachedExtent = MiLocateCachedExtent(a2, a3);
    v11 = (__int64 *)(CachedExtent + 32);
    if ( CachedExtent )
    {
      if ( *v11 != 0x8000000000000000uLL )
        break;
    }
    MiReleaseSpinLockShared(v18, v19);
    if ( !a4 || !v17 )
    {
      result = 3221225626LL;
      if ( CachedExtent )
      {
        if ( *v11 == 0x8000000000000000uLL )
          return 3221227273LL;
      }
      return result;
    }
    v4 = a2 + 1;
    result = MiAllocateFileExtents((ULONG_PTR)a2, 2, -1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v17 = 0;
    }
    v5 = v18;
  }
  v13 = *v4;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v14 = MiStartingOffset((__int64)a2, v13, 0xFFFFFFFF);
  v15 = *v11;
  if ( *v11 == 0x8000000000000000uLL )
  {
    v16 = 0x8000000000000000uLL;
  }
  else
  {
    v9 = v15 + *(_QWORD *)(CachedExtent + 40);
    v16 = v15 + (unsigned int)((a3 - v14) >> 12) - (unsigned __int64)*(unsigned int *)(CachedExtent + 24);
  }
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)(a1 + 24) = v9;
  MiReleaseSpinLockShared(v18, v19);
  return 0LL;
}
