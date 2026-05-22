/*
 * XREFs of ??0DeviceInputHost@@AEAA@XZ @ 0x18008DB6C
 * Callers:
 *     ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x18005C214 (-Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180034E30 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180051A30 (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079504 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008DCF0 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18008DDF8 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x18008DEEC (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CBF30 (--0InputProcess@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=12
DeviceInputHost *__fastcall DeviceInputHost::DeviceInputHost(DeviceInputHost *this)
{
  InputProcess **v2; // rbx
  __int64 *v3; // r14
  __int64 *v4; // rsi
  InputProcess *v5; // rax
  const char *v6; // r9
  Microsoft::Bamo::BaseBamoConnection *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  const char *v11; // r9
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::Bamo::BaseBamoConnection *v16; // [rsp+58h] [rbp+10h] BYREF
  InputProcess *v17; // [rsp+60h] [rbp+18h]
  SystemContextEndpoint *v18; // [rsp+68h] [rbp+20h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &DeviceInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &DeviceInputHost::`vftable'{for `RefCountedObject'};
  v2 = (InputProcess **)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((char *)this + 24);
  v5 = (InputProcess *)RefCountedObject::operator new(0x28uLL);
  v17 = v5;
  if ( v5 )
    v5 = InputProcess::InputProcess(v5);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v6);
  *v2 = v5;
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v3);
  *v3 = 0LL;
  InputSystemInternalClientConnection::GetForCurrentThread(&v16);
  v17 = 0LL;
  v18 = (SystemContextEndpoint *)operator new(0x38uLL);
  v7 = v16;
  *v3 = (__int64)SystemContextEndpoint::SystemContextEndpoint(v18, v16);
  if ( v7 )
    Microsoft::Bamo::BaseBamoConnection::Release(v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
  v10 = InputStateManager::Create(0LL, (struct IRawInputClient **)v4, v8, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)(unsigned int)v10,
      v14);
  v12 = InputProviderManager::InitializeHelper((__int64)this + 48, *v4, 0, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)(unsigned int)v12,
      v14);
  return this;
}
