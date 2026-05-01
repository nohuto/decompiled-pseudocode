/*
 * XREFs of ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ @ 0x18001C83C
 * Callers:
 *     ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x18001C800 (--_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 */

void __fastcall CMarshaledInterface::CMarshalStream::~CMarshalStream(CMarshaledInterface::CMarshalStream *this)
{
  LPSTREAM *v1; // rdi
  bool v3; // zf
  LPVOID *v4; // rax
  IStream *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (LPSTREAM *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CMarshaledInterface::CMarshalStream::`vftable';
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 10) == GetCurrentThreadId() )
    {
      CoReleaseMarshalData(*v1);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1);
    }
    else
    {
      v6 = 0LL;
      v4 = (LPVOID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v6);
      v5 = *v1;
      *v1 = 0LL;
      CoGetInterfaceAndReleaseStream(v5, &GUID_00000000_0000_0000_c000_000000000046, v4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((char *)this + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1);
  *((_DWORD *)this + 3) = -1073741823;
}
