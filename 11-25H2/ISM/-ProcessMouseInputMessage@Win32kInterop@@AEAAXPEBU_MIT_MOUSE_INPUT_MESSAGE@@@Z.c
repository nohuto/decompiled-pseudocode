/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180037FA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x180036810 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x18003953C (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180050A48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800812B8 (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180091C44 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18009AF38 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18009B024 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800EEA50 (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800EF940 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessMouseInputMessage(Win32kInterop *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  struct _MIT_MOUSE_INPUT_MESSAGE *v3; // rbx
  unsigned int v4; // edi
  int v5; // ecx
  __int64 v6; // rdi
  char v7; // al
  struct _MIT_MOUSE_INPUT_MESSAGE *v8; // r9
  __int64 v9; // rcx
  _OWORD *v10; // rax
  char *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // r9
  struct _MIT_MOUSE_INPUT_MESSAGE *v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h]
  int *v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall **v25)(); // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall ***v28)(); // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v29)(); // [rsp+C0h] [rbp-40h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall ***v31)(); // [rsp+F8h] [rbp-8h]
  _BYTE v32[416]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v33[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v34; // [rsp+2B0h] [rbp+1B0h]
  int v35; // [rsp+2B8h] [rbp+1B8h]
  __int128 v36; // [rsp+2F8h] [rbp+1F8h]
  __int64 v37; // [rsp+308h] [rbp+208h]
  char v38; // [rsp+31Dh] [rbp+21Dh]
  char v39; // [rsp+31Eh] [rbp+21Eh]
  char v40; // [rsp+320h] [rbp+220h] BYREF
  _OWORD v41[15]; // [rsp+4C0h] [rbp+3C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  v14 = a2;
  InputTraceLogging::ISM::ReceiveMouseInput(a2);
  v3 = v14;
  v20 = *((_QWORD *)v14 + 6);
  v4 = *(_DWORD *)v14;
  if ( *(_DWORD *)v14 )
  {
    if ( v4 != -1 )
    {
      if ( !Win32kInterop::IsDeviceAttached(this, v4, 1) )
      {
        InputTraceLogging::ISM::DropMouseInput(v14);
        v16 = 1;
        v17 = 0;
        NtMITPostMouseInputMessage(&v20, 1LL, 0LL, &v16, v14);
        return;
      }
      v3 = v14;
    }
  }
  else
  {
    v4 = -1;
  }
  memset_0(v33, 0, 0x218uLL);
  v35 = 536;
  v33[1] = v4;
  v33[0] = 4096;
  v33[2] = *((_DWORD *)v3 + 8);
  v34 = *((_QWORD *)v3 + 5);
  v36 = *(_OWORD *)((char *)v3 + 8);
  v37 = *((_QWORD *)v3 + 3);
  v5 = *((_DWORD *)v3 + 19);
  v6 = 3LL;
  if ( ((v5 - 1) & 0xFFFFFFFC) == 0 )
  {
    v7 = v38;
    if ( v5 != 3 )
      v7 = 1;
    v38 = v7;
  }
  if ( *((_DWORD *)v3 + 19) == 3 )
  {
    v39 = 1;
    v10 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel(v32, v3);
    v11 = &v40;
    do
    {
      *(_OWORD *)v11 = *v10;
      *((_OWORD *)v11 + 1) = v10[1];
      *((_OWORD *)v11 + 2) = v10[2];
      *((_OWORD *)v11 + 3) = v10[3];
      *((_OWORD *)v11 + 4) = v10[4];
      *((_OWORD *)v11 + 5) = v10[5];
      *((_OWORD *)v11 + 6) = v10[6];
      v11 += 128;
      *((_OWORD *)v11 - 1) = v10[7];
      v10 += 8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v11 = *v10;
    *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 2);
    v3 = v14;
  }
  InputDestTarget::GetExistingOrCreateNewInputTarget(&v15, (char *)v3 + 72, *((_QWORD *)this + 53));
  v21 = *((_QWORD *)v14 + 21);
  v19 = *((_DWORD *)v14 + 44);
  *(_QWORD *)&v22 = &v15;
  *((_QWORD *)&v22 + 1) = &v21;
  v23 = &v19;
  *(_QWORD *)&v24 = &v14;
  *((_QWORD *)&v24 + 1) = v33;
  v29 = off_1801D5F70;
  v30 = v24;
  v31 = &v29;
  v25 = off_1801D5FF0;
  v26 = v22;
  v27 = &v19;
  v28 = &v25;
  Win32kInterop::DeliverRawMouseToContextualProcessing(this, v33, &v25, &v29);
  v8 = v14;
  if ( *((_DWORD *)v14 + 19) == 2 )
    goto LABEL_23;
  if ( IsEdition(0x3DDA1uLL) )
  {
    v8 = v14;
LABEL_23:
    if ( *((_DWORD *)v8 + 19) == 4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x39D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)v8);
    v12 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage(v32, v8);
    v41[0] = *v12;
    v41[1] = v12[1];
    v41[2] = v12[2];
    v41[3] = v12[3];
    v41[4] = v12[4];
    v41[5] = v12[5];
    v41[6] = v12[6];
    v41[7] = v12[7];
    v12 += 8;
    v41[8] = *v12;
    v41[9] = v12[1];
    v41[10] = v12[2];
    v41[11] = v12[3];
    v41[12] = v12[4];
    v41[13] = v12[5];
    v41[14] = v12[6];
    v16 = 0;
    v17 = *(_DWORD *)(v13 + 76);
    v18 = *(_QWORD *)(v13 + 48);
    Win32kInterop::ProcessInputMessage(
      this,
      (const struct Win32kInterop::InputMessageContext *)&v16,
      (const struct _InputMessageNotification *)v41,
      *(_DWORD *)(v13 + 188) != 0);
  }
  if ( (unsigned int)(*((_DWORD *)v14 + 19) - 1) <= 1 )
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 53, &v15);
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
