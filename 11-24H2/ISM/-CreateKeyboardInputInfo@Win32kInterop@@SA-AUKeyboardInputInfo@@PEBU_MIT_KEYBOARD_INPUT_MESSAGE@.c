/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800618D0
 * Callers:
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F4650 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009D442 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

_DWORD *__fastcall Win32kInterop::CreateKeyboardInputInfo(_DWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _WORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v9; // ax
  _WORD *v10; // rax
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1

  memset_0(a1, 0, 0x170uLL);
  *a1 = 4;
  v4 = (_DWORD *)(a2 + 344);
  a1[6] = 368;
  v5 = (_WORD *)a1 + 31;
  if ( *(_QWORD *)a2 )
    v4 = (_DWORD *)a2;
  v6 = 16LL;
  v7 = 2LL;
  a1[1] = *v4;
  *((_QWORD *)a1 + 4) = *(_QWORD *)(a2 + 336);
  *((_WORD *)a1 + 178) = *(_WORD *)(a2 + 332);
  a1[2] = *(_DWORD *)(a2 + 312);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 320);
  v8 = a2 - (_QWORD)v5;
  *((_BYTE *)a1 + 358) = *(_DWORD *)(a2 + 328) != 0;
  *((_WORD *)a1 + 28) = *(_WORD *)(a2 + 8);
  *((_WORD *)a1 + 29) = *(_WORD *)(a2 + 10);
  *((_WORD *)a1 + 30) = *(_WORD *)(a2 + 12);
  *((_WORD *)a1 + 47) = *(_WORD *)(a2 + 270);
  a1[88] = *(_DWORD *)(a2 + 272);
  *((_BYTE *)a1 + 49) = 1;
  do
  {
    if ( v6 == -2147483630 )
      break;
    v9 = *(_WORD *)((char *)v5 + v8 + 276);
    if ( !v9 )
      break;
    *v5++ = v9;
    --v6;
  }
  while ( v6 );
  v10 = v5 - 1;
  if ( v6 )
    v10 = v5;
  v11 = a1 + 24;
  *v10 = 0;
  v12 = (_OWORD *)(a2 + 14);
  if ( a1 == (_DWORD *)-96LL )
    goto LABEL_13;
  if ( a2 == -14 )
  {
    memset_0(v11, 0, 0x100uLL);
LABEL_13:
    *(_DWORD *)_o__errno(v11, v6, v7, v8) = 22;
    invalid_parameter_noinfo();
    return a1;
  }
  do
  {
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    v11[6] = v12[6];
    v11 += 8;
    v13 = v12[7];
    v12 += 8;
    *(v11 - 1) = v13;
    --v7;
  }
  while ( v7 );
  return a1;
}
