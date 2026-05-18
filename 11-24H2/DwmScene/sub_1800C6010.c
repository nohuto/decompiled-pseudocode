/*
 * XREFs of sub_1800C6010 @ 0x1800C6010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C6010(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx
  _DWORD v9[6]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 144);
  v9[3] = a5;
  *(float *)v9 = a2;
  v9[5] = a7;
  *(float *)&v9[1] = a3;
  *(float *)&v9[2] = a4;
  v9[4] = a6;
  return (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v7 + 352LL))(v7, 1LL, v9);
}
