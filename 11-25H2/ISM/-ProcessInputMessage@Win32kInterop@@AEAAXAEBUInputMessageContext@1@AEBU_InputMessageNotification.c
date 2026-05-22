/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800EF940
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180037FA0 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18002F9F0 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180030650 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180050A48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180051644 (--$find@X@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDev.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180065F88 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x18006C800 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180091C44 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800EEC6C (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800EF600 (-IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800F02C4 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F0388 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessInputMessage(
        Win32kInterop *this,
        const struct Win32kInterop::InputMessageContext *a2,
        const struct _InputMessageNotification *a3,
        char a4)
{
  unsigned int v8; // esi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r9
  _DWORD *v12; // rdi
  char *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  char v21; // al
  int v22; // edx
  __int16 v23; // cx
  int v24; // edx
  _WORD *v25; // r8
  __int64 v26; // rax
  __int16 v27; // ax
  const struct std::nothrow_t *v28; // rdx
  int v29; // [rsp+28h] [rbp-A9h]
  char *v30; // [rsp+38h] [rbp-99h] BYREF
  struct KeyboardModifierState *v31; // [rsp+40h] [rbp-91h] BYREF
  __int64 v32; // [rsp+48h] [rbp-89h] BYREF
  __int128 v33; // [rsp+50h] [rbp-81h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-71h]
  __int64 v35; // [rsp+68h] [rbp-69h] BYREF
  void *v36[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+80h] [rbp-51h] BYREF
  __int128 v38; // [rsp+88h] [rbp-49h]
  __int64 *v39; // [rsp+98h] [rbp-39h]
  __int64 (__fastcall ***v40)(); // [rsp+B8h] [rbp-19h]
  __int64 (__fastcall **v41)(); // [rsp+C0h] [rbp-11h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-9h]
  __int64 (__fastcall ***v43)(); // [rsp+F8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  int v45; // [rsp+140h] [rbp+6Fh] BYREF
  int v46; // [rsp+144h] [rbp+73h]

  if ( *(_DWORD *)a2 )
    return;
  v35 = *((_QWORD *)a2 + 1);
  v8 = *((_DWORD *)a3 + 38);
  if ( !v8 )
    v8 = -1;
  v45 = v8;
  InputETW::Win32kInterop::ReceivedInputMessage(v8);
  InputTraceLogging::ISM::ReceiveMouseInput(a3);
  if ( v8 != -1 && !Win32kInterop::IsDeviceAttached(this, v8, 1) )
  {
    InputTraceLogging::ISM::DropMouseInput(a3);
    v45 = 1;
    v46 = 0;
    NtMITPostMouseInputMessage(&v35, 1LL, 0LL, &v45);
    return;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)v36, 0x1D0uLL, v9, v10);
  v12 = v36[0];
  v30 = (char *)v36[0];
  *(_DWORD *)v36[0] = 2;
  *((_DWORD *)v30 + 1) = v8;
  *((_DWORD *)v30 + 2) = *((_DWORD *)a3 + 34);
  *((_QWORD *)v30 + 2) = *((_QWORD *)a3 + 18);
  *((_QWORD *)v30 + 38) = v35;
  v30[312] = a4;
  if ( *((_DWORD *)a2 + 1) == 1 )
    v30[314] = 1;
  *((_DWORD *)v30 + 79) = 1;
  v13 = v30;
  *(_OWORD *)(v30 + 236) = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)(v13 + 252) = *(_OWORD *)((char *)a3 + 184);
  *(_OWORD *)(v13 + 268) = *(_OWORD *)((char *)a3 + 200);
  *(_OWORD *)(v13 + 284) = *(_OWORD *)((char *)a3 + 216);
  *((_QWORD *)v30 + 8) = *((_QWORD *)a3 + 3);
  *((_DWORD *)v30 + 18) = *((_DWORD *)a3 + 4) & 1;
  if ( (*((_BYTE *)a3 + 232) & 1) != 0 )
  {
    *((_DWORD *)v30 + 19) = 1;
    *((_DWORD *)v30 + 20) = 100;
    *((_DWORD *)v30 + 21) = 100;
  }
  v29 = (_DWORD)v30 + 56;
  LOBYTE(v11) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 54) + 72LL))(
          *((_QWORD *)this + 54),
          v8,
          1LL,
          v11);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14,
      v29);
  v31 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  v15 = KeyboardModifierState::Create(&v31);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15,
      v29);
  KeyboardModifierState::GetCurrentKeyboardModifierState(v31, (unsigned int *)v30 + 58);
  v12[81] = 1;
  v12[83] = 2;
  v16 = *((__int16 *)a3 + 64);
  v12[92] = v16;
  v17 = *((__int16 *)a3 + 65);
  v12[93] = v17;
  v12[88] = v16;
  v12[89] = v17;
  v18 = *((_DWORD *)a3 + 40);
  v12[94] = v18;
  v19 = *((_DWORD *)a3 + 41);
  v12[95] = v19;
  v12[90] = v18;
  v12[91] = v19;
  v12[80] = 4;
  v12[96] = *((_DWORD *)v30 + 2);
  *((_QWORD *)v12 + 50) = *((_QWORD *)v30 + 2);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find<void>(
    (__int64)this + 64,
    &v33,
    (__int64)&v45);
  if ( (_QWORD)v33 == *((_QWORD *)this + 9) || *(_DWORD *)(*(_QWORD *)(v33 + 24) + 4LL) == 2 )
    v20 = *((unsigned int *)v30 + 1);
  else
    v20 = -1LL;
  *((_QWORD *)v12 + 42) = v20;
  v21 = 0;
  v22 = 2;
  if ( *((_QWORD *)a3 + 15) )
  {
    v23 = *((_WORD *)a3 + 60);
    if ( (v23 & 1) != 0 )
    {
      v22 = 18;
      v12[83] = 18;
      v21 = 1;
    }
    if ( (v23 & 2) != 0 )
    {
      v22 |= 0x20u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x10) != 0 )
    {
      v22 |= 0x40u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x20) != 0 )
    {
      v22 |= 0x80u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x40) != 0 )
    {
      v22 |= 0x100u;
LABEL_31:
      v12[83] = v22 | 4;
      goto LABEL_32;
    }
    if ( v21 )
      goto LABEL_31;
  }
