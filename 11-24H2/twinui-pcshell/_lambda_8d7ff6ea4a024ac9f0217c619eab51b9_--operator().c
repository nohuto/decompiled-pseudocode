/*
 * XREFs of _lambda_8d7ff6ea4a024ac9f0217c619eab51b9_::operator() @ 0x1804621D4
 * Callers:
 *     CCLambdaAdapter_int_(__cdecl_)(HMONITOR_____HDC_____tagRECT_____int64)_4_::Adapt__lambda_8d7ff6ea4a024ac9f0217c619eab51b9___ @ 0x1804621C0 (CCLambdaAdapter_int_(__cdecl_)(HMONITOR_____HDC_____tagRECT_____int64)_4_--Adapt__lambda_8d7ff6e.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801456DC (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1804624F4 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8d7ff6ea4a024ac9f0217c619eab51b9_::operator()(ImmersiveMonitorHelper **a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = *((_QWORD *)*a1 + 9);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v7 = v6(v5, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v10);
  if ( v7 >= 0 )
  {
    if ( ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a1, v10) )
    {
      ImmersiveMonitorHelper::ConnectToMonitor(*a1, (struct IUnknown *)v10);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD9,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  v4 = 1;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return v4;
}
