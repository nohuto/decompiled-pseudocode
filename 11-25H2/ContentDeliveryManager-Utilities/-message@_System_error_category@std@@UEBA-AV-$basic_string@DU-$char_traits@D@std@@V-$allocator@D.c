/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18003F270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Winerror_map@std@@YAPEBDH@Z @ 0x180004870 (-_Winerror_map@std@@YAPEBDH@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x1800293B0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 */

_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  const char *v4; // rax
  char *v5; // rdx

  v4 = std::_Winerror_map(a3);
  v5 = "unknown error";
  if ( v4 )
    v5 = (char *)v4;
  std::string::string(a2, v5);
  return a2;
}