LABEL_32:
  if ( !CInputTransform::IsIdentityTransform((const struct tagINPUT_TRANSFORM *)(v30 + 236)) )
  {
    v12[83] = v24 | 0x400000;
    v25 = v30;
  }
  v26 = (unsigned int)(*((_DWORD *)a3 + 28) - 512);
  if ( (unsigned int)v26 <= 0xE )
  {
    v25[150] = word_1801FC588[v26];
    v25 = v30;
    v27 = *((_WORD *)v30 + 150);
    if ( (v27 & 0xC0) != 0 && *((_WORD *)a3 + 61) == 2 )
    {
      *((_WORD *)v30 + 150) = 4 * v27;
      v25 = v30;
    }
  }
  if ( ((*((_DWORD *)a3 + 28) - 522) & 0xFFFFFFFB) == 0 )
    v25[151] = *((_WORD *)a3 + 61);
  InputDestTarget::GetExistingOrCreateNewInputTarget(
    &v32,
    (__int64)a3,
    *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 53));
  *(_QWORD *)&v33 = this;
  *((_QWORD *)&v33 + 1) = &v30;
  v34 = &v32;
  v37 = off_1801DCE98;
  v38 = v33;
  v39 = &v32;
  v40 = &v37;
  *(_QWORD *)&v33 = &v32;
  *((_QWORD *)&v33 + 1) = a3;
  v41 = off_1801DCE30;
  v42 = v33;
  v43 = &v41;
  Win32kInterop::DeliverToContextualProcessing(this, (__int64)v30, *((_DWORD *)a3 + 59), (__int64)&v41, (__int64)&v37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v36, v28);
}
