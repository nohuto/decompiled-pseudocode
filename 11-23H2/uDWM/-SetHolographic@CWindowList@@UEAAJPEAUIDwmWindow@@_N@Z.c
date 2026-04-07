/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004CE90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180021578 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdi
  CWindowData *v8; // rax
  CWindowData *v9; // rax
  unsigned int v10; // esi
  CTopLevelWindow *v11; // rcx
  int v13; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v7 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    if ( v8 && (v9 = CWindowData::CWindowData(v8), (v7 = (__int64)v9) != 0) )
    {
      *((_QWORD *)v9 + 3) = a2;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v9);
      *(_QWORD *)(v7 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
      v6 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v7);
      if ( v6 >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x826u, 0LL);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
    }
    v10 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA02u, 0LL);
    goto LABEL_9;
  }
LABEL_6:
  v10 = v6;
  if ( v7 )
  {
    *(_BYTE *)(v7 + 677) = (2 * a3) | *(_BYTE *)(v7 + 677) & 0xFD;
    v11 = *(CTopLevelWindow **)(v7 + 440);
    if ( v11 )
    {
      v13 = CTopLevelWindow::SetHolographic(v11, a3);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA0Au, 0LL);
    }
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
