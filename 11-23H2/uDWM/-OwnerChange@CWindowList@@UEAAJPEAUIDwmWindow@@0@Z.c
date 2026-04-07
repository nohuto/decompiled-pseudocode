/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180007C98 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001FE64 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18004EDF0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  int v6; // ebx
  CWindowList *v7; // rcx
  CWindowData *v8; // rsi
  unsigned int v9; // edi
  __int64 v11; // r15
  int v12; // r14d
  __int64 v13; // rbx
  CWindowData *v14; // r8
  CWindowData *v15; // rbx
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // r9d
  CWindowData *v22; // rdi
  __int64 v23; // rax
  bool v24; // al
  int v25; // edi
  CWindowData *v26; // rax
  CWindowData *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // r9
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // r15
  CWindowData *v37; // rsi
  __int64 v38; // rax
  CWindowList *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  unsigned int v44; // esi
  __int64 v45; // r15
  int v46; // eax
  bool ShouldBeIncludedInOwnerSWR; // al
  CWindowData *v48; // rax
  CWindowData *v49; // rax
  unsigned int v50; // eax
  int v51; // r9d
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  int v59; // [rsp+20h] [rbp-30h]
  unsigned int v60; // [rsp+20h] [rbp-30h]
  int v61; // [rsp+20h] [rbp-30h]
  __int128 v62; // [rsp+30h] [rbp-20h] BYREF
  __int64 v63; // [rsp+40h] [rbp-10h]
  unsigned int v64; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  CWindowData *v66; // [rsp+98h] [rbp+48h] BYREF
  CWindowData **v67; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v68; // [rsp+A8h] [rbp+58h]

  v68 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (a3 || (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2)) )
  {
    v48 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    v66 = v48;
    if ( v48 && (v49 = CWindowData::CWindowData(v48), (v8 = v49) != 0LL) )
    {
      *((_QWORD *)v49 + 3) = a2;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v49);
      *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
      v6 = CWindowList::SyncWindowData(this, a2, v8);
      if ( v6 >= 0 )
        goto LABEL_4;
      v50 = 2086;
    }
    else
    {
      v6 = -2147024882;
      v50 = 2082;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v50, 0LL);
    v9 = v6;
    v60 = 4408;
    goto LABEL_87;
  }
LABEL_4:
  v9 = v6;
  if ( v8 )
  {
    v11 = 0LL;
    if ( a3 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
      if ( !v11 )
      {
        v26 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               864LL);
        v66 = v26;
        if ( !v26 || (v27 = CWindowData::CWindowData(v26), (v11 = (__int64)v27) == 0) )
        {
          v6 = -2147024882;
          v9 = -2147024882;
          v52 = 2082;
          goto LABEL_86;
        }
        *((_QWORD *)v27 + 3) = a3;
        (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v27);
        *(_QWORD *)(v11 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
        v6 = CWindowList::SyncWindowData(this, a3, (struct CWindowData *)v11);
        v9 = v6;
        if ( v6 < 0 )
        {
          v52 = 2086;
LABEL_86:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v52, 0LL);
          v60 = 4416;
LABEL_87:
          v51 = v6;
LABEL_118:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, v60, 0LL);
          goto LABEL_6;
        }
      }
    }
    v66 = v8;
    v12 = 0;
    v13 = *((_QWORD *)v8 + 75);
    if ( v13 == v11 )
      goto LABEL_9;
    if ( v13 )
    {
      *((_BYTE *)v8 + 674) &= ~1u;
      v30 = 0LL;
      if ( *(_DWORD *)(v13 + 520) )
      {
        v28 = v13;
        do
        {
          v29 = *(_QWORD *)(*(_QWORD *)(v28 + 496) + 8 * v30);
          if ( *(_QWORD *)(v29 + 64) == v13 && *(_DWORD *)(v29 + 72) == 1 )
            CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
              (CSecondaryWindowRepresentation *)v29,
              v8,
              0);
          v30 = (unsigned int)(v30 + 1);
          v28 = *((_QWORD *)v8 + 75);
        }
        while ( (unsigned int)v30 < *(_DWORD *)(v28 + 520) );
        *((_QWORD *)v66 + 75) = 0LL;
LABEL_41:
        v31 = 0LL;
        v32 = *(_QWORD *)(v13 + 608);
        v33 = *(_DWORD *)(v13 + 632);
        v14 = v66;
        if ( v33 )
        {
          do
          {
            if ( v66 == *(CWindowData **)(v32 + 8 * v31) )
              break;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v33 );
        }
        if ( (unsigned int)v31 < v33 )
        {
          for ( ; (unsigned int)v31 < v33 - 1; v33 = *(_DWORD *)(v13 + 632) )
          {
            *(_QWORD *)(v32 + 8 * v31) = *(_QWORD *)(v32 + 8LL * (unsigned int)(v31 + 1));
            v31 = (unsigned int)(v31 + 1);
          }
          *(_DWORD *)(v13 + 632) = v33 - 1;
          v14 = v66;
        }
        v34 = 0;
        v7 = (CWindowList *)*(unsigned int *)(v13 + 520);
        if ( !(_DWORD)v7 )
        {
LABEL_14:
          *((_QWORD *)v14 + 75) = v11;
          v15 = v66;
          if ( !v11 || (CWindowData *)v11 == v66 )
            goto LABEL_27;
          v16 = (_QWORD *)(v11 + 608);
          v17 = *(_DWORD *)(v11 + 632);
          v18 = v17 + 1;
          if ( v17 + 1 < v17 )
          {
            v12 = -2147024362;
            v20 = -2147024362;
            v21 = -2147024362;
            v54 = 181;
          }
          else
          {
            if ( v18 <= *(_DWORD *)(v11 + 628) )
            {
              v7 = (CWindowList *)*(unsigned int *)(v11 + 632);
              *(_QWORD *)(*v16 + 8LL * (_QWORD)v7) = v66;
              *(_DWORD *)(v11 + 632) = v18;
              goto LABEL_20;
            }
            v67 = &v66;
            v19 = DynArrayImpl<0>::Grow((char **)(v11 + 608), 8u, 1, 0, (unsigned __int64 *)&v67);
            v20 = v19;
            v21 = v19;
            if ( v19 >= 0 )
            {
              v7 = *v67;
              *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v11 + 632))++) + *v16) = *v67;
