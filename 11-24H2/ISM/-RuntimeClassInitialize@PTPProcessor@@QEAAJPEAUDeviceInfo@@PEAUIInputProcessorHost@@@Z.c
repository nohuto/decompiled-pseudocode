/*
 * XREFs of ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801C5BF0
 * Callers:
 *     ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801C56C0 (--$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033E8C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801C580C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 */

__int64 __fastcall PTPProcessor::RuntimeClassInitialize(
        PTPProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  int ChildInputProcessor; // ebx
  __int64 v6; // rdx
  PTPProcessor *v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = a3;
  *((_DWORD *)a2 + 1) |= 6u;
  v9[2] = this;
  v9[0] = a2;
  v9[1] = a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  ChildInputProcessor = CreateChildInputProcessor(2u, v9, (__int64)this + 24);
  if ( ChildInputProcessor < 0 )
  {
    v6 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    return (unsigned int)ChildInputProcessor;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  ChildInputProcessor = CreateChildInputProcessor(4u, v9, (__int64)this + 32);
  if ( ChildInputProcessor < 0 )
  {
    v6 = 69LL;
    goto LABEL_3;
  }
  PTPProcessor::CheckForHapticTouchpadArrival(v8, (const WCHAR *)a2);
  return 0LL;
}
