/*
 * XREFs of ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18008DBC4
 * Callers:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008DA70 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ContainsBrush@CRenderingTechnique@@QEBA_NPEBVCBrush@@@Z @ 0x18008BDE4 (-ContainsBrush@CRenderingTechnique@@QEBA_NPEBVCBrush@@@Z.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x18008DD94 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     ?ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x18008DDC0 (-ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::AdjustNotification(
        CBrushRenderingGraph *this,
        enum NotificationEventArgs::Flags *a2,
        const struct CBrush *a3)
{
  unsigned int v6; // r14d
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  char v8; // si
  int (__fastcall **v9)(_QWORD, GUID *, __int64 *); // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  struct Windows::UI::Composition::IEffectInstance *v12; // r10
  __int64 i; // r9
  int v14; // r9d
  const struct CBrush *v15; // rdi
  __int64 j; // rbx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+58h]

  CBrushRenderingGraph::CheckIfDisposed(this);
  v6 = *((_DWORD *)this + 42);
  if ( v6 > 1 )
  {
    v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a3 + 11);
    v20 = v6 - 1;
    v8 = 0;
    while ( v7 )
    {
      v17 = 0LL;
      v9 = *v7;
      v18 = 0LL;
      if ( (*v9)(v7, &GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27, &v18) < 0 )
      {
        if ( (**v7)(v7, &GUID_199a9f50_25a6_41d5_b2a5_919a20cf4fb9, &v17) >= 0 )
        {
          v19 = 0;
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v19);
          v11 = v20;
          v12 = (struct Windows::UI::Composition::IEffectInstance *)v10;
          for ( i = 0LL; (_DWORD)i != v11; i = (unsigned int)(v14 + 1) )
          {
            if ( CRenderingTechniqueFragment::ContainsEffectSubgraph(
                   *(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * i) + 8LL),
                   v12,
                   v19) )
            {
              v8 = 1;
              break;
            }
          }
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        break;
      }
      v15 = (const struct CBrush *)((v18 - 72) & -(__int64)(v18 != 0));
      for ( j = 0LL; (_DWORD)j != v6 - 1; j = (unsigned int)(j + 1) )
      {
        if ( CRenderingTechnique::ContainsBrush(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * j), v15) )
        {
          v8 = 1;
          break;
        }
      }
      v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v15 + 11);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v8 )
      *(_DWORD *)a2 = 6;
  }
}
