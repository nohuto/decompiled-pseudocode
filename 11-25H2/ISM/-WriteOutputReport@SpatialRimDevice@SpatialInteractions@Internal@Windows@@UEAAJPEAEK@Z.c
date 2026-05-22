/*
 * XREFs of ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x1800DD220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800DCCA8 (-Close@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::WriteOutputReport(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        unsigned __int8 *a2,
        DWORD a3)
{
  unsigned int LastError; // ebx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  HANDLE FileW; // rax
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  void **v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD NumberOfBytesWritten; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v6 = (HSTRING)*((_QWORD *)this + 8);
    v15 = -1LL;
    v14 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    FileW = CreateFileW(StringRawBuffer, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    v10 = -1LL;
    v11 = (__int64)FileW;
    if ( FileW != (HANDLE)-1LL )
    {
      Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)&v14);
      v10 = v11;
      v15 = v11;
    }
    if ( v10 == -1 )
    {
      v12 = 121LL;
    }
    else
    {
      NumberOfBytesWritten = 0;
      if ( WriteFile((HANDLE)v10, a2, a3, &NumberOfBytesWritten, 0LL) )
      {
        if ( NumberOfBytesWritten == a3 )
        {
          LastError = 0;
        }
        else
        {
          LastError = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
            (const char *)0x8000FFFFLL);
        }
        goto LABEL_13;
      }
      v12 = 123LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v12,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
                  v9);
LABEL_13:
    v14 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
    Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)&v14);
    return LastError;
  }
  LastError = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
    (const char *)0x80070057LL);
  return LastError;
}
