/*
 * XREFs of ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E70F0
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E64C0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E6F24 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804E70CC (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_GetAlignedRectsForApp @ 0x1804E7968 (s_GetAlignedRectsForApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  __int64 v3; // rax
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  bool v8; // dl
  __int128 *v9; // rbx
  int v10; // ebp
  __int128 v11; // xmm0
  int v12; // ecx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // eax
  CAppTransitionTargetBase *v16; // rcx
  int v17; // eax
  struct ITemporaryAppVisual *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v3 = *(_QWORD *)a2;
  v18 = 0LL;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v3 + 32);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v18);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = (!(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
       || CAppArrangementSingleTransitionTarget::_IsDragVisual(this))
      && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2);
    v9 = (__int128 *)((char *)this + 188);
    v10 = 159744000;
    v11 = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)this + 104) = v11;
    v12 = *((_DWORD *)this + 27);
    v13 = *((_DWORD *)this + 26);
    *(_OWORD *)((char *)this + 120) = v11;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 28) -= v13;
    *((_DWORD *)this + 29) -= v12;
    *((_DWORD *)this + 27) -= v12;
    if ( v8 )
    {
      v14 = *v9;
      v15 = *((_DWORD *)this + 40);
      *(_OWORD *)((char *)this + 72) = *v9;
      *(_OWORD *)((char *)this + 88) = v14;
      if ( (v15 & 0x1A) != 0 )
      {
        *((_DWORD *)this + 10) = 3;
      }
      else if ( (v15 & 1) != 0 )
      {
        *((_DWORD *)this + 10) = 6;
      }
      else if ( (v15 & 0x20) != 0 )
      {
        *((_DWORD *)this + 10) = 83;
      }
      else
      {
        *((_DWORD *)this + 10) = 21;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
           && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      s_GetAlignedRectsForApp((_DWORD)this + 172, (_DWORD)this + 188, (_DWORD)this + 72, (_DWORD)this + 88, 0LL, 0LL);
      if ( Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47)
        || (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        v16 = (CAppTransitionTargetBase *)((unsigned __int8)Geometry::operator==(
                                                              (_DWORD *)this + 43,
                                                              (_DWORD *)this + 47) << 21);
        v10 = (_DWORD)v16 + 159744000;
        *((_DWORD *)this + 10) = 28;
      }
      else
      {
        v10 = 696614912;
        *((_DWORD *)this + 10) = 23;
      }
      goto LABEL_11;
    }
    v16 = (CAppTransitionTargetBase *)*((unsigned int *)this + 19);
    v17 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 20) -= v17;
    *((_DWORD *)this + 21) -= (_DWORD)v16;
    *((_DWORD *)this + 19) -= (_DWORD)v16;
LABEL_11:
    *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(v16, *((HWND *)this + 7), 0, v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
}
