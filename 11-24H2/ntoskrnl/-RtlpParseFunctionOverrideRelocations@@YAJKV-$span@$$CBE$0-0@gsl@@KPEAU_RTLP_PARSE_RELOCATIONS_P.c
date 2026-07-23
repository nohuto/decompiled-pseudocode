/*
 * XREFs of ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x14093FEA8
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x14093F818 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409401C4 (-RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z.c)
 */

__int64 __fastcall RtlpParseFunctionOverrideRelocations(
        int a1,
        __int64 a2,
        unsigned int a3,
        struct _RTLP_PARSE_RELOCATIONS_PACKET *a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // rbx
  _DWORD *v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  _WORD *v9; // rsi
  unsigned __int64 v10; // r14
  char v11; // r11
  _WORD *v12; // rax
  unsigned __int16 v13; // r13
  unsigned __int8 v14; // r12
  unsigned __int16 v15; // r15
  unsigned __int16 v16; // bp
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  unsigned __int8 v20; // [rsp+30h] [rbp-88h]
  _WORD *v21; // [rsp+38h] [rbp-80h]
  __int128 v22; // [rsp+38h] [rbp-80h]
  __int128 v23; // [rsp+48h] [rbp-70h]
  __int128 v24; // [rsp+58h] [rbp-60h]
  char v26; // [rsp+C8h] [rbp+10h]

  v4 = *(_QWORD *)a2;
  v5 = (unsigned __int64 *)a2;
  if ( *(_QWORD *)a2 < 0xAuLL )
    return 3221225595LL;
  if ( v4 < 8 )
  {
    v6 = 0LL;
    goto LABEL_4;
  }
  v6 = *(_DWORD **)(a2 + 8);
  v8 = v4 - 8;
  *(_QWORD *)&v22 = v8;
  if ( v8 == -1LL )
    goto LABEL_44;
  *((_QWORD *)&v22 + 1) = v6 + 2;
  *(_OWORD *)a2 = v22;
LABEL_4:
  if ( v6 )
  {
    v7 = v6[1];
    v8 = v7 - 8;
    if ( v7 <= 8 || (v7 & 3) != 0 || v8 > *v5 || (*v6 & 0xFFF) != 0 )
      return 3221225595LL;
    v9 = (_WORD *)v5[1];
    if ( !v9 )
      goto LABEL_44;
    if ( (((_BYTE)v7 - 8) & 1) != 0 )
      goto LABEL_44;
    a2 = v8 >> 1;
    v10 = *v5 - v8;
    *(_QWORD *)&v23 = v10;
    if ( v10 == -1LL )
      goto LABEL_44;
    *((_QWORD *)&v23 + 1) = (char *)v9 + v8;
    v11 = 1;
    v12 = &v9[a2];
    v20 = -1;
    v13 = -1;
    v26 = 0;
    *(_OWORD *)v5 = v23;
    v21 = v12;
    while ( 1 )
    {
      if ( v9 == v12 )
      {
        if ( v10 >= 8 )
        {
          v8 = *v5;
          v6 = (_DWORD *)v5[1];
          if ( *v5 >= 8 )
          {
            v8 -= 8LL;
            *(_QWORD *)&v24 = v8;
            if ( v8 != -1LL )
            {
              *((_QWORD *)&v24 + 1) = v6 + 2;
              *(_OWORD *)v5 = v24;
              goto LABEL_4;
            }
          }
LABEL_44:
          gsl::details::terminate((gsl::details *)v8, a2);
          __debugbreak();
        }
        v6 = 0LL;
        goto LABEL_4;
      }
      v14 = 4;
      v15 = *v9 >> 12;
      v16 = *v9 & 0xFFF;
      if ( !v15 )
        break;
      if ( v15 == 1 )
        goto LABEL_16;
      if ( v15 != 2 )
      {
        if ( v15 != 3 )
          return 3221225595LL;
        v14 = 8;
      }
      v17 = 4;
LABEL_17:
      if ( v16 % v17 )
        return 3221225595LL;
      v18 = v16 + *v6;
      if ( v18 >= a1 - (unsigned int)v14 || v18 < a3 )
        return 3221225595LL;
      a2 = 0LL;
      if ( v11 )
      {
        if ( v16 > 4096 - v14 )
          LOBYTE(a2) = 1;
      }
      else
      {
        if ( v26 && v16 )
          return 3221225595LL;
        if ( !v16 )
        {
          v26 = 1;
          goto LABEL_25;
        }
        if ( v16 <= v13 || v16 < v13 + (unsigned int)v20 )
          return 3221225595LL;
        if ( v16 > 4096 - v14 )
          LOBYTE(a2) = 1;
      }
      if ( !v15 )
        return 3221225595LL;
      RtlpRecordFunctionOverrideRelocation(a4, a2, v18 >> 12, v16, v15, v14);
LABEL_25:
      v12 = v21;
      v11 = 0;
      v20 = v14;
      ++v9;
      v13 = v16;
    }
    if ( v11 || v16 )
      return 3221225595LL;
LABEL_16:
    v17 = 1;
    goto LABEL_17;
  }
  return *v5 != 0 ? 0xC000007B : 0;
}
