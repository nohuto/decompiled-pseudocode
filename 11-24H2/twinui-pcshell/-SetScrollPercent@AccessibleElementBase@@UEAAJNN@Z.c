/*
 * XREFs of ?SetScrollPercent@AccessibleElementBase@@UEAAJNN@Z @ 0x1804D39C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D3B8C (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::SetScrollPercent(AccessibleElementBase *this, double a2, double a3)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  void *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v6);
  if ( Element >= 0 )
  {
    (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 96LL))(v6);
    (*(void (**)(void))(*(_QWORD *)v6 + 40LL))();
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
