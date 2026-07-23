/*
 * XREFs of PnpAllocateMultiSZ @ 0x1409F3874
 * Callers:
 *     PiSwPnPInfoInit @ 0x1409F2AF4 (PiSwPnPInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpGetMultiSzLength @ 0x1409F3C50 (PnpGetMultiSzLength.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateMultiSZ(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  int MultiSzLength; // ebx
  unsigned __int64 v7; // rdi
  void *Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  MultiSzLength = 0;
  if ( Src )
  {
    MultiSzLength = PnpGetMultiSzLength(Src, a2, &v12);
    if ( MultiSzLength >= 0 )
    {
      v7 = v12;
      if ( v12 > 2 )
      {
        if ( is_mul_ok(v12, 2uLL) )
        {
          MultiSzLength = 0;
          Pool2 = (void *)ExAllocatePool2(0x100uLL, 2 * v12, 0x57706E50u);
          *a4 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src, 2 * v7);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          return (unsigned int)-1073741675;
        }
      }
    }
  }
  return (unsigned int)MultiSzLength;
}
