/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x1800D237C
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlLcidToLocaleName @ 0x1800D26D0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v12[176]; // [rsp+30h] [rbp-D8h] BYREF

  v11 = 0LL;
  memset_thunk_772440563353939046(v12, 0, 0xAAuLL);
  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    v4 = 0;
    if ( *(_WORD *)(v3 + 6) )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v3 + 16) + 28LL * v4;
        if ( *(__int16 *)(v5 + 6) > 0 )
          break;
        v9 = *(unsigned __int16 *)(v5 + 4);
        LODWORD(v11) = 11141120;
        *((_QWORD *)&v11 + 1) = v12;
        if ( (int)RtlLcidToLocaleName(v9, &v11, 2LL) >= 0 )
        {
          v8 = *((_QWORD *)&v11 + 1);
LABEL_12:
          RtlpMuiRegAddNeutralLanguage(a1, v5, v8);
        }
LABEL_13:
        v3 = *(_QWORD *)(a1 + 24);
        if ( ++v4 >= *(unsigned __int16 *)(v3 + 6) )
          return v2;
      }
      v6 = *(_QWORD *)(a1 + 32);
      v7 = (unsigned int)*(__int16 *)(v5 + 6);
      if ( !v6 )
        goto LABEL_13;
      if ( (unsigned int)v7 > *(unsigned __int16 *)(v6 + 6) )
        goto LABEL_13;
      v8 = *(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7);
      if ( !v8 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
