/*
 * XREFs of RtlpConstructSwitchJumpRelocationFixup @ 0x1404BC5B8
 * Callers:
 *     RtlApplySwitchJumpRelocationToPage @ 0x1404BC4E4 (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToImage @ 0x1406A3D14 (RtlApplySwitchJumpRelocationToImage.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpConstructSwitchJumpRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rcx

  v6 = 0LL;
  *(_WORD *)a6 = 0;
  *(_QWORD *)(a6 + 2) = 0xCCCCCCCCCCCCCCCCuLL;
  *(_DWORD *)(a6 + 10) = -858993460;
  v7 = (unsigned __int16)*a4;
  if ( a5 )
  {
    v8 = *(_DWORD *)(a2 + 48) + *(_DWORD *)(a3 + 4 * (v7 >> 12)) - (a1 + 5);
    *(_WORD *)a6 = 63;
    *(_WORD *)(a6 + 3) = v8;
    v9 = HIWORD(v8);
    *(_BYTE *)(a6 + 6) = HIBYTE(v8);
    *(_BYTE *)(a6 + 2) = -24;
    *(_BYTE *)(a6 + 5) = BYTE2(v8);
    *(_BYTE *)(a6 + 7) = -52;
  }
  else
  {
    v10 = 0LL;
    if ( (v7 & 0xF000) >= 0x8000 )
    {
      v6 = 1LL;
      *(_BYTE *)(a6 + 2) = 65;
      v10 = 1LL;
    }
    *(_BYTE *)(v10 + a6 + 2) = -1;
    LOWORD(v9) = *a4 >> 12;
    LOBYTE(v9) = v9 & 7 | 0xE0;
    *(_BYTE *)(v6 + a6 + 3) = v9;
    *(_WORD *)a6 = 63;
  }
  return v9;
}
