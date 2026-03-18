/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x14010FDD0
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140191CE4 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        __int64 a16)
{
  unsigned int v19; // ebp
  __int64 (__fastcall *v20)(_QWORD, __int64 *, _QWORD, _QWORD, char, int, __int16, __int16, __int16, __int16, __int64, int, __int64, __int64, __int16, __int64); // r11
  __int64 v21; // xmm0_8
  __int64 v23; // [rsp+90h] [rbp-18h] BYREF
  int v24; // [rsp+98h] [rbp-10h]

  v19 = a1;
  v20 = *(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, char, int, __int16, __int16, __int16, __int16, __int64, int, __int64, __int64, __int16, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5784LL);
  if ( !v20 )
    return 0LL;
  v21 = *a2;
  v24 = *((_DWORD *)a2 + 2);
  v23 = v21;
  return v20(v19, &v23, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
