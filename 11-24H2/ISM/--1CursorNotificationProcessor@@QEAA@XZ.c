/*
 * XREFs of ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800F37A4
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800EF8A0 (--1Win32kInterop@@UEAA@XZ.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$14 @ 0x1801D64AC (_Win32kInterop--Win32kInterop_--_1_--dtor$14.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CursorNotificationProcessor::~CursorNotificationProcessor(CursorNotificationProcessor *this)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 3) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
  if ( *((_QWORD *)this + 5) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
