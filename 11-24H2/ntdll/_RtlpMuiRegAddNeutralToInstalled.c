/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x180098D10
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  wchar_t *Buffer; // r8
  LCID v9; // ecx
  _UNICODE_STRING LocaleName; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v12[176]; // [rsp+30h] [rbp-D8h] BYREF

  LocaleName = 0LL;
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
        *(_DWORD *)&LocaleName.Length = 11141120;
        LocaleName.Buffer = (wchar_t *)v12;
        if ( RtlLcidToLocaleName(v9, &LocaleName, 2u, 0) >= 0 )
        {
          Buffer = LocaleName.Buffer;
LABEL_12:
          RtlpMuiRegAddNeutralLanguage(a1, v5, Buffer);
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
      Buffer = (wchar_t *)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7));
      if ( !Buffer )
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
