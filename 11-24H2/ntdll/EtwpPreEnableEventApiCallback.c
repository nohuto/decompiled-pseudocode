/*
 * XREFs of EtwpPreEnableEventApiCallback @ 0x180108458
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x18004A3C0 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall EtwpPreEnableEventApiCallback(
        __int64 a1))(__int128 *, __int64, _QWORD *, __int64, __int64, _QWORD, __int64)
{
  __int64 v1; // r11
  _QWORD *v2; // r8
  __int64 v3; // r9
  unsigned __int8 v4; // r10
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  __int64 (__fastcall *result)(__int128 *, __int64, _QWORD *, __int64, __int64, _QWORD, __int64); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // [rsp+58h] [rbp-20h] BYREF

  v1 = -1LL;
  v2 = (_QWORD *)a1;
  v3 = 0LL;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 116) )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v4 = *(_BYTE *)(a1 + 117);
    v3 = *(_QWORD *)(a1 + 104);
  }
  else
  {
    v4 = 0;
  }
  if ( *(_BYTE *)(a1 + 236) )
  {
    v5 = *(_BYTE *)(a1 + 237);
    v6 = v4;
    if ( v4 <= v5 )
      v6 = v5;
    v3 |= v2[28];
    v1 &= v2[27];
    v4 = v6;
  }
  result = (__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, __int64, __int64, _QWORD, __int64))v2[6];
  if ( result )
  {
    v8 = v2[30];
    v9 = v2[7];
    LOBYTE(v2) = v4;
    return (__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, __int64, __int64, _QWORD, __int64))result(&v10, 1LL, v2, v3, v1, *(_QWORD *)(v8 + 168), v9);
  }
  return result;
}
