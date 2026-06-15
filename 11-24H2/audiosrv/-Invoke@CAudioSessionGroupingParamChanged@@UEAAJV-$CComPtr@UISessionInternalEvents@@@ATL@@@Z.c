/*
 * XREFs of ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18005D320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // r11
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = (_QWORD *)*a2;
  v4 = *(_QWORD *)*a2;
  v5 = a1[1];
  v8 = *(_OWORD *)a1[2];
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *, _QWORD))(v4 + 64))(
         v3,
         (v5 + 8) & -(__int64)(v5 != 0),
         &v8,
         a1[3]);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
  return v6;
}
