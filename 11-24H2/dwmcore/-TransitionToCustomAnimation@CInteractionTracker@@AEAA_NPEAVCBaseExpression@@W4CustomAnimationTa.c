/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E143C
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801E13E8 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x180095B30 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800E1788 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800E556C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800E5B6C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E700C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1801E1598 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(__int64 a1, CResource *a2, int a3)
{
  __int64 v3; // rbp
  char v4; // si
  CInteractionTracker *v7; // rcx
  int v8; // ecx
  int WeakReference; // eax
  int v11; // eax
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknownWeakRef *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  if ( (unsigned __int64)a3 >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v7 = (CInteractionTracker *)*(unsigned int *)(a1 + 184);
  if ( (_DWORD)v7 )
  {
    v8 = (_DWORD)v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *((_BYTE *)a2 + 224) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, a3, 0);
    }
    else
    {
      CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
      CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
    }
  }
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 541) & 4) == 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 6380LL);
    *(_BYTE *)(a1 + 541) |= 4u;
    CInteractionTracker::LogBoostCompositorClock(v7, 1);
  }
  CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v3, 1);
  v14 = 0LL;
  WeakReference = CResource::GetWeakReference(a2, &v14);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  *(_QWORD *)(a1 + 8 * v3 + 352) = v14;
  v11 = CResource::RegisterNotifier((CResource *)a1, a2);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT(v11, retaddr);
  CInteractionTracker::SetState(a1, 3, 0);
  v12 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
          a1,
          (__int64)a2,
          (unsigned int)((_DWORD)v3 != 0) + 1);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT(v12, retaddr);
  return v4;
}
