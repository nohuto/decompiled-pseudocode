/*
 * XREFs of DpiQueryFeatureSupportLegacy @ 0x140247010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiQueryFeatureSupportLegacy(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  unsigned int v3; // r11d
  bool v4; // r10
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  __int64 result; // rax

  v2 = 0;
  v3 = 0;
  v4 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v9 = *(_DWORD *)(a1 + 5848);
      v4 = (v9 & 0x20000) != 0;
      v6 = (v9 & 0x20000) == 0;
      goto LABEL_13;
    case 1:
      v8 = *(_DWORD *)(a1 + 5848);
      v4 = (v8 & 0x100000) != 0;
      v6 = (v8 & 0x100000) == 0;
      goto LABEL_13;
    case 2:
      v7 = *(_DWORD *)(a1 + 5848);
      v4 = (v7 & 0x1000000) != 0;
      v6 = (v7 & 0x1000000) == 0;
      goto LABEL_13;
    case 3:
LABEL_9:
      v4 = 1;
      v2 = 1;
      goto LABEL_14;
    case 4:
      v5 = *(_DWORD *)(a1 + 5848);
      v4 = (v5 & 0x8000000) != 0;
      v6 = (v5 & 0x8000000) == 0;
LABEL_13:
      LOBYTE(v2) = !v6;
      goto LABEL_14;
    case 5:
      goto LABEL_9;
  }
  v3 = -1073741811;
LABEL_14:
  *(_BYTE *)(a2 + 9) = v4;
  result = v3;
  *(_BYTE *)(a2 + 10) = v4;
  *(_WORD *)(a2 + 4) = v2;
  *(_WORD *)(a2 + 6) = v2;
  return result;
}
