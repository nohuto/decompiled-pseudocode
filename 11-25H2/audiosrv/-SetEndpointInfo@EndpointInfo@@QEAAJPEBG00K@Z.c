/*
 * XREFs of ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800EA720
 * Callers:
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800E6884 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180157F84 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x18015A5C8 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A4F1C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall EndpointInfo::SetEndpointInfo(
        EndpointInfo *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  _WORD *v8; // rax
  _WORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8

  v8 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this);
  *((_QWORD *)this + 2) = 0LL;
  *v8 = 0;
  v9 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)this + 32);
  v11 = -1LL;
  *((_QWORD *)this + 6) = 0LL;
  *v9 = 0;
  if ( v10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v10 + 2 * v12) );
    std::wstring::assign((__int64)this, v10, v12);
  }
  if ( a3 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a3[v13] );
    std::wstring::assign((__int64)this + 32, (__int64)a3, v13);
  }
  do
    ++v11;
  while ( a4[v11] );
  std::wstring::assign((__int64)this + 64, (__int64)a4, v11);
  *((_DWORD *)this + 24) = a5;
  return 0LL;
}
