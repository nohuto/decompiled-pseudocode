/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006F48 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180017DA0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180082518 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rdi
  CTopLevelWindow3D *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-28h]
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = v12;
  if ( !v12 )
  {
    v4 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x9C2u, 0LL);
    goto LABEL_19;
  }
  LOBYTE(v12) = 1;
  v6 = (CTopLevelWindow3D *)*((_QWORD *)v5 + 56);
  if ( !v6 )
    goto LABEL_14;
  v7 = CTopLevelWindow3D::BeginDestroySprite(v6, (bool *)&v12);
  v4 = v7;
  if ( v7 < 0 )
  {
    v11 = 2503;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v11, 0LL);
    goto LABEL_19;
  }
  if ( (_BYTE)v12 )
  {
LABEL_14:
    CWindowList::ImmediateDestroySprite(this, v5);
  }
  else
  {
    *((_BYTE *)v5 + 736) |= 4u;
    if ( !*((_QWORD *)v5 + 60)
      && !CWindowData::IsImmersiveWindow(v5)
      && (int)CWindowData::SnapshotWindow((struct CWindowSnapshot **)v5, v8, v9) >= 0 )
    {
      v7 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      v4 = v7;
      if ( v7 < 0 )
      {
        v11 = 2526;
        goto LABEL_18;
      }
    }
    v7 = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 312), (__int64)v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      v11 = 2530;
      goto LABEL_18;
    }
  }
  if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    v7 = CWindowList::DestroyWindow(this, a2);
    v4 = v7;
    if ( v7 < 0 )
    {
      v11 = 2535;
      goto LABEL_18;
    }
  }
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
