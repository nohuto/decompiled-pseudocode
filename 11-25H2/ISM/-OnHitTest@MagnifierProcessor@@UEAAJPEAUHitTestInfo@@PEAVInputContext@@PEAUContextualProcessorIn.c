/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A6110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIMagnifierControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMagnifierControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BF6C (--$As@UIMagnifierControllerProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x180081520 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180154528 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801A5DC0 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x1801A5F60 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801A60A0 (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801A6BDC (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801A6F10 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801A6F6C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 *DeviceState; // rax
  __int64 v18; // r15
  unsigned __int8 GesturesEnabled; // al
  __int64 v20; // rax
  bool v21; // cc
  char v22; // al
  char v23; // al
  __int64 (__fastcall *v24)(__int64, GUID *, char *); // rsi
  int v25; // eax
  __int64 v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h] BYREF
  __int64 v29[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v32; // [rsp+88h] [rbp+48h] BYREF
  __int64 v33; // [rsp+98h] [rbp+58h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 8) != 0 && *(char *)a2 >= 0 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      *(_DWORD *)a4 = 1;
    }
    else
    {
      v6 = 0LL;
      v32 = 0LL;
      v7 = 0LL;
      v33 = 0LL;
      v8 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v9 = *(__int64 **)(v8 - 24);
      v10 = *(_QWORD *)(v8 - 16);
      v29[0] = v10;
      v11 = 0LL;
      while ( v9 != (__int64 *)v10 )
      {
        v12 = *v9;
        v13 = 0LL;
        v32 = 0LL;
        v14 = *(_QWORD *)(v12 + 488);
        v15 = *(_QWORD *)(v12 + 496);
        if ( v14 != v15 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMagnifierControllerProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                        &v32) >= 0 )
              break;
            v14 += 16LL;
          }
          while ( v14 != v15 );
          v13 = v32;
        }
        v11 = (v13 - 8) & -(__int64)(v13 != 0);
        v28 = v11;
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v28);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        v16 = v6;
        v6 = v11;
        v32 = v11;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 8LL))(v16 + 16);
        if ( v11 )
        {
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(&v33, v9);
          v7 = v33;
          break;
        }
        ++v9;
        v10 = v29[0];
      }
      if ( v11 )
      {
        v28 = 0LL;
        DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v29, (__int64)a2);
        v18 = 0LL;
        if ( &v27 != DeviceState )
        {
          v18 = *DeviceState;
          *DeviceState = 0LL;
        }
        v27 = 0LL;
        v28 = v18;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v29);
        *(_BYTE *)(v18 + 16) = BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v6 + 8));
        GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v6 + 8));
        *(_BYTE *)(v18 + 17) = GesturesEnabled;
        InputTraceLogging::Magnifier::HitTestClient(*(_BYTE *)(v18 + 16), GesturesEnabled);
        v20 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v18 + 32, v29, *((_QWORD *)a2 + 2))
            - *(_QWORD *)(v18 + 24);
        if ( !*(_BYTE *)(v18 + 33) || (v21 = 1000000LL * *(_QWORD *)(v18 + 64) < v20, v22 = 1, v21) )
          v22 = 0;
        *(_BYTE *)(v18 + 18) = v22;
        MagnifierRecognizer::Reset((MagnifierRecognizer *)(v18 + 32), (MagnifierProcessor *)((char *)this + 80));
        if ( *(_BYTE *)(v18 + 16) || (v23 = 0, *(_BYTE *)(v18 + 17)) )
          v23 = 1;
        *(_BYTE *)(v18 + 32) = v23;
        *(_BYTE *)(v18 + 35) = *(_BYTE *)(v18 + 17);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v18 + 112));
        Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(v18 + 120), &v32);
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v18 + 128), &v33);
        if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v18 + 32)) )
        {
          v24 = **(__int64 (__fastcall ***)(__int64, GUID *, char *))v18;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a4 + 1);
          v25 = v24(v18, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v25 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x63,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
              (const char *)(unsigned int)v25,
              v27);
          *(_DWORD *)a4 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 8LL))(v6 + 16);
      }
      else if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  return 0LL;
}
