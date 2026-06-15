/*
 * XREFs of ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180130B90
 * Callers:
 *     ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x180130D18 (-_Do_rep@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z.c)
 * Callees:
 *     ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x18012827C (--0-$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180128598 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012888C (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012895C (--4-$vector@_NV-$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_rep0(
        __int64 *a1,
        __int64 a2,
        char a3)
{
  char v6; // bl
  int v7; // esi
  __int64 v8; // r14
  char v9; // r14
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // r15
  __int64 *v13; // rdx
  _QWORD v15[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v17[56]; // [rsp+68h] [rbp-60h] BYREF

  v6 = 0;
  v7 = 0;
  std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(&v16, a1);
  if ( *(int *)(a2 + 32) <= 0 )
  {
LABEL_6:
    std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(v15, a1);
    v9 = 0;
    v10 = *a1;
    if ( !(unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                             a1,
                             *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL)) )
      goto LABEL_9;
    if ( a3 )
    {
      std::_Tgt_state_t<unsigned short const *>::operator=((__int64)v15, (__int64)a1);
      v9 = 1;
LABEL_9:
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 36) != -1 )
        {
          v11 = v7++;
          if ( v11 >= *(_DWORD *)(a2 + 36) )
            break;
        }
        *a1 = v10;
        std::vector<bool>::operator=((__int64)(a1 + 1), (__int64)v17);
        if ( !(unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                                 a1,
                                 *(_QWORD *)(a2 + 16)) )
          break;
        v12 = *a1;
        if ( (unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                                a1,
                                *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL)) )
        {
          if ( !a3 )
            goto LABEL_18;
          std::_Tgt_state_t<unsigned short const *>::operator=((__int64)v15, (__int64)a1);
          v9 = 1;
        }
        if ( v10 == v12 )
          break;
        v10 = v12;
      }
      v13 = &v16;
      if ( v9 )
        v13 = v15;
      std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v13);
      std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v15);
      v6 = v9;
    }
    else
    {
LABEL_18:
      std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v15);
      v6 = 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = *a1;
      if ( !(unsigned __int8)std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                               a1,
                               *(_QWORD *)(a2 + 16)) )
        break;
      if ( v8 == *a1 )
        v7 = *(_DWORD *)(a2 + 32) - 1;
      if ( ++v7 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_6;
    }
    std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)&v16);
  }
  std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)&v16);
  return v6;
}
