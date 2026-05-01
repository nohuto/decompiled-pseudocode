/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804B7030
 * Callers:
 *     ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B78E0 (-CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactor.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSwitchItemElement@@QEAA@XZ @ 0x1804B72EC (--0CSwitchItemElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1804C206C (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
        _QWORD *a1,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  void *v4; // rax
  int v5; // edi
  CSwitchItemElement *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CSwitchItemElement *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (CSwitchItemElement *)v4;
  if ( v4 )
  {
    v6 = CSwitchItemElement::CSwitchItemElement((CSwitchItemElement *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = CSwitchItemElement::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(CSwitchItemElement *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
             a1);
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v5;
}
