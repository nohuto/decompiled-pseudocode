/*
 * XREFs of ??$copy_to@UIMulticastSessionManager@@@?$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1800FC39C
 * Callers:
 *     ?InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1800FD31C (-InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>::copy_to<IMulticastSessionManager>(
        __int64 a1,
        _QWORD *a2)
{
  CMulticastSessionManager *v2; // r8
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r9
  const struct _GUID *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // r10

  v2 = s_MulticastSessionManager;
  v3 = 0;
  *a2 = 0LL;
  if ( v2 )
  {
    if ( InlineIsEqualGUID(&GUID_0e8c8c43_8a8a_415b_9a27_a810f6918c4b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *v6 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      return v3;
    }
    if ( InlineIsEqualGUID(v4, v4) )
    {
      v10 = v8;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_bfad858f_c027_44b8_b1c4_5d5a571430bf) )
        return (unsigned int)-2147467262;
      v8 = v10;
    }
    *v9 = v10;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return v3;
  }
  return 0LL;
}
