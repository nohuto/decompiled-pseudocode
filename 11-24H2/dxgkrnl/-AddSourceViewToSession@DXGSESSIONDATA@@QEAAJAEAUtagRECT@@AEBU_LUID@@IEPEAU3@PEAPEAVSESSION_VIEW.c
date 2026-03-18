/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x140367378
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x140349DF0 (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x140064328 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1401F9EE4 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x140367654 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
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
  __int64 v10; // r11
  struct DISPLAY_SOURCE *v11; // r14
  __int64 v12; // rcx
  char *v13; // rbx
  char *i; // r8
  char **v15; // r8
  char *v16; // r9
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
  v11 = OwnedDisplaySource;
  if ( !OwnedDisplaySource )
  {
    v19 = v10;
    WdLogSingleEntry5(2LL, v10, a3->HighPart, a3->LowPart, this, -1073741811LL);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 4133;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x (returning 0x%I64x).",
      v19,
      HighPart,
      LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v12 = *((_QWORD *)OwnedDisplaySource + 6);
  if ( v12 )
  {
    v20 = v10;
    if ( IsEqualRect((const struct tagRECT *)(v12 + 24), a2) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v25[3] = v20;
      v25[4] = a3->HighPart;
      v25[5] = a3->LowPart;
      v25[7] = -1071774953LL;
      v25[6] = this;
      result = 3223192343LL;
      WdLogGlobalForLineNumber = 4153;
      return result;
    }
    WdLogSingleEntry5(2LL, v20, a3->HighPart, a3->LowPart, this, -1073741811LL);
    v36 = a3->LowPart;
    v33 = a3->HighPart;
    WdLogGlobalForLineNumber = 4164;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is owned by other session view in session 0x%I64x, returning 0x%I64x.",
      v20,
      v33,
      v36,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v13 = (char *)this + 18600;
  for ( i = (char *)*((_QWORD *)this + 2325); i != v13; i = *v15 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
    {
      if ( v16 )
        goto LABEL_18;
      break;
    }
  }
  v17 = operator new(0x48uLL, 0x4B677844u, 256LL);
  v16 = (char *)v17;
  if ( !v17 )
  {
    WdLogSingleEntry5(6LL, a2->left, a2->top, a2->right, a2->bottom, this);
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    WdLogGlobalForLineNumber = 4188;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
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
  *((_QWORD *)v16 + 8) = 0LL;
  v28 = v16 + 8;
  v29 = (char **)*((_QWORD *)this + 2326);
  if ( *v29 != v13 )
    __fastfail(3u);
  *(_QWORD *)v28 = v13;
  *((_QWORD *)v16 + 2) = v29;
  *v29 = v28;
  *((_QWORD *)this + 2326) = v28;
LABEL_18:
  *((struct _LUID *)v16 + 8) = *a6;
  SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v16, v11, a5);
  return 0LL;
}
