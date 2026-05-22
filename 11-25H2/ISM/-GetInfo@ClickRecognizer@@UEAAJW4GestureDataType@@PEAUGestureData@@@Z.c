/*
 * XREFs of ?GetInfo@ClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801AD3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ClickRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  char v3; // r9
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int16 v8; // dx
  int v9; // eax

  v3 = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( *(_DWORD *)a3 != 12 || (*(_BYTE *)(a1 + 16) & 4) == 0 )
      return v3 == 0 ? 0x80070057 : 0;
    v8 = -5;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 48);
    goto LABEL_23;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( *(_DWORD *)a3 != 12 || (*(_BYTE *)(a1 + 16) & 8) == 0 )
      return v3 == 0 ? 0x80070057 : 0;
    v8 = -9;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 52);
    v9 = *(_DWORD *)(a1 + 60);
LABEL_23:
    *(_DWORD *)(a3 + 8) = v9;
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *(_DWORD *)a3 != 16 )
      return v3 == 0 ? 0x80070057 : 0;
    if ( (*(_BYTE *)(a1 + 16) & 0x10) != 0 )
    {
      v8 = -17;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 64);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 16) & 0x20) == 0 )
        return v3 == 0 ? 0x80070057 : 0;
      v8 = -33;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
    }
LABEL_24:
    v3 = 1;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 4 && *(_DWORD *)a3 == 16 && (*(_WORD *)(a1 + 16) & 0x100) != 0 )
    {
      v3 = 1;
      *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 104);
      v8 = -257;
      *(_DWORD *)(a3 + 12) = 1;
LABEL_25:
      *(_WORD *)(a1 + 16) &= v8;
    }
  }
  else if ( *(_DWORD *)a3 == 16 && (*(_BYTE *)(a1 + 16) & 0x40) != 0 )
  {
    v3 = 1;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 96);
    v8 = -65;
    *(_DWORD *)(a3 + 12) = 1;
    goto LABEL_25;
  }
  return v3 == 0 ? 0x80070057 : 0;
}
