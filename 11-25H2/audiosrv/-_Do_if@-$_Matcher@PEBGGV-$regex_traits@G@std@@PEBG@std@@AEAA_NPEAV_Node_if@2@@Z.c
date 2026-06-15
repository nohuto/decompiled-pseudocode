/*
 * XREFs of ?_Do_if@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z @ 0x180130A78
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x18012827C (--0-$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180128598 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012888C (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_if(
        __int64 a1,
        __int64 a2)
{
  __int64 v5; // r14
  __int64 i; // rsi
  __int64 v7; // rdi
  _QWORD v8[8]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v9[8]; // [rsp+68h] [rbp+17h] BYREF

  std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(v8, (_QWORD *)a1);
  while ( 1 )
  {
    if ( !a2 )
    {
      std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v8);
      return 0;
    }
    std::_Tgt_state_t<unsigned short const *>::operator=(a1, (__int64)v8);
    if ( (unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                            a1,
                            *(_QWORD *)(a2 + 16)) )
      break;
    a2 = *(_QWORD *)(a2 + 40);
  }
  if ( *(_BYTE *)(a1 + 200) )
  {
    std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(v9, (_QWORD *)a1);
    v5 = (__int64)(*(_QWORD *)a1 - v8[0]) >> 1;
    for ( i = *(_QWORD *)(a2 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      std::_Tgt_state_t<unsigned short const *>::operator=(a1, (__int64)v8);
      if ( (unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                              a1,
                              *(_QWORD *)(i + 16)) )
      {
        v7 = (__int64)(*(_QWORD *)a1 - v8[0]) >> 1;
        if ( v5 < v7 )
        {
          std::_Tgt_state_t<unsigned short const *>::operator=((__int64)v9, a1);
          v5 = v7;
        }
      }
    }
    std::_Tgt_state_t<unsigned short const *>::operator=(a1, (__int64)v9);
    std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v9);
  }
  std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v8);
  return 1;
}
