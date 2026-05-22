/*
 * XREFs of ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CA948
 * Callers:
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CA484 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 * Callees:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x1800235E8 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C8010 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8194 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HapticProcessor::TryFindTouchpadHapticControllerForHandle(
        HANDLE hDevice,
        struct BamoSimpleHapticsControllerPrincipal **a2)
{
  const char *v4; // r9
  void *v6; // r12
  const char *v7; // r9
  const struct std::nothrow_t *v8; // rdx
  unsigned int LastError; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  void (__fastcall ***v11)(_QWORD); // rax
  void (__fastcall ***v12)(_QWORD); // rax
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  unsigned int v15; // edi
  void (__fastcall ***ItemAt)(_QWORD); // rax
  struct BamoSimpleHapticsControllerPrincipal *v17; // r14
  unsigned __int16 *v18; // rax
  signed __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-18h] BYREF
  void *v24; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int pcbSize; // [rsp+80h] [rbp+40h] BYREF
  struct BamoSimpleHapticsControllerPrincipal *v27; // [rsp+88h] [rbp+48h] BYREF

  pcbSize = 0;
  if ( GetRawInputDeviceInfoW(hDevice, 0x20000007u, 0LL, &pcbSize) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x164,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
             v4);
  v6 = operator new[](saturated_mul(pcbSize, 2uLL));
  v24 = v6;
  if ( GetRawInputDeviceInfoW(hDevice, 0x20000007u, v6, &pcbSize) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v11 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                          + 31)
                                                                                        + 8LL)
                                                                            + 168LL))(*((_QWORD *)BamoServerConnection
                                                                                      + 31) + 8LL);
    wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
      &v22,
      v11);
    if ( v22 )
    {
      v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v22 + 8) + 40LL))(v22 + 8);
      wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
        &v23,
        v12);
      v13 = v23;
      v14 = (__int64)(v23[8] - v23[7]) >> 3;
      v15 = 0;
      if ( (_DWORD)v14 )
      {
        while ( 1 )
        {
          ItemAt = (void (__fastcall ***)(_QWORD))Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                                                    v13,
                                                    v15);
          wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
            &v27,
            ItemAt);
          v17 = v27;
          v18 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v27 + 1) + 40LL))((_QWORD *)v27 + 1);
          v19 = (_BYTE *)v6 - (_BYTE *)v18;
          do
          {
            v20 = *(unsigned __int16 *)((char *)v18 + v19);
            v21 = *v18 - v20;
            if ( v21 )
              break;
            ++v18;
          }
          while ( v20 );
          if ( !v21 )
            break;
          wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v27);
          if ( ++v15 >= (unsigned int)v14 )
            goto LABEL_14;
        }
        v27 = 0LL;
        *a2 = v17;
        wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v27);
      }
LABEL_14:
      wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v23);
    }
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(&v22);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x166,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
                  v7);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v24, v8);
  return LastError;
}
