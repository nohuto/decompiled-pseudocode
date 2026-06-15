/*
 * XREFs of ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800EF5D8
 * Callers:
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800EACD0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180160D34 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x180163378 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A1504 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall EndpointInfo::SetEndpointInfo(
        EndpointInfo *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  _WORD *v8; // rax
  __int64 v9; // rdx
  _WORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8

  v8 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this, (__int64)a2);
  *((_QWORD *)this + 2) = 0LL;
  *v8 = 0;
  v10 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this + 32, v9);
  v12 = -1LL;
  *((_QWORD *)this + 6) = 0LL;
  *v10 = 0;
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v11 + 2 * v13) );
    std::wstring::assign((__int64)this, v11, v13);
  }
  if ( a3 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
    std::wstring::assign((__int64)this + 32, (__int64)a3, v14);
  }
  do
    ++v12;
  while ( a4[v12] );
  std::wstring::assign((__int64)this + 64, (__int64)a4, v12);
  *((_DWORD *)this + 24) = a5;
  return 0LL;
}
