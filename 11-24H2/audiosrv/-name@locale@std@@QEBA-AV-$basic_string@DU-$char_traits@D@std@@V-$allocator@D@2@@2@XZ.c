/*
 * XREFs of ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180149728
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1801488C0 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180142948 (--$_Construct@$00PEBD@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXQEBD_K@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1801441EC (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

_OWORD *__fastcall std::locale::name(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  size_t v5; // r8
  int v6; // ecx
  _OWORD *v7; // rax
  int v8; // edi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *(_BYTE **)(v2 + 40);
    if ( !v4 )
      v4 = (_BYTE *)(v2 + 48);
    memset(v13, 0, sizeof(v13));
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    std::string::_Construct<1,char const *>(v13, v4, v5);
    v6 = 0;
    v7 = v13;
    v8 = 1;
  }
  else
  {
    v7 = v12;
    v6 = 2;
    v12[0] = 0LL;
    LOBYTE(v12[0]) = 0;
    v8 = 0;
    v12[1] = _mm_load_si128((const __m128i *)&_xmm);
  }
  v9 = *v7;
  v10 = v7[1];
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 15LL;
  *(_BYTE *)v7 = 0;
  *a2 = v9;
  a2[1] = v10;
  if ( v6 )
    std::string::~string((__int64)v12);
  if ( v8 )
    std::string::~string((__int64)v13);
  return a2;
}
