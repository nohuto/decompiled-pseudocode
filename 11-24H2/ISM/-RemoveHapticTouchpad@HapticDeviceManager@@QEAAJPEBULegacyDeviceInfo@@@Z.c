/*
 * XREFs of ?RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018D40C
 * Callers:
 *     ?OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18008A4B0 (-OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x1800235E8 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C8010 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8194 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ?HapticDeviceRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018B264 (-HapticDeviceRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18018D21C (-RemoveAt@-$ListPrincipalCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_Au.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HapticDeviceManager::RemoveHapticTouchpad(
        HapticDeviceManager *this,
        const struct LegacyDeviceInfo *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 ItemAt; // rax
  __int64 v7; // rax
  char *v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v15; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    &v15,
    *((void (__fastcall ****)(_QWORD))this + 8));
  v3 = v15;
  v4 = (__int64)(v15[8] - v15[7]) >> 3;
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      ItemAt = Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                 v3,
                 v5);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(ItemAt + 8) + 40LL))(ItemAt + 8);
      v8 = (char *)a2 - v7 + 76;
      do
      {
        v9 = *(unsigned __int16 *)&v8[v7];
        v10 = *(unsigned __int16 *)v7 - v9;
        if ( v10 )
          break;
        v7 += 2LL;
      }
      while ( v9 );
      if ( !v10 )
        break;
      if ( ++v5 >= (unsigned int)v4 )
        goto LABEL_10;
    }
    v11 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>::RemoveAt(
            v3,
            v5);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\hapticdevicemanager.cpp",
        (const char *)(unsigned int)v11,
        v13);
    InputTraceLogging::Haptics::HapticDeviceRemoved(
      (enum tagINPUT_MESSAGE_DEVICE_TYPE)16,
      (const unsigned __int16 *)a2 + 38);
  }
LABEL_10:
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v15);
  return 0LL;
}
