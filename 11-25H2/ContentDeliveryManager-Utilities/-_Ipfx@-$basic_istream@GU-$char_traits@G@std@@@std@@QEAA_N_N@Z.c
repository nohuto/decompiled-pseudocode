/*
 * XREFs of ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18005B224
 * Callers:
 *     ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x18004B294 (--0sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z.c)
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049358 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004C824 (--1locale@std@@QEAA@XZ.c)
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x18005AB8C (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x18005D764 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005D954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?sbumpc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005DF10 (-sbumpc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005E28C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005E2B8 (-sgetc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::basic_istream<unsigned short>::_Ipfx(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  std::locale *v5; // rcx
  const struct std::locale::facet *v6; // rsi
  __int64 v7; // rdi
  _WORD **v8; // rax
  __int16 v9; // r8
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)v1 + v3 + 16) )
  {
    if ( *(__int64 *)((char *)v1 + v3 + 80) )
    {
      std::wostream::flush();
      v2 = *v1;
    }
    v4 = (__int64)v1 + *(int *)(v2 + 4);
    if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
    {
      v5 = (std::locale *)std::ios_base::getloc(v4, &v13);
      v6 = std::use_facet<std::ctype<unsigned short>>(v5);
      std::locale::~locale((std::locale *)&v13);
      try
      {
        v9 = std::wstreambuf::sgetc(*(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72));
        while ( v9 != -1 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64))(*(_QWORD *)v6 + 32LL))(
                  v6,
                  72LL) )
            goto LABEL_20;
          v7 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
          if ( std::wstreambuf::_Gnavail(v7) <= 1 )
          {
            if ( (unsigned __int16)std::wstreambuf::sbumpc(v7) == 0xFFFF )
              v9 = -1;
            else
              v9 = std::wstreambuf::sgetc(v7);
          }
          else
          {
            --**(_DWORD **)(v7 + 80);
            v8 = *(_WORD ***)(v7 + 56);
            v9 = *++*v8;
          }
        }
        std::basic_ios<unsigned short>::setstate((char *)v1 + *(int *)(*v1 + 4), 1LL);
      }
      catch ( ... )
      {
        std::basic_ios<unsigned short>::setstate((char *)a1 + *(int *)(*a1 + 4), 4LL);
        v1 = a1;
        goto LABEL_15;
      }
LABEL_20:
      ;
    }
LABEL_15:
    v2 = *v1;
    if ( !*(_DWORD *)((char *)v1 + *(int *)(*v1 + 4) + 16) )
      return 1;
  }
  std::basic_ios<unsigned short>::setstate((char *)v1 + *(int *)(v2 + 4), 2LL);
  return 0;
}
