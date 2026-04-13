/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18004CC80
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180051ED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180049634 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x18004B498 (--0sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18004C9C8 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004CA24 (--1locale@std@@QEAA@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005E76C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::operator>>(__int64 a1, __int64 a2)
{
  std::locale *v4; // rax
  const struct std::locale::facet *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-58h] BYREF
  char v10; // [rsp+48h] [rbp-50h]
  int v11; // [rsp+49h] [rbp-4Fh]
  __int16 v12; // [rsp+4Dh] [rbp-4Bh]
  char v13; // [rsp+4Fh] [rbp-49h]
  __int64 v14; // [rsp+50h] [rbp-48h] BYREF
  bool v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+59h] [rbp-3Fh]
  __int16 v17; // [rsp+5Dh] [rbp-3Bh]
  char v18; // [rsp+5Fh] [rbp-39h]
  __int64 *v19; // [rsp+60h] [rbp-38h] BYREF
  char v20; // [rsp+68h] [rbp-30h]
  _BYTE v21[40]; // [rsp+70h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+18h] BYREF
  char v23; // [rsp+B8h] [rbp+20h] BYREF

  v22 = 0;
  std::basic_istream<unsigned short>::sentry::sentry((__int64)&v19, a1);
  if ( v20 )
  {
    v4 = (std::locale *)std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), &v23);
    v5 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v4);
    std::locale::~locale((std::locale *)&v23);
    v6 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
    v7 = *(_QWORD *)(v6 + 72);
    v9 = 0LL;
    v10 = 1;
    v11 = v16;
    v12 = v17;
    v13 = v18;
    v14 = v7;
    v15 = v7 == 0;
    (*(void (__fastcall **)(const struct std::locale::facet *, _BYTE *, __int64 *, __int64 *, __int64, unsigned int *, __int64))(*(_QWORD *)v5 + 56LL))(
      v5,
      v21,
      &v14,
      &v9,
      v6,
      &v22,
      a2);
  }
  std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v22);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v19);
  return a1;
}
