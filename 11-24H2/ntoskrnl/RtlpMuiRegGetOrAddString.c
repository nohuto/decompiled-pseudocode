/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x14082D200
 * Callers:
 *     RtlpLoadPolicyLanguageSpec @ 0x14082BF64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14082CE38 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x14082D050 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x14082DC8C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14082E1CC (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14082D340 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegResizeStringPool @ 0x14082D810 (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // di
  char v6; // r14
  int v9; // esi
  unsigned __int16 *v10; // r10
  int v11; // edx
  unsigned int v12; // r11d
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  __int64 result; // rax
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v18 = 0;
  v6 = a3;
  if ( a1 && a2 && *a2 )
  {
    v9 = *(_DWORD *)a1 & 2;
    if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, !v9) )
      LOBYTE(a3) = 0;
    v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v18);
    if ( v4 >= 0 )
    {
LABEL_22:
      result = 0LL;
      goto LABEL_24;
    }
    if ( v6 )
    {
      v10 = *(unsigned __int16 **)(a1 + 32);
      v11 = v18;
      if ( !v10 )
        goto LABEL_20;
      v12 = v10[2];
      if ( v18 < 0 )
        v11 = 16;
      v13 = v10[5] + v11;
      v14 = v10[2];
      if ( (unsigned int)v10[3] + 1 >= v12 )
        v14 = v10[3] + 1;
      v15 = v10[4];
      v16 = v10[4];
      if ( v13 >= v15 )
        v16 = (unsigned int)v13;
      if ( (!v9 || v14 != v12 || (_DWORD)v16 != v15)
        && (v10 = (unsigned __int16 *)RtlpMuiRegResizeStringPool(*(PVOID *)(a1 + 32))) == 0LL
        || (*(_DWORD *)a1 |= 2u,
            LOBYTE(v16) = 1,
            *(_QWORD *)(a1 + 32) = v10,
            v4 = RtlpMuiRegGetOrAddStringToPool(v10, a2, v16, 0LL),
            v4 < 0) )
      {
LABEL_20:
        result = 3221225495LL;
        goto LABEL_24;
      }
      goto LABEL_22;
    }
  }
  result = 3221225485LL;
LABEL_24:
  if ( a4 )
    *a4 = v4;
  return result;
}
