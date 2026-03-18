/*
 * XREFs of EditionPointerActivate @ 0x14014BA18
 * Callers:
 *     ApiSetEditionPointerActivate @ 0x140192AE0 (ApiSetEditionPointerActivate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPointerActivate(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_OWORD *, _QWORD, __int64, __int64, _DWORD)
{
  unsigned __int16 v6; // bp
  __int64 (__fastcall *result)(_OWORD *, _QWORD, __int64, __int64, _DWORD); // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v14[7]; // [rsp+30h] [rbp-78h] BYREF

  v6 = a2;
  result = *(__int64 (__fastcall **)(_OWORD *, _QWORD, __int64, __int64, _DWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                a1,
                                                                                                a2)
                                                                                            + 48)
                                                                                + 5168LL);
  if ( result )
  {
    v9 = a1[1];
    v14[0] = *a1;
    v14[2] = a1[2];
    v10 = a1[4];
    v14[1] = v9;
    v11 = a1[3];
    v14[4] = v10;
    v12 = a1[6];
    v14[3] = v11;
    v13 = a1[5];
    v14[6] = v12;
    v14[5] = v13;
    return (__int64 (__fastcall *)(_OWORD *, _QWORD, __int64, __int64, _DWORD))result(v14, v6, a3, a4, 0);
  }
  return result;
}
