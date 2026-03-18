/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1401E509C
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1401D9130 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402E9830 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  struct _LUID v5; // rbx
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rdi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // eax
  struct _LUID *v12; // rdx
  int v13; // eax
  int v14; // esi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  unsigned int v16; // eax
  __int64 HighPart; // rdi
  unsigned int v18; // eax
  __int64 v19; // r8
  _BYTE v20[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v21; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v23[2]; // [rsp+68h] [rbp-1h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v24; // [rsp+88h] [rbp+1Fh] BYREF

  v2 = a2;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1602;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1603;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1603LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1604;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!pDisplayAdapter->IsCoreResourceSharedOwner()",
      1604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 390);
  v5 = *(struct _LUID *)((char *)this + 412);
  v21 = v5;
  v6 = *(_QWORD *)(v4 + 128) + 3984 * v2;
  if ( !v6 )
    return -1073741811LL;
  if ( *(_BYTE *)(v6 + 766) )
  {
    v24.Flags.Value = 0;
    v24.VidPnSourceId = *(_DWORD *)(v6 + 16);
    v24.X = *(_DWORD *)(v6 + 716);
    v24.Y = *(_DWORD *)(v6 + 720);
    v24.Flags.Value = 1;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 1633;
      v11 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v11,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_18:
      v22 = 0LL;
      memset(v23, 0, sizeof(v23));
      v23[0].VidPnSourceId = 13;
      DXGADAPTER::IsAdapterSessionized(this, v12, 0LL, &v22);
      return SMgrGdiCallout(v23, v22, v19, 0LL, 0LL, 0LL);
    }
    v20[0] = 0;
    v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v20, 0);
    v14 = v13;
    if ( v13 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v21, *(_DWORD *)(v6 + 16));
      if ( SessionViewFromSource )
      {
        v14 = SetPointerShapeForDisplaySource(
                (struct DISPLAY_SOURCE *)v6,
                &v24,
                0LL,
                SessionViewFromSource,
                0LL,
                0,
                0,
                1,
                0,
                0);
      }
      else
      {
        v16 = PsGetCurrentProcessSessionId();
        HighPart = v21.HighPart;
        v14 = -1073741811;
        WdLogSingleEntry5(2LL, *(unsigned int *)(v6 + 16), v21.HighPart, v5.LowPart, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 1658;
        v18 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
          *(unsigned int *)(v6 + 16),
          HighPart,
          v5.LowPart,
          v18,
          -1073741811LL);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, v13);
      WdLogGlobalForLineNumber = 1645;
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v20);
    if ( v14 < 0 )
      goto LABEL_18;
  }
  return 0LL;
}
