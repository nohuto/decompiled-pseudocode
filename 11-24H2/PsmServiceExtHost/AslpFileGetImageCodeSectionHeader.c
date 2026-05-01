/*
 * XREFs of AslpFileGetImageCodeSectionHeader @ 0x1800A1504
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0A34 (AslpFileGetCrcChecksumBoot.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpMemoryRangeCheckBounds @ 0x1800A3A50 (AslpMemoryRangeCheckBounds.c)
 *     AslpMemorySpanCheckBounds @ 0x1800A3A8C (AslpMemorySpanCheckBounds.c)
 */

__int64 __fastcall AslpFileGetImageCodeSectionHeader(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf
  _QWORD *v9; // rbx
  int v10; // r14d
  int i; // ebp
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v12[1] = 40LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  v6 = a3[1] - *a3;
  v13[0] = *a3;
  v13[1] = v6;
  if ( v6 < 0xF0 )
    return 3221225714LL;
  v7 = *(unsigned __int16 *)(a2 + 20) + 24LL;
  v8 = a2 + v7 == 0;
  v9 = (_QWORD *)(a2 + v7);
  v12[0] = v9;
  if ( v8 )
  {
    AslLogCallPrintf(1LL);
    return 3221225595LL;
  }
  else
  {
    v10 = *(unsigned __int16 *)(a2 + 6);
    for ( i = 0; i < v10; ++i )
    {
      if ( !(unsigned __int8)AslpMemorySpanCheckBounds(v12, v13) )
        goto LABEL_19;
      if ( *v9 == 0x747865742ELL )
      {
        *a1 = v9;
        a1[1] = v9 + 5;
        if ( (unsigned __int8)AslpMemoryRangeCheckBounds(a1, a3) )
          return 0LL;
        *a1 = 0LL;
        a1[1] = 0LL;
LABEL_19:
        AslLogCallPrintf(1LL);
        return 3221226030LL;
      }
      v9 += 5;
      v12[0] = v9;
    }
    AslLogCallPrintf(2LL);
    return 3221226021LL;
  }
}
