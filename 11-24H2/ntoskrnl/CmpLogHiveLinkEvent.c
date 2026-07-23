/*
 * XREFs of CmpLogHiveLinkEvent @ 0x1407D6958
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmpLogHiveLinkEvent(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-30h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  __int64 v12; // [rsp+80h] [rbp+10h] BYREF

  v12 = a1;
  v9[0] = 8LL;
  v7 = 0;
  v8 = &v12;
  v3 = 1;
  v4 = *((_QWORD *)a2 + 1);
  if ( v4 )
  {
    v3 = 2;
    v10 = *a2;
    v9[1] = v4;
    v11 = 0;
  }
  v5 = 2LL * v3;
  v9[v5 - 1] = &v7;
  v9[v5] = 2LL;
  return EtwTraceKernelEvent((int)&v8, v3 + 1, 0x41000000u, 2342, 6297858);
}
