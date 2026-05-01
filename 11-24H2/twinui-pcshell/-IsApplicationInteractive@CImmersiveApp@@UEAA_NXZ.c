/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1801BDF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18009A98C (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::IsApplicationInteractive(unsigned __int64 this)
{
  void (__fastcall *v2)(unsigned __int64, struct IUnknown **); // rbx
  char v3; // di
  struct IUnknown *v4; // rcx
  PSRWLOCK v6; // rbx
  struct IUnknown *v7; // rdx
  struct IUnknown *v8; // rbp
  PVOID Ptr; // rsi
  bool v10; // zf
  struct IUnknown *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = *(void (__fastcall **)(unsigned __int64, struct IUnknown **))(*(_QWORD *)this + 464LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  v2(this, &v11);
  if ( (*(_BYTE *)(this + 456) & 4) == 0 )
    goto LABEL_2;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = 1;
  v7 = (struct IUnknown *)(this & ((unsigned __int128)-(__int128)(this - 112) >> 64));
  v8 = v11;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v7
    || !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
          (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
          v7) )
  {
    if ( Ptr )
    {
      v10 = *((_DWORD *)v6[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else
    {
      if ( !LODWORD(v6[5].Ptr) || !SHIsSameObject(v8, (struct IUnknown *)v6[6].Ptr) )
      {
        if ( HIDWORD(v6[5].Ptr) == 1 )
          goto LABEL_3;
        goto LABEL_2;
      }
      v10 = LODWORD(v6[5].Ptr) == 1;
    }
    if ( v10 )
      goto LABEL_3;
LABEL_2:
    v3 = 0;
  }
LABEL_3:
  v4 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  }
  return v3;
}
