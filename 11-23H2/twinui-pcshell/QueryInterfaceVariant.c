/*
 * XREFs of QueryInterfaceVariant @ 0x18079B3DC
 * Callers:
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18079AA34 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall QueryInterfaceVariant(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *); // rcx

  *a3 = 0LL;
  result = 2147500034LL;
  if ( *(_WORD *)a1 == 13 )
  {
    v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *))(a1 + 8);
    if ( v4 )
      return (**v4)(v4, &GUID_0000000e_0000_0000_c000_000000000046);
  }
  else if ( *(_WORD *)a1 == 9 )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *))(a1 + 8);
    if ( v5 )
      return (**v5)(v5, &GUID_0000000e_0000_0000_c000_000000000046);
  }
  return result;
}
