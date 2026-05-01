/*
 * XREFs of _anonymous_namespace_::TimeStringToTimePoint @ 0x1800C5194
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1800C4F14 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?5GU?$char_traits@G@std@@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1800C52A8 (--$-5GU-$char_traits@G@std@@@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$_.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800C5610 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800C5894 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::TimeStringToTimePoint(_QWORD *a1, _WORD **a2)
{
  const wchar_t *v3; // rax
  _QWORD v5[19]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v6[104]; // [rsp+B8h] [rbp-48h] BYREF
  void *v7[4]; // [rsp+120h] [rbp+20h] BYREF
  struct tm Tm; // [rsp+140h] [rbp+40h] BYREF

  memset(&Tm, 0, sizeof(Tm));
  std::wstring::wstring((char **)v7, *a2);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v5,
    v7);
  std::wstring::_Tidy_deallocate(v7);
  v7[0] = &Tm;
  v3 = L"%Y-%m-%dT%H:%M:%SZ";
  v7[1] = (void *)L"%Y-%m-%dT%H:%M:%SZ";
  do
    ++v3;
  while ( *v3 );
  v7[2] = (void *)v3;
  std::operator>><unsigned short,std::char_traits<unsigned short>>(v5, v7);
  if ( std::ios_base::fail((std::ios_base *)((char *)v5 + *(int *)(v5[0] + 4LL))) )
    *a1 = 0LL;
  else
    *a1 = 10000000 * _mkgmtime64(&Tm);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v6);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v6);
  return a1;
}
