/*
 * XREFs of EtwpTraceCachedStack @ 0x1403DED20
 * Callers:
 *     EtwpStackRundown @ 0x1403DEAE4 (EtwpStackRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwpTraceCachedStack(__int64 a1, unsigned int a2, __int16 a3, __int64 a4)
{
  unsigned __int16 v6; // r10
  int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  _QWORD v12[18]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+108h] [rbp+20h] BYREF

  v13 = a4;
  v12[1] = 8LL;
  v12[0] = &v13;
  v6 = 1;
  do
  {
    v7 = 32;
    if ( *(_DWORD *)(a4 + 32) < 0x20u )
      v7 = *(_DWORD *)(a4 + 32);
    v8 = 2LL * v6++;
    v9 = &v12[v8];
    *v9 = a4 + 40;
    v9[1] = (unsigned int)(8 * v7);
    a4 = *(_QWORD *)(a4 + 16);
  }
  while ( a4 );
  v10 = 5244418;
  if ( a3 == 6180 )
    v10 = 5242882;
  return EtwpLogKernelEvent((__int64)v12, a1, a2, v6, a3, v10);
}
