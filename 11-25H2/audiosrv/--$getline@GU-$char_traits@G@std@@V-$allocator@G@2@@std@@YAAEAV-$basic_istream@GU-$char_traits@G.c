/*
 * XREFs of ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180156E1C
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x18015758C (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180131BD0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180157348 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  unsigned int v4; // edi
  char v5; // si
  __int64 v6; // rcx
  _WORD *v7; // rax
  __int64 v8; // r8
  unsigned __int16 i; // ax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+70h] [rbp+18h]
  unsigned int v15; // [rsp+78h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v14 = 0;
  v11 = a1;
  v6 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  LOBYTE(a2) = 1;
  if ( !(unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3, a2) )
    goto LABEL_14;
  v7 = (_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(v2);
  try
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *v7 = 0;
    for ( i = std::basic_streambuf<unsigned short>::sgetc(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72));
          ;
          i = std::basic_streambuf<unsigned short>::snextc(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72)) )
    {
      if ( i == 0xFFFF )
      {
        v4 = 1;
        goto LABEL_11;
      }
      if ( i == 47 )
      {
        v5 = 1;
        v14 = 1;
        std::basic_streambuf<unsigned short>::sbumpc(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72));
        goto LABEL_19;
      }
      if ( *(_QWORD *)(v2 + 16) >= 0x7FFFFFFFFFFFFFFEuLL )
        break;
      std::wstring::push_back(v2, i);
      v5 = 1;
      v14 = 1;
    }
    v4 = 2;
LABEL_11:
    v15 = v4;
  }
  catch ( ... )
  {
    LOBYTE(v8) = 1;
    std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
    v3 = a1;
    v4 = v15;
    v5 = v14;
  }
LABEL_19:
  if ( !v5 )
LABEL_14:
    v4 |= 2u;
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v11);
  return v3;
}
