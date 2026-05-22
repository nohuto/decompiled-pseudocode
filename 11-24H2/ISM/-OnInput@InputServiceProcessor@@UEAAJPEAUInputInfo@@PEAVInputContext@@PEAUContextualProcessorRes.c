/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180063970 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     memcpy_s_3 @ 0x1800F5488 (memcpy_s_3.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x18015BEA8 (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x18015C008 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x18015C06C (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v6; // esi
  _OWORD *KeyboardEvent; // rax
  rsize_t v8; // r9
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  _KEYBOARD_INPUT_DATA v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[296]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KEYBOARD_INPUT_DATA v17; // [rsp+160h] [rbp+60h] BYREF
  int v18; // [rsp+174h] [rbp+74h]
  int v19; // [rsp+178h] [rbp+78h]
  __int64 v20; // [rsp+188h] [rbp+88h]
  _BYTE v21[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v22; // [rsp+1A4h] [rbp+A4h]
  unsigned __int16 v23; // [rsp+1B2h] [rbp+B2h]
  _BYTE Destination[266]; // [rsp+1C6h] [rbp+C6h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *((_DWORD *)a4 + 2) = 3;
    v6 = 1;
    if ( !*((_BYTE *)a2 + 358) )
    {
      KeyboardEvent = (_OWORD *)InputServiceProcessor::CreateKeyboardEvent(v16);
      v9 = v21;
      v10 = 2LL;
      do
      {
        *v9 = *KeyboardEvent;
        v9[1] = KeyboardEvent[1];
        v9[2] = KeyboardEvent[2];
        v9[3] = KeyboardEvent[3];
        v9[4] = KeyboardEvent[4];
        v9[5] = KeyboardEvent[5];
        v9[6] = KeyboardEvent[6];
        v9 += 8;
        *(v9 - 1) = KeyboardEvent[7];
        KeyboardEvent += 8;
        --v10;
      }
      while ( v10 );
      *v9 = *KeyboardEvent;
      v9[1] = KeyboardEvent[1];
      *((_QWORD *)v9 + 4) = *((_QWORD *)KeyboardEvent + 4);
      memcpy_s_3(Destination, 0LL, (char *)a2 + 96, v8);
      if ( IsEdition(8778LL) )
      {
        v15 = 0;
        *(_QWORD *)&v14.UnitId = 0LL;
        if ( *((_QWORD *)a3 + 2) )
        {
          if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                      (__int64 *)&v14) >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v14.UnitId + 40LL))(
                    *(_QWORD *)&v14.UnitId,
                    &v15);
            if ( v11 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x9E,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\"
                              "system\\lib\\inputserviceprocessor.cpp",
                (const char *)(unsigned int)v11,
                *(int *)&v14.UnitId);
          }
          if ( v15 )
            MITSetLastInputRecipient();
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
      if ( *((_QWORD *)a3 + 2) )
      {
        *(_QWORD *)&v14.UnitId = *((_QWORD *)a3 + 2);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
        if ( (unsigned __int8)GetContainerIdFromInputTarget(&v14, (char *)a2 + 360) )
        {
          v22 = 1;
          if ( v23 == 3 || !v23 || v23 >= 7u )
            v6 = 3;
        }
        else
        {
          v22 = 0;
        }
      }
      InputTraceLogging::Keyboard::DeliverToInputService((*((_WORD *)a2 + 47) & 1) == 0, *((_DWORD *)a2 + 1));
      v12 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, _BYTE *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                              + 32LL))(
              NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
              v21);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system"
                        "\\lib\\inputserviceprocessor.cpp",
          (const char *)(unsigned int)v12,
          *(int *)&v14.UnitId);
    }
    memset_0(&v17, 0, 0x40uLL);
    v20 = *((unsigned int *)a2 + 1);
    v17 = *KeyboardInputInfo::GetKeyboardInputData(a2, &v14);
    v18 = 1;
    v19 = *((_DWORD *)a2 + 90);
    if ( (v6 & 2) != 0 && (*((_WORD *)a2 + 29) == 54 || *((_WORD *)a2 + 29) == 69) )
      v17.Flags &= ~2u;
    NtMITSynthesizeKeyboardInput(v6, &v17);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
