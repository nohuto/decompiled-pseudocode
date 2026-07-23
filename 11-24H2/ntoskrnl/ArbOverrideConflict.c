/*
 * XREFs of ArbOverrideConflict @ 0x140703660
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNextRange @ 0x140A204F0 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x140A60170 (RtlGetFirstRange.c)
 */

char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  bool v6; // cf
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  memset(v8, 0, 32);
  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) != 0 )
  {
    RtlGetFirstRange(*(_QWORD *)(a1 + 48), v8, &v9);
    while ( 1 )
    {
      if ( !v9 )
        return v2;
      v4 = *v9;
      v5 = *(_QWORD *)(a2 + 16);
      v6 = v5 < *v9;
      if ( v5 > *v9 )
      {
        if ( v9[1] < v5 )
          goto LABEL_13;
        v6 = v5 < v4;
      }
      if ( (!v6 || *(_QWORD *)(a2 + 24) >= v4) && ((_BYTE)v9[4] & *(_BYTE *)(a2 + 67)) == 0 )
      {
        if ( v9[3] != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
          return 0;
        v2 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v5;
      }
LABEL_13:
      LOBYTE(v5) = 1;
      RtlGetNextRange(v8, &v9, v5);
    }
  }
  return 0;
}
