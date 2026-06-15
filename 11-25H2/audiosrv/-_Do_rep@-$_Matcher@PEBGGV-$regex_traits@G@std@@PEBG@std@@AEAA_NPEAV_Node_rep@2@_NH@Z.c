/*
 * XREFs of ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x180130D18
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x18012827C (--0-$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180128598 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012888C (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180130B90 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_rep(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4)
{
  char matched; // bp
  __int64 v10; // rsi
  int v11; // ecx
  _QWORD *v12; // r13
  __int64 v13; // rax
  bool v14; // r15
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v18[8]; // [rsp+30h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a2 + 52) == 1 )
    return std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_rep0(
             a1,
             a2,
             a3);
  matched = 0;
  std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(v18, a1);
  v10 = a1[16] + 16LL * *(unsigned int *)(a2 + 48);
  v11 = *(_DWORD *)v10;
  v16 = *(_DWORD *)v10;
  v12 = *(_QWORD **)(v10 + 8);
  v13 = *a1;
  v17 = *a1;
  v14 = !a4 || *v12 != v13;
  if ( *(int *)(a2 + 36) >= 0 && *(_DWORD *)(a2 + 36) <= a4 )
    goto LABEL_21;
  if ( a4 >= *(_DWORD *)(a2 + 32) )
  {
    if ( !a3 )
    {
      matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                  a1,
                  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL));
      if ( matched )
        goto LABEL_24;
      if ( v14 )
      {
        std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v18);
        goto LABEL_11;
      }
LABEL_23:
      std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v18);
      goto LABEL_24;
    }
    if ( v14 )
    {
      *(_DWORD *)v10 = a4 + 1;
      *(_QWORD *)(v10 + 8) = &v17;
      matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                  a1,
                  *(_QWORD *)(a2 + 16));
      v11 = v16;
    }
    else if ( a4 > 1 )
    {
      goto LABEL_23;
    }
    if ( matched )
      goto LABEL_24;
    *(_DWORD *)v10 = v11;
    *(_QWORD *)(v10 + 8) = v12;
    std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v18);
    goto LABEL_21;
  }
  if ( v14 )
  {
LABEL_11:
    *(_DWORD *)v10 = a4 + 1;
    *(_QWORD *)(v10 + 8) = &v17;
    v15 = *(_QWORD *)(a2 + 16);
    goto LABEL_22;
  }
LABEL_21:
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
LABEL_22:
  matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
              a1,
              v15);
  if ( !matched )
    goto LABEL_23;
LABEL_24:
  *(_DWORD *)v10 = v16;
  *(_QWORD *)(v10 + 8) = v12;
  std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v18);
  return matched;
}
