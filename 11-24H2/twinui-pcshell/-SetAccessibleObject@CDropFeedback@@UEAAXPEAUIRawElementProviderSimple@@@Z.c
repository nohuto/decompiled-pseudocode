/*
 * XREFs of ?SetAccessibleObject@CDropFeedback@@UEAAXPEAUIRawElementProviderSimple@@@Z @ 0x18053FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDropFeedback::SetAccessibleObject(CDropFeedback *this, struct IRawElementProviderSimple *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( *((struct IRawElementProviderSimple **)this + 21) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IRawElementProviderSimple *))a2->lpVtbl->AddRef)(a2);
    v7 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v6 = 0LL;
  v5 = **v4;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
  if ( v5(v4, &GUID_18a88c04_f6d0_48c4_802d_0e30fed9a33a, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, *((_QWORD *)this + 5));
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
}
