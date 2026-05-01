/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForNavigationRequest@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801F5260
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1804270AC (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManage_ea_1804270AC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventArgsForNavigationRequest::RuntimeClassInitialize(
        ViewEventArgsForNavigationRequest *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v4; // rcx

  *((_DWORD *)this + 12) = 2;
  if ( *((struct Windows::Foundation::Collections::IPropertySet **)this + 7) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
