/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180026AA0
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x1800269E0 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 * Callees:
 *     ?UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ @ 0x180026D30 (-UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18006689C (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z @ 0x18007268C (-UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2, int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  bool v10; // si
  struct _SINGLE_LIST_ENTRY *v11; // rdi
  CTimelineBase *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rdi
  int v16; // eax
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Start,
      a3,
      1,
      (__int64)v17);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v10 = 1;
    v11 = &CDesktopManager::s_listTimeline;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        v12 = (CTimelineBase *)&Next[-2];
        if ( LODWORD(Next[-1].Next) )
        {
          if ( v10 )
          {
            if ( *((_BYTE *)v12 + 73) )
            {
              v16 = CTimelineBase::UpdateBeforeTickWorker(v12, (CDesktopManager *)((char *)this + 264));
              Next = v11->Next;
              if ( v16 < 0 )
                v10 = 0;
            }
          }
          v11 = Next;
        }
        else
        {
          if ( Next )
            v11->Next = Next->Next;
          (**(void (__fastcall ***)(CTimelineBase *, __int64))v12)(v12, 1LL);
        }
        Next = v11->Next;
      }
      while ( v11->Next );
    }
    v13 = *((_QWORD *)this + 35);
    if ( v13
      && v10
      && (*(int (__fastcall **)(__int64, struct _SINGLE_LIST_ENTRY *, _QWORD))(*(_QWORD *)v13 + 96LL))(v13, Next, 0LL) < 0 )
    {
      v10 = 0;
    }
    v14 = *((_QWORD *)this + 35);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64, struct _SINGLE_LIST_ENTRY *))(*(_QWORD *)v14 + 16LL))(v14, Next);
      *((_QWORD *)this + 35) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
        CTimelineBase::UpdateBeforeTickResultWorker((CTimelineBase *)&i[-2], v10);
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
  v7 = *((_QWORD *)this + 33);
  *((double *)this + 32) = v4 + *((double *)this + 32);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    if ( !LOBYTE(j[7].Next) )
      CTimelineBase::UpdateAfterTickWorker((CTimelineBase *)&j[-2]);
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Stop,
      v6,
      1,
      (__int64)v17);
}
