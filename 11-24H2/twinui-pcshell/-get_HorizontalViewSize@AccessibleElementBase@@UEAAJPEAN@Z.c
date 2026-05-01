/*
 * XREFs of ?get_HorizontalViewSize@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804D4440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D3B8C (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibleElementBase::get_HorizontalViewSize(AccessibleElementBase *this, double *a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 100.0;
  v6 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v6);
  if ( Element >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 96LL))(v6)
      && (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 64LL))(v6) )
    {
      *a2 = (*(double (__fastcall **)(void *))(*(_QWORD *)v6 + 56LL))(v6);
    }
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