LABEL_20:
              v15 = v66;
              v22 = v66;
              v23 = *((_QWORD *)v66 + 75);
              v24 = 0;
              if ( v23 )
              {
                if ( *(char *)(v23 + 673) < 0 )
                {
                  ShouldBeIncludedInOwnerSWR = CWindowData::ShouldBeIncludedInOwnerSWR(v66);
                  v15 = v66;
                  if ( ShouldBeIncludedInOwnerSWR )
                    v24 = 1;
                }
              }
              if ( (*((_BYTE *)v22 + 674) & 1) != v24 )
              {
                CWindowData::UpdateOwnerLists(v22, !(*((_BYTE *)v22 + 674) & 1));
                v15 = v66;
              }
              v25 = 0;
              if ( *(_DWORD *)(v11 + 520) )
              {
                v62 = 0LL;
                v63 = 0LL;
                v64 = 0;
                if ( (int)DynArrayImpl<0>::AddMultipleAndSet(
                            (__int64)&v62,
                            8,
                            *(_DWORD *)(v11 + 520),
                            *(_QWORD *)(v11 + 496)) >= 0 )
                {
                  v43 = 0LL;
                  v44 = v64;
                  if ( v64 )
                  {
                    v45 = v62;
                    while ( 1 )
                    {
                      v46 = CSecondaryWindowRepresentation::OnRepresentationUpdated(
                              *(CSecondaryWindowRepresentation **)(v45 + 8 * v43),
                              v40,
                              v41,
                              v42);
                      v25 = v46;
                      v12 = v46;
                      if ( v46 < 0 )
                        break;
                      v43 = (unsigned int)(v43 + 1);
                      if ( (unsigned int)v43 >= v44 )
                        goto LABEL_75;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x535u, 0LL);
                    DynArrayImpl<0>::~DynArrayImpl<0>(&v62);
                    goto LABEL_94;
                  }
                }
LABEL_75:
                DynArrayImpl<0>::~DynArrayImpl<0>(&v62);
                v15 = v66;
              }
              v12 = v25;
              if ( v25 >= 0 )
              {
LABEL_27:
                if ( *(CWindowData **)v15 != v15 )
                {
                  WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v15 + 17));
                  v37 = v15;
                  while ( 1 )
                  {
                    if ( (*((_BYTE *)v37 + 672) & 1) != 0 )
                    {
                      v38 = *((_QWORD *)v37 + 55);
                      if ( v38 )
                      {
                        if ( *(_QWORD *)(v38 + 24) )
                        {
                          v39 = (CWindowList *)*((_QWORD *)v37 + 3);
                          if ( v39 )
                          {
                            if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v39 + 440LL))(v39) )
                            {
                              if ( CWindowData::PropertiesAllowAutoParenting(v37)
                                && (*((_BYTE *)v37 + 677) & 0x10) == 0
                                && !*((_QWORD *)v37 + 58)
                                && (*((_BYTE *)v37 + 676) & 2) == 0 )
                              {
                                v39 = (CWindowList *)*((_QWORD *)v37 + 75);
                                if ( (*((_BYTE *)v39 + 672) & 1) != 0 )
                                {
                                  if ( *((_QWORD *)v39 + 55) )
                                  {
                                    if ( (*((_BYTE *)v39 + 678) & 0x10) == 0 )
                                    {
                                      v56 = *((_QWORD *)v37 + 1);
                                      if ( (struct _LIST_ENTRY *)v56 != WindowListForDesktopCanFail )
                                      {
                                        while ( 1 )
                                        {
                                          if ( (CWindowList *)v56 == v39 )
                                            goto LABEL_111;
                                          if ( (*(_BYTE *)(v56 + 672) & 1) != 0 )
                                          {
                                            v57 = *(_QWORD *)(v56 + 440);
                                            if ( v57 )
                                            {
                                              if ( *(_QWORD *)(v57 + 24) )
                                                break;
                                            }
                                          }
                                          v56 = *(_QWORD *)(v56 + 8);
                                          if ( (struct _LIST_ENTRY *)v56 == WindowListForDesktopCanFail )
                                            goto LABEL_65;
                                        }
                                        if ( *(CWindowList **)(v56 + 600) == v39 && (*(_BYTE *)(v56 + 678) & 0x10) != 0 )
                                        {
LABEL_111:
                                          LOBYTE(v39) = 1;
                                          goto LABEL_66;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
LABEL_65:
                          LOBYTE(v39) = 0;
LABEL_66:
                          if ( (_BYTE)v39 == ((*((_BYTE *)v37 + 678) & 0x10) != 0) )
                            goto LABEL_9;
                          v58 = CWindowList::ToggleAutoParenting(v39, v37);
                          v9 = v58;
                          if ( v58 < 0 )
                            break;
                        }
                      }
                    }
                    v37 = *(CWindowData **)v37;
                    if ( !v37 || v37 == (CWindowData *)WindowListForDesktopCanFail || v37 == v15 )
                      goto LABEL_9;
                  }
                  v55 = 8184LL;
                  goto LABEL_116;
                }
                if ( (*((_BYTE *)v15 + 678) & 0x10) != 0 )
                {
                  v58 = CWindowList::ToggleAutoParenting(v7, v15);
                  v9 = v58;
                  if ( v58 < 0 )
                  {
                    v55 = 8168LL;
LABEL_116:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v55,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                      (const char *)(unsigned int)v58,
                      v59);
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x117C,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                      (const char *)v9,
                      v61);
LABEL_117:
                    v60 = 4420;
                    v51 = v9;
                    goto LABEL_118;
                  }
                }
LABEL_9:
                v9 = v12;
                if ( v12 >= 0 )
                  goto LABEL_6;
                goto LABEL_117;
              }
LABEL_94:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1179u, 0LL);
              goto LABEL_9;
            }
            v12 = v19;
            v54 = 192;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v54, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1174u, 0LL);
          goto LABEL_9;
        }
        v35 = *(_QWORD *)(v13 + 496);
        while ( *(CWindowData **)(*(_QWORD *)v35 + 64LL) != v14 )
        {
          ++v34;
          v35 += 8LL;
          if ( v34 >= (unsigned int)v7 )
            goto LABEL_14;
        }
        v53 = CWindowData::NotifyRepresentationChanged((CWindowData *)v13);
        v12 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1167u, 0LL);
          goto LABEL_9;
        }
LABEL_13:
        v14 = v66;
        goto LABEL_14;
      }
      v8 = v66;
    }
    *((_QWORD *)v8 + 75) = 0LL;
    if ( !v13 )
      goto LABEL_13;
    goto LABEL_41;
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
