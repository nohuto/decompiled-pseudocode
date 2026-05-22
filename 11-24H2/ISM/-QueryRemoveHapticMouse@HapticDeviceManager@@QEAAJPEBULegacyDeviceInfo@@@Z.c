/*
 * XREFs of ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018C590
 * Callers:
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801979D0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x1800235E8 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CA0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C8010 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8194 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ?HapticDeviceQueryRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018B1F0 (-HapticDeviceQueryRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceManager::QueryRemoveHapticMouse(
        HapticDeviceManager *this,
        const struct LegacyDeviceInfo *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 ItemAt; // r14
  __int64 v7; // rax
  char *v8; // r8
  int v9; // edx
  int v10; // ecx
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    &v12,
    *((void (__fastcall ****)(_QWORD))this + 9));
  v3 = v12;
  v4 = (__int64)(v12[8] - v12[7]) >> 3;
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
        goto LABEL_9;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(ItemAt + 88),
      (void *)0xFFFFFFFFFFFFFFFFLL);
    InputTraceLogging::Haptics::HapticDeviceQueryRemoved(IMDT_MOUSE, (const unsigned __int16 *)a2 + 38);
  }
LABEL_9:
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v12);
  return 0LL;
}
