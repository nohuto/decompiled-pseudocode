/*
 * XREFs of ArbFindSuitableRange @ 0x1407052D0
 * Callers:
 *     IopMemFindSuitableRange @ 0x140725BF0 (IopMemFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ArbShareDriverExclusive @ 0x14070641C (ArbShareDriverExclusive.c)
 *     RtlFindRange @ 0x140A2C2A0 (RtlFindRange.c)
 */

char __fastcall ArbFindSuitableRange(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r11
  __int64 v7; // r9
  char v8; // r8
  int v9; // ecx
  int v10; // edx
  char v11; // bp
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  v8 = *(_BYTE *)(a2 + 67);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
  {
    v8 |= 1u;
    *(_BYTE *)(a2 + 67) = v8;
  }
  v9 = *(_DWORD *)(v7 + 36);
  v10 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  v11 = v10 | 1;
  if ( (v9 & 1) == 0 )
    v11 = v10;
  if ( (v9 & 8) != 0 )
  {
    v8 |= 0x40u;
    *(_BYTE *)(a2 + 67) = v8;
  }
  if ( (int)RtlFindRange(a1[6], v2, v4, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24), v11, v8, a1[41], a1[42], a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return guard_dispatch_icall_no_overrides(a1, a2, v12, v13);
}
