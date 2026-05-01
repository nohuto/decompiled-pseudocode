/*
 * XREFs of ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C4170
 * Callers:
 *     ?Hide@CSwitchItemElement@@UEAAXXZ @ 0x1804C1DE0 (-Hide@CSwitchItemElement@@UEAAXXZ.c)
 *     ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1804D5160 (-Hide@SwitchItemThumbnailElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::Hide(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rax
  bool v3; // bp
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, CMultitaskingViewElementBase *, char *); // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    v9 = 0;
    v2 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v11);
    v3 = 1;
    v10 = 1;
    v4 = *(_QWORD *)v2;
    v5 = *(int (__fastcall **)(__int64, _QWORD, CMultitaskingViewElementBase *, char *))(**(_QWORD **)v2 + 48LL);
    v6 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 400LL))(this);
    if ( v5(v4, v6, this, &v9) >= 0 )
      v3 = v9 != 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    if ( v3 )
    {
      *((_BYTE *)this + 72) = 0;
      v8 = *((_QWORD *)this + 11);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 0LL, 0LL);
    }
  }
}
