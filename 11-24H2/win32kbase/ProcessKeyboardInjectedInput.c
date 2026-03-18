/*
 * XREFs of ProcessKeyboardInjectedInput @ 0x1400FB4F8
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1400FABC0 (ProcessKeyboardInjectedInputViaRim.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1401157C0 (VKFromVSC.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInput(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int16 v6; // cx
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // cx
  int i; // eax
  __int16 v11; // dx
  int v12; // eax
  __int16 v14; // ax
  unsigned __int8 v15; // al
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h]

  v16 = 0LL;
  v3 = a3;
  v4 = (__int64)a2;
  LOBYTE(a3) = 0;
  v18 = 0LL;
  if ( a2 )
    v17 = *a2;
  else
    v17 = 0LL;
  v6 = *(_WORD *)(a1 + 4);
  if ( (v6 & 0x60) != 0 )
  {
    v7 = WORD1(v16);
  }
  else
  {
    LOBYTE(v16) = *(_BYTE *)(a1 + 2);
    LOBYTE(a2) = (v6 & 2) != 0 ? 0xE0 : 0;
    v15 = VKFromVSC(&v16, a2);
    LODWORD(a3) = v15;
    v7 = v15;
    WORD1(v16) = v15;
  }
  v8 = *(_WORD *)(a1 + 4);
  if ( (v8 & 0x40) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2);
    LOBYTE(a3) = *(_BYTE *)(a1 + 2);
    switch ( v9 )
    {
      case 16:
        LOBYTE(a3) = -95;
        break;
      case 17:
        LOBYTE(a3) = ((v8 & 2) != 0) | 0xA2;
        break;
      case 18:
        LOBYTE(a3) = ((v8 & 2) != 0) | 0xA4;
        break;
    }
    v7 = (unsigned __int8)a3 | 0x2000;
    *(_WORD *)(a1 + 2) = 0;
    WORD1(v16) = v7;
    v8 &= ~0x40u;
    *(_WORD *)(a1 + 4) = v8;
  }
  if ( (v8 & 1) != 0 )
  {
    v7 |= 0x8000u;
    WORD1(v16) = v7;
  }
  if ( (v8 & 0x20) != 0 )
  {
    LOWORD(v16) = *(_WORD *)(a1 + 2);
    v11 = ((v8 & 1) << 15) | 0x10E7 | v7;
LABEL_22:
    WORD1(v16) = v11;
    goto LABEL_23;
  }
  if ( (v8 & 2) != 0 )
  {
    v14 = 256;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(a3 - 96) <= 9u || (_BYTE)a3 == 110 )
  {
LABEL_24:
    v14 = 2048;
LABEL_25:
    v11 = v14 | v7;
    goto LABEL_22;
  }
  for ( i = 0; ausNumPadCvt[i]; ++i )
  {
    if ( (_BYTE)a3 == LOBYTE(ausNumPadCvt[i]) )
      goto LABEL_24;
  }
LABEL_23:
  v12 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  LOBYTE(a3) = 1;
  *(_QWORD *)&v18 = *(_QWORD *)a1;
  HIDWORD(v16) = v12;
  DWORD2(v18) = 0;
  return xxxProcessKeyEvent((unsigned int)&v16, 0, a3, 0, v4, v3);
}
