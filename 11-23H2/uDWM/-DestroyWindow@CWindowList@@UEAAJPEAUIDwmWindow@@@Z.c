/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004D160 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___ @ 0x18005BB94 (CWindowList--ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A2FB8 (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3698 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindow(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // ebx
  struct CWindowData *v5; // rdi
  int v6; // esi
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // r14
  struct CWindowData *v10; // rcx
  struct CWindowData **v11; // rax
  _QWORD *v12; // rdi
  CWindowData *v13; // rax
  CWindowData *v14; // rax
  int v15; // eax
  CAcrylicSheet *v16; // rbx
  struct CWindowData *v17; // [rsp+78h] [rbp+10h] BYREF
  struct CWindowData **v18; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+20h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  v4 = 0;
  v5 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    v18 = (struct CWindowData **)v13;
    if ( !v13 || (v14 = CWindowData::CWindowData(v13), (v5 = v14) == 0LL) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x822u, 0LL);
      goto LABEL_22;
    }
    *((_QWORD *)v14 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v14);
    *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v15 = CWindowList::SyncWindowData(this, a2, v5);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x826u, 0LL);
      goto LABEL_22;
    }
  }
  v6 = v4;
  v17 = v5;
  if ( v4 < 0 )
  {
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8B0u, 0LL);
    goto LABEL_5;
  }
  if ( v5 )
  {
    v8 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v5 + 3);
    if ( v8 )
    {
      (**v8)(v8, 0LL);
      *((_QWORD *)v17 + 3) = 0LL;
      v5 = v17;
    }
    v9 = *((_QWORD *)v5 + 5);
    if ( (*((_BYTE *)v5 + 676) & 2) != 0 )
    {
      v18 = &v17;
      CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___(this, &v18);
      v5 = v17;
    }
    if ( (*((_BYTE *)v5 + 672) & 4) == 0 )
    {
      v10 = *(struct CWindowData **)v5;
      v11 = (struct CWindowData **)*((_QWORD *)v5 + 1);
      if ( *(struct CWindowData **)(*(_QWORD *)v5 + 8LL) != v5 || *v11 != v5 )
        __fastfail(3u);
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      *((_QWORD *)v17 + 1) = v17;
      *(_QWORD *)v17 = v17;
      CWindowList::ImmediateDestroyWindow(this, v17);
    }
    v12 = (_QWORD *)*((_QWORD *)this + 67);
    if ( v12 && v9 == v12[1] )
    {
      v16 = *(CAcrylicSheet **)(*v12 + 544LL);
      if ( v16 )
      {
        CAcrylicSheet::StopAnimations(*(CAcrylicSheet **)(*v12 + 544LL));
        CAcrylicSheet::Hide(v16);
      }
      v12[1] = 0LL;
      v4 = v6;
    }
  }
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v4;
}
