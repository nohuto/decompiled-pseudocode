/*
 * XREFs of ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A720
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ZorderBandChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  CWindowData *v7; // rax
  CWindowData *v8; // rax
  int v9; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v7 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    if ( !v7 || (v8 = CWindowData::CWindowData(v7), (v5 = (__int64)v8) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
      goto LABEL_12;
    }
    *((_QWORD *)v8 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v8);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v9 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x826u, 0LL);
      goto LABEL_12;
    }
  }
  if ( v4 < 0 )
  {
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xEA2u, 0LL);
    goto LABEL_5;
  }
  if ( v5 )
    *(_DWORD *)(v5 + 132) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v4;
}
