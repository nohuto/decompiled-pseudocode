/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F63F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18003D3C8 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x1800F5CBC (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800F650C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x1800F666C (-GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, unsigned int a2, struct IUnknown *a3)
{
  __int64 v6; // r9
  struct IUnknownVtbl *lpVtbl; // rax
  int IndexOfCustomAnimation; // eax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = a2 - 7;
  if ( a2 == 7 )
  {
LABEL_7:
    lpVtbl = a3->lpVtbl;
    v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *, __int64))lpVtbl->QueryInterface)(
      a3,
      &GUID_c3c5a1de_4dff_4600_9562_70179f475db1,
      &v10,
      v6);
    InteractionSourceManager::OnManipulationChanged(a1 + 208, a2, (v10 - 80) & -(__int64)(v10 != 0));
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return 1LL;
  }
  if ( a2 != 8 && a2 != 9 )
  {
    v6 = a2 - 10;
    if ( a2 != 10 )
    {
      v6 = a2 - 12;
      if ( (unsigned int)v6 >= 2 )
        return 1LL;
    }
    goto LABEL_7;
  }
  if ( a3 )
  {
    IndexOfCustomAnimation = CInteractionTracker::GetIndexOfCustomAnimation((CInteractionTracker *)a1, a3);
    if ( IndexOfCustomAnimation > -1 )
    {
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, IndexOfCustomAnimation, 0);
      if ( *(_DWORD *)(a1 + 184) == 3 )
        CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
    }
    else if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL) + 440LL) |= 2u;
    }
  }
  return 1LL;
}
