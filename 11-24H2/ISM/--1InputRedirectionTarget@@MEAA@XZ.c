/*
 * XREFs of ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801AFCE8
 * Callers:
 *     ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1801AFD80 (--_GInputRedirectionTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800178F0 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputRedirectionTarget::~InputRedirectionTarget(InputRedirectionTarget *this)
{
  __int64 *v2; // rdi

  *(_QWORD *)this = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
  *((_QWORD *)this + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 32);
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
