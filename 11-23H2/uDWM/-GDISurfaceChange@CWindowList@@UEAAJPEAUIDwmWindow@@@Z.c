/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E190
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18001C89C (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v6; // rdi
  char v7; // dl
  CVisual *v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rax
  int updated; // eax
  _QWORD Buffer[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+17h]
  char v20; // [rsp+78h] [rbp+1Fh]
  struct CWindowData *v21; // [rsp+D0h] [rbp+77h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+D8h] [rbp+7Fh]

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v21);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x171Fu, 0LL);
  }
  else
  {
    v6 = v21;
    if ( v21 )
    {
      v7 = *((_BYTE *)v6 + 673) ^ (*((_BYTE *)v6 + 673) ^ (32
                                                         * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2))) & 0x20;
      *((_BYTE *)v6 + 673) = v7;
      v8 = (CVisual *)*((_QWORD *)v6 + 55);
      if ( v8 )
      {
        v9 = *((_DWORD *)v8 + 22);
        if ( (v7 & 0x20) != 0 )
        {
          if ( (v9 & 0x2000000) == 0 )
          {
            *((_DWORD *)v8 + 22) = v9 | 0x2000000;
            CVisual::PropagateDirtyChildren(v8);
          }
        }
        else
        {
          *((_DWORD *)v8 + 22) = v9 & 0xFDFFFFFF;
        }
      }
      v10 = CWindowData::NotifyRepresentationChanged(v6);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x172Bu, 0LL);
      }
      else
      {
        v11 = *((_QWORD *)v6 + 17);
        Buffer[1] = 0LL;
        v16 = 0LL;
        v19 = -1LL;
        v20 = 0;
        v17 = 0LL;
        v18 = 0LL;
        Buffer[0] = v11;
        v12 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
        if ( v12 )
          v12 = (_QWORD *)v12[8];
        if ( *((_QWORD **)v6 + 5) == v12 )
        {
          updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 17));
          v5 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1730u, 0LL);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
