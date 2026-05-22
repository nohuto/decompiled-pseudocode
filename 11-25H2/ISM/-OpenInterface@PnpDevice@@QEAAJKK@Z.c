/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800E43A8
 * Callers:
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800E44E0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E5B7C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800E316C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateFileHandle@PnpDevice@@AEAAJKK@Z @ 0x1800E3D84 (-CreateFileHandle@PnpDevice@@AEAAJKK@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this, DWORD a2, DWORD a3)
{
  int FileHandle; // eax
  unsigned int v7; // edi
  const WCHAR *StringRawBuffer; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 31) == 2 && *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 5) != -1LL )
      return 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      FileHandle = PnpDevice::CreateFileHandle(this, a2, a3);
      v7 = FileHandle;
      if ( FileHandle < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x195,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
          (const char *)(unsigned int)FileHandle);
        return v7;
      }
      *((_DWORD *)this + 33) = a2;
      *((_DWORD *)this + 34) = a3;
      return 0LL;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    _InterlockedExchange64(
      (volatile __int64 *)this + 5,
      (__int64)CreateFileW(StringRawBuffer, a2, a3, 0LL, 3u, 0x60000000u, 0LL));
    if ( *((_QWORD *)this + 5) != -1LL )
      return 0LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A5,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
