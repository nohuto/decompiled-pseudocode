/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call @ 0x180017830
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                          *(_QWORD *)(a1 + 16),
                          a2,
                          *(_QWORD *)(a1 + 16),
                          a1) )
    v2 = (_QWORD *)*v2;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)g_StreamClassPolicyManager + 40LL))(
           g_StreamClassPolicyManager,
           *(unsigned int *)(v3 + 8),
           v2);
}
