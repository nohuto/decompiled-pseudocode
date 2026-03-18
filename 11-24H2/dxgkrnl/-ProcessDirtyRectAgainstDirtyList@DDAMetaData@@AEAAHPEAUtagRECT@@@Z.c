/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F31F4
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F30DC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F2EBC (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402F3448 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1402F3868 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  int DoesRectOverlapWithExistingDirty; // eax
  unsigned int v6; // r14d
  __int64 v7; // rax
  const wchar_t *v8; // r9
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 741;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DWM is passing in a NULL rect, DWM needs to investigate!!",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 1LL;
  }
  else
  {
    v9 = 0LL;
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(this, v2, &v9);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v2 = (struct tagRECT *)&v9;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            WdLogSingleEntry0(2LL);
            v7 = 778LL;
            v8 = L"Failed to convert dirty rects to GDI region";
LABEL_18:
            WdLogGlobalForLineNumber = v7;
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v8, v7, 0LL, 0LL, 0LL, 0LL);
            return 0LL;
          }
          break;
        default:
          if ( (unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
            return 1LL;
          WdLogSingleEntry0(2LL);
          v7 = 793LL;
          v8 = L"Failed to process dirty against move list";
          goto LABEL_18;
      }
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
           *((_QWORD *)this + 9),
           (unsigned int)v2->left,
           (unsigned int)v2->top,
           (unsigned int)v2->right,
           v2->bottom);
    if ( !v6 )
    {
      WdLogSingleEntry0(2LL);
      v7 = 804LL;
      v8 = L"Failed to set tmp region to current dirty rect";
      goto LABEL_18;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 9),
           2LL) )
    {
      return 1LL;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 810;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to combine move rect with dirty region",
      810LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
}
