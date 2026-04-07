/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800175B0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  int v6; // edx
  unsigned __int64 v7; // rcx
  CWindowData *v9; // rax
  CWindowData *v10; // rax
  int v11; // eax
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v9 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          864LL);
    *(_QWORD *)&v12 = v9;
    if ( !v9 || (v10 = CWindowData::CWindowData(v9), (v5 = (__int64)v10) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
      goto LABEL_17;
    }
    *((_QWORD *)v10 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v11 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x826u, 0LL);
      goto LABEL_17;
    }
  }
  if ( v4 < 0 )
  {
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xDE2u, 0LL);
    goto LABEL_8;
  }
  if ( v5 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, __int128 *))(*(_QWORD *)a2 + 112LL))(a2, &v12);
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    if ( *(_DWORD *)(v5 + 296) != v6
      || (v7 = (unsigned int)v12, *(_DWORD *)(v5 + 264) != (_DWORD)v12)
      || (v7 = DWORD1(v12), *(_QWORD *)(v5 + 268) != *(_QWORD *)((char *)&v12 + 4))
      || *(_DWORD *)(v5 + 276) != HIDWORD(v12) )
    {
      *(_DWORD *)(v5 + 296) = v6;
      *(_OWORD *)(v5 + 264) = v12;
      CWindowList::OnClientMarginsChange((CWindowList *)v7, (struct CWindowData *)v5);
    }
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v4;
}
