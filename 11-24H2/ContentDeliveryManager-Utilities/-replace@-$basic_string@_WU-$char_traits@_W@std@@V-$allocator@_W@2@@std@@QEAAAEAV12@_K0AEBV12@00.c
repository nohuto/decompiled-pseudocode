/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x180088828
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180088B0C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047E4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004810 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005B048 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005C494 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ?move@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18005DEA8 (-move@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // r13
  _QWORD *v19; // rcx
  char *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  char *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  char *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  char *v30; // rcx
  _QWORD *v31; // rcx
  char *v32; // rdx
  _QWORD *v33; // rcx
  bool v34; // cf
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  _QWORD *v39; // rcx
  char *v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax

  v7 = a4;
  v8 = a1[2];
  v9 = a3;
  if ( v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::_Xout_of_range("invalid string position");
  v13 = a6;
  v14 = v8 - a2;
  if ( v8 - a2 < a3 )
    v9 = v8 - a2;
  v15 = v11 - a5;
  if ( v15 < a6 )
    v13 = v15;
  v16 = v8 - v9;
  if ( ~v13 <= v8 - v9 )
    std::_Xlength_error("string too long");
  v17 = v14 - v9;
  v18 = v16 + v13;
  if ( v8 < v16 + v13 )
    std::wstring::_Grow(a1, v16 + v13, 0);
  if ( a1 == v7 )
  {
    if ( v13 <= v9 )
    {
      if ( a1[3] < 8uLL )
        v23 = a1;
      else
        v23 = (_QWORD *)*a1;
      v24 = (char *)v23 + 2 * a5;
      if ( a1[3] < 8uLL )
        v25 = a1;
      else
        v25 = (_QWORD *)*a1;
      std::char_traits<unsigned short>::move((char *)v25 + 2 * a2, v24, v13);
      if ( a1[3] < 8uLL )
        v26 = a1;
      else
        v26 = (_QWORD *)*a1;
      v27 = (char *)v26 + 2 * a2 + 2 * v9;
      if ( a1[3] < 8uLL )
        v28 = a1;
      else
        v28 = (_QWORD *)*a1;
      v29 = v17;
      v30 = (char *)v28 + 2 * a2 + 2 * v13;
      goto LABEL_83;
    }
    if ( a5 > a2 )
    {
      v37 = a1[3];
      v38 = a2 + v9;
      if ( a2 + v9 > a5 )
      {
        if ( v37 < 8 )
          v42 = a1;
        else
          v42 = (_QWORD *)*a1;
        if ( v37 < 8 )
          v43 = a1;
        else
          v43 = (_QWORD *)*a1;
        std::char_traits<unsigned short>::move((char *)v43 + 2 * a2, (char *)v42 + 2 * a5, v9);
        if ( a1[3] < 8uLL )
          v44 = a1;
        else
          v44 = (_QWORD *)*a1;
        if ( a1[3] < 8uLL )
          v45 = a1;
        else
          v45 = (_QWORD *)*a1;
        std::char_traits<unsigned short>::move((char *)v45 + 2 * a2 + 2 * v13, (char *)v44 + 2 * v38, v17);
        if ( a1[3] < 8uLL )
          v46 = a1;
        else
          v46 = (_QWORD *)*a1;
        v27 = (char *)v46 + 2 * a5 + 2 * v13;
        if ( a1[3] < 8uLL )
          v47 = a1;
        else
          v47 = (_QWORD *)*a1;
        v13 -= v9;
        v30 = (char *)v47 + 2 * v38;
        goto LABEL_82;
      }
      if ( v37 < 8 )
        v39 = a1;
      else
        v39 = (_QWORD *)*a1;
      v40 = (char *)v39 + 2 * v38;
      if ( v37 < 8 )
        v41 = a1;
      else
        v41 = (_QWORD *)*a1;
      std::char_traits<unsigned short>::move((char *)v41 + 2 * a2 + 2 * v13, v40, v17);
      if ( a1[3] < 8uLL )
        v35 = a1;
      else
        v35 = (_QWORD *)*a1;
      v12 = v13 + a5 - v9;
      v34 = a1[3] < 8uLL;
    }
    else
    {
      if ( a1[3] < 8uLL )
        v31 = a1;
      else
        v31 = (_QWORD *)*a1;
      v32 = (char *)v31 + 2 * a2 + 2 * v9;
      if ( a1[3] < 8uLL )
        v33 = a1;
      else
        v33 = (_QWORD *)*a1;
      std::char_traits<unsigned short>::move((char *)v33 + 2 * a2 + 2 * v13, v32, v17);
      v34 = a1[3] < 8uLL;
      if ( a1[3] < 8uLL )
        v35 = a1;
      else
        v35 = (_QWORD *)*a1;
    }
    v27 = (char *)v35 + 2 * v12;
    if ( v34 )
      v36 = a1;
    else
      v36 = (_QWORD *)*a1;
    v30 = (char *)v36 + 2 * a2;
LABEL_82:
    v29 = v13;
LABEL_83:
    std::char_traits<unsigned short>::move(v30, v27, v29);
    goto LABEL_84;
  }
  if ( a1[3] < 8uLL )
    v19 = a1;
  else
    v19 = (_QWORD *)*a1;
  v20 = (char *)v19 + 2 * a2 + 2 * v9;
  if ( a1[3] < 8uLL )
    v21 = a1;
  else
    v21 = (_QWORD *)*a1;
  std::char_traits<unsigned short>::move((char *)v21 + 2 * a2 + 2 * v13, v20, v17);
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  if ( a1[3] < 8uLL )
    v22 = a1;
  else
    v22 = (_QWORD *)*a1;
  std::char_traits<wchar_t>::copy((char *)v22 + 2 * a2, (char *)v7 + 2 * a5, v13);
LABEL_84:
  if ( a1[3] < 8uLL )
    v48 = a1;
  else
    v48 = (_QWORD *)*a1;
  a1[2] = v18;
  *((_WORD *)v48 + v18) = 0;
  return a1;
}
