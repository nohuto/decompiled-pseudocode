/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x14031ABE0
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x14031AA80 (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x140064708 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1401F3698 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x14031AEBC (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        char a5,
        struct _LUID *a6)
{
  struct DISPLAY_SOURCE *OwnedDisplaySource; // rax
  char *v10; // r9
  __int64 v11; // r11
  struct DISPLAY_SOURCE *v12; // r14
  __int64 v13; // rcx
  char *v14; // rbx
  char *i; // r8
  char **v16; // r8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  struct tagRECT v26; // xmm0
  _QWORD *v27; // rax
  char *v28; // rax
  char **v29; // rcx
  __int64 left; // [rsp+20h] [rbp-38h]
  __int64 top; // [rsp+28h] [rbp-30h]
  __int64 HighPart; // [rsp+28h] [rbp-30h]
  __int64 v33; // [rsp+28h] [rbp-30h]
  __int64 right; // [rsp+30h] [rbp-28h]
  __int64 LowPart; // [rsp+30h] [rbp-28h]
  __int64 v36; // [rsp+30h] [rbp-28h]
  __int64 bottom; // [rsp+38h] [rbp-20h]

  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a3, a4);
  v12 = OwnedDisplaySource;
  if ( !OwnedDisplaySource )
  {
    v19 = v11;
    WdLogSingleEntry5(2LL, v11, a3->HighPart, a3->LowPart, this, -1073741811LL);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 4113;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x (returning 0x%I64x).",
      v19,
      HighPart,
      LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)OwnedDisplaySource + 6);
  if ( v13 )
  {
    v20 = v11;
    if ( IsEqualRect((const struct tagRECT *)(v13 + 24), a2) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v25[3] = v20;
      v25[4] = a3->HighPart;
      v25[5] = a3->LowPart;
      v25[7] = -1071774953LL;
      v25[6] = this;
      result = 3223192343LL;
      WdLogGlobalForLineNumber = 4133;
      return result;
    }
    WdLogSingleEntry5(2LL, v20, a3->HighPart, a3->LowPart, this, -1073741811LL);
    v36 = a3->LowPart;
    v33 = a3->HighPart;
    WdLogGlobalForLineNumber = 4144;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is owned by other session view in session 0x%I64x, returning 0x%I64x.",
      v20,
      v33,
      v36,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v14 = (char *)this + 18600;
  for ( i = (char *)*((_QWORD *)this + 2325); i != v14; i = *v16 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
    {
      if ( v10 )
        goto LABEL_18;
      break;
    }
  }
  v17 = operator new(0x48uLL, 0x4B677844u, 256LL, (__int64)v10);
  v10 = (char *)v17;
  if ( !v17 )
  {
    WdLogSingleEntry5(6LL, a2->left, a2->top, a2->right, a2->bottom, this);
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    WdLogGlobalForLineNumber = 4168;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate session view for rect (%d, %d, %d, %d) in session 0x%I64x.",
      left,
      top,
      right,
      bottom,
      (__int64)this);
    return 3221225495LL;
  }
  *(_QWORD *)v17 = this;
  v26 = *a2;
  *(_DWORD *)(v17 + 40) = 0;
  *(struct tagRECT *)(v17 + 24) = v26;
  v27 = (_QWORD *)(v17 + 48);
  v27[1] = v27;
  *v27 = v27;
  *((_QWORD *)v10 + 8) = 0LL;
  v28 = v10 + 8;
  v29 = (char **)*((_QWORD *)this + 2326);
  if ( *v29 != v14 )
    __fastfail(3u);
  *(_QWORD *)v28 = v14;
  *((_QWORD *)v10 + 2) = v29;
  *v29 = v28;
  *((_QWORD *)this + 2326) = v28;
LABEL_18:
  *((struct _LUID *)v10 + 8) = *a6;
  SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v10, v12, a5);
  return 0LL;
}
