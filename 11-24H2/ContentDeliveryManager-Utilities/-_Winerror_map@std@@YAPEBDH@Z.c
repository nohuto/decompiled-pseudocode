/*
 * XREFs of ?_Winerror_map@std@@YAPEBDH@Z @ 0x180004880
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18003F450 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

const char *__fastcall std::_Winerror_map(int a1)
{
  _QWORD *v1; // rax

  v1 = &unk_1800BF030;
  if ( !"permission denied" )
    return 0LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( !v1[1] )
      return 0LL;
  }
  return (const char *)v1[1];
}
