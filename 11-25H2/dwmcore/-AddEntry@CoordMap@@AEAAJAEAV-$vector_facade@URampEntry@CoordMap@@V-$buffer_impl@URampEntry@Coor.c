/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180126480
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180125CBC (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@_J@Z @ 0x180125180 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@_J@std@@YA-A_T.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, char **a2, __int64 a3, __int64 a4, int a5)
{
  char *v5; // rsi
  char *v6; // r8
  char *v8; // rdx
  unsigned __int64 v9; // r15
  char v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // r10d
  __int64 v13; // xmm1_8
  __int64 v14; // r13
  char *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r10
  unsigned int v22; // ebx
  signed __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  _OWORD *v27; // r11
  unsigned __int64 v28; // r14
  char *v29; // rax
  char *v30; // rbx
  char *v31; // rsi
  signed __int64 v32; // rdi
  void *v33; // rax
  char *v34; // rcx
  bool v35; // zf
  __int64 v36; // r15
  __int128 v37; // [rsp+30h] [rbp-21h]
  __int128 v38; // [rsp+40h] [rbp-11h] BYREF
  __int64 v39; // [rsp+50h] [rbp-1h]
  __int128 v40; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+70h] [rbp+1Fh]

  v6 = a2[1];
  v8 = *a2;
  v9 = (v6 - v8) >> 4;
  v10 = 0;
  v11 = 0;
  v12 = v9;
  while ( 1 )
  {
    if ( v11 >= v9 )
      goto LABEL_10;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v8[16 * v11] - *(float *)a4) & _xmm) <= 0.0000011920929 )
    {
      if ( !*(_DWORD *)&v8[16 * v11 + 12] )
      {
        if ( !a5 )
        {
          v22 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
          return v22;
        }
        v10 = 1;
      }
      v12 = v11;
      if ( !v10 )
        goto LABEL_10;
      if ( a5 == 1 )
      {
        *(_DWORD *)&v8[16 * v11 + 4] = *(_DWORD *)(a4 + 4);
      }
      else if ( a5 == 2 )
      {
        *(_DWORD *)&v8[16 * v11 + 8] = *(_DWORD *)(a4 + 8);
      }
      return 0;
    }
    if ( *(float *)&v8[16 * v11] > *(float *)a4 )
      break;
    ++v11;
  }
  v12 = v11;
LABEL_10:
  v13 = *(unsigned int *)(a4 + 4);
  *(_QWORD *)&v37 = *(_QWORD *)a4;
  *((_QWORD *)&v37 + 1) = *(unsigned int *)(a4 + 8);
  v14 = v12;
  if ( !((a2[2] - v6) >> 4) )
  {
    if ( v9 + 1 >= v9 )
    {
      v28 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)((a2[2] - v8) >> 4),
              (a2[2] - v8) >> 4,
              v9 + 1);
      v29 = (char *)operator new[](saturated_mul(v28, 0x10uLL));
      v30 = *a2;
      v39 = 0LL;
      v31 = v29;
      v32 = a2[1] - v30;
      *(_QWORD *)&v38 = v29;
      *((_QWORD *)&v38 + 1) = v9;
      v41 = 0LL;
      v40 = v38;
      v33 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CoordMap::RampEntry *> &,__int64>(
                      &v40,
                      v32 >> 4);
      memmove_0(v33, v30, v32);
      v34 = *a2;
      v35 = *a2 == (char *)(a2 + 3);
      *a2 = v31;
      if ( v35 )
        v34 = 0LL;
      operator delete(v34);
      v36 = (__int64)&(*a2)[16 * v9];
      a2[2] = &(*a2)[16 * v28];
      a2[1] = (char *)v36;
      goto LABEL_11;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_31:
    v26 = v39;
    v27 = (_OWORD *)(v13 + 16);
    while ( 1 )
    {
      v15 -= 16;
      if ( !(_QWORD)v38 )
        goto LABEL_12;
      if ( !v26 )
        goto LABEL_12;
      --v26;
      --v27;
      if ( v26 >= *((_QWORD *)&v38 + 1) )
        goto LABEL_12;
      *v27 = *(_OWORD *)v15;
      if ( v15 == v21 )
        goto LABEL_18;
    }
  }
LABEL_11:
  v5 = *a2;
  v15 = a2[1];
  v39 = 0LL;
  v16 = (v15 - v5) >> 4;
  *((_QWORD *)&v38 + 1) = 1LL;
  v17 = 16 * v16;
  v18 = v16 - v14;
  v41 = 0LL;
  *(_QWORD *)&v38 = &v5[16 * v16];
  v13 = v38;
  if ( !(_QWORD)v38 )
    goto LABEL_12;
  v41 = 1LL;
  v19 = v16 - v14;
  if ( v18 > 1 )
    v19 = 1LL;
  v20 = 16 * v19;
  v21 = &v15[-v20];
  v39 = 1LL;
  if ( v15 != &v15[-v20] )
    goto LABEL_31;
LABEL_18:
  if ( v18 <= 1 )
    goto LABEL_19;
  if ( v16 && (!v5 || v16 < 0) )
LABEL_12:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v38 + 1) = v16;
  v39 = v16;
  *(_QWORD *)&v38 = v5;
  v24 = v17 - 16 * v14 - 16;
  v25 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CoordMap::RampEntry *> &,__int64>(&v38, -(v24 >> 4));
  memmove_0((void *)(v25 - v24), &v5[16 * v14], v24);
LABEL_19:
  a2[1] += 16;
  *(_OWORD *)&v5[16 * v14] = v37;
  return 0;
}
