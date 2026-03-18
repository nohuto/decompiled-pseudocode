/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1403671F4
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1403ECA64 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x140058794 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x140188324 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402D7DA0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x140367654 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x140367728 (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  struct DISPLAY_SOURCE *OwnedDisplaySource; // r15
  const wchar_t *v10; // r9
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v13; // rbx
  DXGSESSIONDATA *v14; // r8
  DXGSESSIONDATA ***v15; // rdx
  unsigned __int8 v16; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v16 = 0;
  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a2, a3);
  if ( !OwnedDisplaySource )
  {
    v4 = -1073741811;
    WdLogSingleEntry5(2LL, (unsigned int)v5, a2->HighPart, a2->LowPart, this, -1073741811LL);
    v10 = L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 4257;
LABEL_3:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      v10,
      v5,
      a2->HighPart,
      a2->LowPart,
      (__int64)this,
      -1073741811LL);
    return v4;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
  v13 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v4 = -1073741811;
    WdLogSingleEntry5(2LL, v5, a2->HighPart, a2->LowPart, this, -1073741811LL);
    v10 = L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not in any session view in session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 4273;
    goto LABEL_3;
  }
  if ( a4 )
  {
    SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  }
  else
  {
    v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, OwnedDisplaySource, (bool *)&v16);
    if ( !v16 )
      return v4;
  }
  v14 = v13[1];
  if ( *((DXGSESSIONDATA ***)v14 + 1) != v13 + 1 || (v15 = (DXGSESSIONDATA ***)v13[2], *v15 != v13 + 1) )
    __fastfail(3u);
  *v15 = (DXGSESSIONDATA **)v14;
  *((_QWORD *)v14 + 1) = v15;
  SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v13);
  return v4;
}
