/*
 * XREFs of VmpFillSlat @ 0x14039CC40
 * Callers:
 *     VmpProcessUpdateSlat @ 0x14039A3E4 (VmpProcessUpdateSlat.c)
 * Callees:
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14039D530 (HvlMapGpaPages.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     VmpLogLargeSlatFill @ 0x140649F78 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x14064A1E8 (VmpLogSparseSlatFill.c)
 */

__int64 __fastcall VmpFillSlat(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  int v6; // esi
  unsigned int v9; // edi
  __int64 v11; // rcx
  _QWORD *v12; // r15
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  int v16; // ecx

  v6 = a3;
  if ( a3 != 512 )
    goto LABEL_2;
  if ( (*a4 & 0x1FFLL) != 0 )
    goto LABEL_2;
  v12 = a4 + 1;
  v13 = a4[1];
  if ( (v13 & 0x1FF) != 0 )
    goto LABEL_2;
  v14 = a4 + 1024;
  if ( a4[1022] != *a4 + 511LL || a4[1023] != v13 + 511 )
    goto LABEL_2;
  for ( i = a4 + 2; i < v14; i += 2 )
  {
    if ( *i != *(i - 2) + 1LL )
      goto LABEL_2;
    if ( i[1] != *(i - 1) + 1LL )
      break;
  }
  if ( i == v14 )
  {
    *(_WORD *)(a1 + 136) |= 1u;
    v9 = HvlMapGpaPages(*(_QWORD *)(a1 + 104), *a4, a2 | 0x80000000, 1, (__int64)v12, (__int64)a5);
    if ( *(_QWORD *)&VmpTraceLoggingProvider
      && **(_DWORD **)&VmpTraceLoggingProvider
      && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&VmpTraceLoggingProvider, 1LL) )
    {
      VmpLogLargeSlatFill(v16, *a4, *v12, a2, *(_QWORD *)(a1 + 104), v9);
    }
    *a5 <<= 9;
  }
  else
  {
LABEL_2:
    v9 = HvlMapSparseGpaPages(*(_QWORD *)(a1 + 104), a2, v6, (_DWORD)a4, (__int64)a5);
    if ( *(_QWORD *)&VmpTraceLoggingProvider )
    {
      if ( **(_DWORD **)&VmpTraceLoggingProvider )
      {
        if ( (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 1) != 0 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
          if ( (v11 & 1) == v11 )
            VmpLogSparseSlatFill(v11, (_DWORD)a4, v6, a2, *(_QWORD *)(a1 + 104), v9);
        }
      }
    }
  }
  return v9;
}
