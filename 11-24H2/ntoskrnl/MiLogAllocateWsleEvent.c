/*
 * XREFs of MiLogAllocateWsleEvent @ 0x1404AC4F8
 * Callers:
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  __int16 v7; // r9
  unsigned __int64 v9; // rdi
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 *v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v10 = 0LL;
  v11 = 0LL;
  MiIdentifyPfnWrapper(a1, &v10);
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      v9 |= 2uLL;
    *((_QWORD *)&v11 + 1) = v9;
    v6 = 32;
    v7 = 642;
  }
  else
  {
    v6 = 24;
    v7 = 630;
  }
  v14 = 0;
  v12 = &v10;
  v13 = v6;
  return EtwTraceKernelEvent((int)&v12, 1, 0x28000001u, v7, 290462468);
}
