/*
 * XREFs of MiAllocateDriverPage @ 0x140A62088
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x140429E0C (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiPreInitializeSystemImagePage @ 0x1404C5268 (MiPreInitializeSystemImagePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(unsigned __int64 a1, char a2, char a3)
{
  unsigned int NextPageColor; // ebx
  int v7; // eax
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+27h] BYREF
  __int128 v15; // [rsp+78h] [rbp+2Fh] BYREF
  int v16; // [rsp+C8h] [rbp+7Fh] BYREF

  v16 = 0;
  v15 = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v15);
  NextPageColor = MiGetNextPageColor((__int64)&v15);
  v7 = MiUseProtectedSlabAllocatorForDriverPage(a1, a2, &v16);
  v8 = -1LL;
  if ( !v7
    || (result = MiGetSlabPage(a1, v16, NextPageColor, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0),
        v14 = result,
        result == -1) )
  {
    result = MiGetSlabPage(a1, 5, NextPageColor, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    v14 = result;
    if ( result == -1 )
    {
      if ( (a3 & 1) != 0 )
      {
        return -1LL;
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 16696) )
          *(_QWORD *)(a1 + 16696) = MiGetSlabCurrentTime();
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16688));
        if ( (int)MiFindContiguousPagesEx(
                    a1,
                    0LL,
                    *(_QWORD *)(a1 + 16680),
                    0LL,
                    0,
                    1LL,
                    1u,
                    0x80000000,
                    255,
                    0x60000001u,
                    0,
                    0LL,
                    0LL,
                    (ULONG_PTR *)&v14) < 0 )
        {
          *(_QWORD *)(a1 + 16680) = -1LL;
          while ( 1 )
          {
            result = MiGetPage(a1, NextPageColor, 0);
            v14 = result;
            if ( result != -1 )
              break;
            if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              return -1LL;
            MiWaitForFreePage(a1, 0);
          }
        }
        else
        {
          ++*(_QWORD *)(a1 + 16672);
          v13 = v14;
          if ( (*(_QWORD *)(a1 + 16672) & 0x1FFLL) != 0 )
            v8 = v14 - 1;
          *(_QWORD *)(a1 + 16680) = v8;
          MiPreInitializeSystemImagePage(v13, v10, v11, v12);
          return v14;
        }
      }
    }
  }
  return result;
}
