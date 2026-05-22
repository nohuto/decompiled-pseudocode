/*
 * XREFs of ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800D54D8
 * Callers:
 *     ??_GSpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D5780 (--_GSpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C1B68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?InternalClose@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1800D28A0 (-InternalClose@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Mi.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::~SpatialRimDevice(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this)
{
  char *v1; // rdi
  bool v3; // zf
  signed int LastError; // eax
  signed int v5; // eax

  v1 = (char *)this + 160;
  v3 = *((_QWORD *)this + 21) == 0LL;
  *((_QWORD *)this + 20) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  if ( !v3 )
  {
    if ( !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::InternalClose((__int64)this + 160) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
      __debugbreak();
    }
    *((_QWORD *)v1 + 1) = 0LL;
  }
  v3 = *((_QWORD *)this + 19) == 0LL;
  *((_QWORD *)this + 18) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  if ( !v3 )
  {
    if ( !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::InternalClose((__int64)this + 144) )
    {
      v5 = GetLastError();
      if ( v5 > 0 )
        v5 = (unsigned __int16)v5 | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
      __debugbreak();
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
}
