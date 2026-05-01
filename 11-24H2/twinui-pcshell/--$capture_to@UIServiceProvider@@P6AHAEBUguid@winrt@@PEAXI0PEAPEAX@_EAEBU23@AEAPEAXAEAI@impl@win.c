/*
 * XREFs of ??$capture_to@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@impl@winrt@@YAHPEAPEAXP6AHAEBUguid@1@PEAXI10@_E1AEAPEAXAEAI@Z @ 0x18024A368
 * Callers:
 *     ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x180210CEC (--$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-A.c)
 *     ??$try_create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1804A4F64 (--$try_create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___capture_to_UIServiceProvider__P6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_impl_winrt__YAHPEAPEAXP6AHAEBUguid_1_PEAXI10__E1AEAPEAXAEAI_Z(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD, __int64 *, __int64),
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5)
{
  return a2(a3, *a4, *a5, &winrt::impl::guid_v<IServiceProvider>, a1);
}
