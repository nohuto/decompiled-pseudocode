/*
 * XREFs of HalpDeviceEquals @ 0x140B77580
 * Callers:
 *     HalpKdEnumerateDebuggingDevices @ 0x140B77850 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 */

char __fastcall HalpDeviceEquals(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // esi
  char v6; // al
  char v7; // cl
  int v8; // eax
  char v9; // al
  char v10; // cl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // ax
  __int16 v19; // cx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  char v23; // cl
  __int16 v24; // ax
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // ax

  v2 = KdDebugDevice;
  v4 = *(_DWORD *)(KdDebugDevice + 220);
  v5 = *(_DWORD *)(a2 + 220);
  if ( v4 == 2 )
  {
LABEL_5:
    if ( (v5 & 0xFFFFFFFD) == 0 )
    {
      v6 = *(_BYTE *)(KdDebugDevice + 14);
      v7 = *(_BYTE *)(a2 + 14);
      if ( v6 == v7 || (v6 == -1 || v7 == -1 ? (v8 = 1) : (v8 = 0), v8) )
      {
        v9 = *(_BYTE *)(KdDebugDevice + 15);
        v10 = *(_BYTE *)(a2 + 15);
        if ( v9 == v10 || (v9 == -1 || v10 == -1 ? (v11 = 1) : (v11 = 0), v11) )
        {
          if ( *(_DWORD *)KdDebugDevice == *(_DWORD *)a2
            || (*(_DWORD *)KdDebugDevice == -1 || *(_DWORD *)a2 == -1 ? (v12 = 1) : (v12 = 0), v12) )
          {
            v13 = *(_DWORD *)(KdDebugDevice + 4);
            v14 = *(_DWORD *)(a2 + 4);
            if ( v13 == v14 || v13 == -1 || v14 == -1 )
              return 1;
          }
        }
      }
    }
    if ( v4 == 1 || v5 == 2 )
    {
      v15 = *(_WORD *)(KdDebugDevice + 204);
      v16 = *(_WORD *)(a2 + 204);
      if ( v15 == v16 || (v15 == -1 || v16 == -1 ? (v17 = 1) : (v17 = 0), v17) )
      {
        v18 = *(_WORD *)(KdDebugDevice + 206);
        v19 = *(_WORD *)(a2 + 206);
        if ( v18 == v19 || (v18 == -1 || v19 == -1 ? (v20 = 1) : (v20 = 0), v20) )
        {
          v21 = *(_DWORD *)(KdDebugDevice + 232);
          if ( v21 == -1 )
            return 1;
          v22 = *(_DWORD *)(a2 + 232);
          if ( v22 == -1
            || v21 == v22 && !wcsncmp(*(const wchar_t **)(KdDebugDevice + 224), *(const wchar_t **)(a2 + 224), v21) )
          {
            return 1;
          }
        }
      }
    }
    v23 = 0;
    if ( v5 != 3 || *(_DWORD *)(v2 + 220) != *(_DWORD *)(a2 + 220) )
      return v23;
    if ( ((v24 = *(_WORD *)(v2 + 204), v25 = *(_WORD *)(a2 + 204), v24 == v25) || v24 == -1 || v25 == -1)
      && ((v26 = *(_WORD *)(v2 + 206), v27 = *(_WORD *)(a2 + 206), v26 == v27) || v26 == -1 || v27 == -1) )
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  if ( v5 == 2 || v4 == v5 )
  {
    v5 = *(_DWORD *)(KdDebugDevice + 220);
    goto LABEL_5;
  }
  return 0;
}
