/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180046780
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180021DF4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18004713C (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2, __int64 a3)
{
  double v4; // xmm6_8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v9; // rsi
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  struct _SINGLE_LIST_ENTRY *v13; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _SINGLE_LIST_ENTRY *v15; // rdi
  char v16; // bl
  CTimelineBase *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rdi
  _QWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationRecalc_Start,
      a3,
      1LL,
      (__int64)v22);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v15 = &CDesktopManager::s_listTimeline;
    CDesktopManager::s_fTimelineDirty = 0;
    v16 = 1;
    while ( Next )
    {
      v17 = (CTimelineBase *)&Next[-2];
      if ( LODWORD(Next[-1].Next) )
      {
        if ( v16 )
        {
          if ( *((_BYTE *)v17 + 73) )
          {
            v18 = CTimelineBase::UpdateBeforeTickWorker(v17, (CDesktopManager *)((char *)this + 272));
            Next = v15->Next;
            if ( v18 < 0 )
              v16 = 0;
          }
        }
        v15 = Next;
        Next = Next->Next;
      }
      else
      {
        if ( Next )
          v15->Next = Next->Next;
        (**(void (__fastcall ***)(CTimelineBase *, __int64))v17)(v17, 1LL);
        Next = v15->Next;
      }
    }
    v19 = *((_QWORD *)this + 36);
    if ( v19
      && v16
      && (*(int (__fastcall **)(__int64, struct _SINGLE_LIST_ENTRY *, _QWORD))(*(_QWORD *)v19 + 96LL))(v19, Next, 0LL) < 0 )
    {
      v16 = 0;
    }
    v20 = *((_QWORD *)this + 36);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_QWORD *)this + 36) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v16 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                          + 72LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v4 = a2 / 20.0;
  }
  v7 = *((_QWORD *)this + 34);
  *((double *)this + 33) = v4 + *((double *)this + 33);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v9 = j + 3;
    if ( !LOBYTE(j[7].Next) )
    {
      v10 = j[6].Next;
      v22[0] = 0LL;
      if ( !v10 || ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, _QWORD *))v10->Next[18].Next)(v10, v22) < 0 )
      {
        LOBYTE(j[7].Next) = 1;
LABEL_19:
        v13 = j[6].Next;
        if ( v13 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v13->Next[2].Next)(v13);
          j[6].Next = 0LL;
        }
        if ( *(double *)&j[1].Next < 0.0 )
          v9 = j + 2;
        j[4].Next = v9->Next;
        LOBYTE(j[7].Next) = 1;
        continue;
      }
      v11 = v22[0];
      v12 = v22[0] == 0LL;
      LOBYTE(j[7].Next) = v22[0] == 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v12 = (char)j[7].Next;
        v22[0] = 0LL;
      }
      if ( v12 )
        goto LABEL_19;
      ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))j[6].Next->Next[4].Next)(
        j[6].Next,
        &j[4]);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimationRecalc_Stop,
      v6,
      1LL,
      (__int64)v22);
}
