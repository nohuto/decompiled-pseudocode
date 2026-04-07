/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F0700
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F0028 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F3250 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800F2734 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::string::string(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a2 + v3) );
  std::string::assign(a1);
  return a1;
}
