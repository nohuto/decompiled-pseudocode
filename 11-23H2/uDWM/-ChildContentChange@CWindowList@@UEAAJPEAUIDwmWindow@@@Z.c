/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018410
 * Callers:
 *     <none>
 * Callees:
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18000F264 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // al
  char v9; // dl
  CDesktopManager *v10; // rbx
  CWindowData *v12; // rax
  CWindowData *v13; // rax
  int v14; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v6 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v12 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    if ( !v12 || (v13 = CWindowData::CWindowData(v12), (v6 = (__int64)v13) == 0) )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
LABEL_15:
      v7 = v5;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x16DEu, 0LL);
      goto LABEL_6;
    }
    *((_QWORD *)v13 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v13);
    *(_QWORD *)(v6 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v5 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v6);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x826u, 0LL);
      goto LABEL_15;
    }
  }
  v7 = v5;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
    v9 = *(_BYTE *)(v6 + 673);
    if ( ((v9 & 0x10) != 0) == v8
      || (*(_BYTE *)(v6 + 673) = v9 ^ (v9 ^ (16 * v8)) & 0x10,
          v14 = CWindowData::NotifyRepresentationChanged((CWindowData *)v6),
          v7 = v14,
          v14 >= 0) )
    {
      v10 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 188) )
      {
        do
          CDesktopThumbnailBase::RecloneWindow(
            *(CDesktopThumbnailBase **)(*((_QWORD *)v10 + 91) + 8LL * v4++),
            (struct CWindowData *)v6);
        while ( v4 < *((_DWORD *)v10 + 188) );
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x16E8u, 0LL);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
