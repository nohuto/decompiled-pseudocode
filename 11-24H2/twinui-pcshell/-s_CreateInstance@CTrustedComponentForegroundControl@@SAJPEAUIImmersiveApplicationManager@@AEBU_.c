/*
 * XREFs of ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18029CC80
 * Callers:
 *     ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18023B940 (-InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180098D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImm.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z @ 0x18029CD40 (--0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrustedComponentForegroundControl::s_CreateInstance(
        struct IImmersiveApplicationManager *a1,
        const struct _GUID *a2,
        void **a3)
{
  CTrustedComponentForegroundControl *v5; // rax
  struct _GUID *v6; // rdx
  Microsoft::WRL::FtmBase *v7; // rax
  __int64 v8; // rbx
  int CanCastTo; // eax
  unsigned int v10; // edi
  void *v11; // r8

  *a3 = 0LL;
  v5 = (CTrustedComponentForegroundControl *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CTrustedComponentForegroundControl::CTrustedComponentForegroundControl(v5, a1);
    v8 = (__int64)v7;
    if ( v7 )
    {
      *a3 = 0LL;
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v7, &GUID_f76880f4_de44_4d29_802e_784369919a93, a3);
      v10 = -2147467262;
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(v6, v6) )
        {
          *a3 = v11;
          v10 = 0;
LABEL_7:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        }
      }
      else
      {
        v10 = CanCastTo;
        if ( CanCastTo >= 0 )
          goto LABEL_7;
      }
LABEL_11:
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::Release(
        v8,
        (volatile int *)v6);
      return v10;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v10 = -2147024882;
  if ( v8 )
    goto LABEL_11;
  return v10;
}
