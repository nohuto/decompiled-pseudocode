/*
 * XREFs of EditionNonDwmTouchHitTest @ 0x14023AF2C
 * Callers:
 *     ApiSetEditionNonDwmTouchHitTest @ 0x140221F30 (ApiSetEditionNonDwmTouchHitTest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_OWORD *__fastcall EditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v8)(_OWORD *, __int64, __int64, __int64); // rax
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _OWORD *result; // rax
  _OWORD v21[7]; // [rsp+30h] [rbp-78h] BYREF

  v8 = *(__int64 (__fastcall **)(_OWORD *, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                 + 48)
                                                                     + 6104LL);
  if ( v8 )
  {
    v9 = (_OWORD *)v8(v21, a2, a3, a4);
    v10 = v9[1];
    *a1 = *v9;
    v11 = v9[2];
    a1[1] = v10;
    v12 = v9[3];
    a1[2] = v11;
    v13 = v9[4];
    a1[3] = v12;
    v14 = v9[5];
    a1[4] = v13;
    v15 = v9[6];
  }
  else
  {
    memset(v21, 0, sizeof(v21));
    v16 = v21[1];
    *a1 = v21[0];
    v17 = v21[2];
    a1[1] = v16;
    v18 = v21[3];
    a1[2] = v17;
    v19 = v21[4];
    a1[3] = v18;
    v14 = v21[5];
    a1[4] = v19;
    v15 = v21[6];
  }
  result = a1;
  a1[5] = v14;
  a1[6] = v15;
  return result;
}
