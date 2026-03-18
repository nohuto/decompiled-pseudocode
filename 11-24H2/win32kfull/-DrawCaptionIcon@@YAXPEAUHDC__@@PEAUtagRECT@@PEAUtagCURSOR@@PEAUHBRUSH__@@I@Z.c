/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8
 * Callers:
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140204794 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, unsigned int a5)
{
  int v6; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  struct tagCURSOR **v15; // r14
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  _QWORD *v19; // r9
  struct tagCURSOR **v20; // rax
  __int64 i; // rax
  HDC v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  struct tagCURSOR **v27; // rcx
  __int128 v28; // xmm0
  unsigned int v29; // edi
  HDC v30; // rbx
  __int64 v31; // rcx
  __int16 *OemBitmapInfo; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v35; // rcx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // eax
  RECT v41; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  if ( v6 != *(__int16 *)(GetOemBitmapInfo(29LL) + 6)
    || (v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928), a4 == *(HBRUSH *)(v13 + 4944))
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v41.left = left;
    v41.top = top;
    v41.right = left + v6;
    v41.bottom = top + v6;
    FillRect(a1, &v41, a4);
    DpiForSystem = GetDpiForSystem(v35);
    DpiDependentMetric = GetDpiDependentMetric(20, DpiForSystem);
    v39 = GetDpiForSystem(v38);
    v40 = GetDpiDependentMetric(21, v39);
    DrawIconEx(
      a1,
      (v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v40) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v40,
      0,
      0LL,
      3);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v15 = (struct tagCURSOR **)(UserSessionState + 43200);
    v16 = (_QWORD *)(UserSessionState + 43216);
    if ( (a5 & 0x10) != 0 )
    {
      v17 = a3 - *v15;
      v18 = a3 != *v15 ? 5 : 0;
    }
    else
    {
      v18 = 1;
      v17 = 1LL;
      v19 = (_QWORD *)(UserSessionState + 43216);
      v20 = (struct tagCURSOR **)(UserSessionState + 43216);
      do
      {
        v16 = v19;
        if ( *v20 == a3 )
          break;
        ++v18;
        ++v17;
        v20 += 2;
      }
      while ( v17 < 5 );
    }
    if ( v18 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v16 )
            break;
          ++v18;
          v16 += 2;
        }
      }
      v22 = *(HDC *)(W32GetUserSessionState(v17, v16) + 43288);
      v24 = GetDpiForSystem(v23);
      v25 = GetDpiDependentMetric(20, v24);
      BltMe4Times((unsigned int)v15[2 * v18 + 1], v6, v25, v22, a3, a5);
      *(_QWORD *)&v41.left = &v15[2 * v18];
      *(_QWORD *)&v41.right = a3;
      HMAssignmentLock(&v41, 0LL);
    }
    if ( v18 > 1LL )
    {
      v26 = v18 - 1LL;
      v27 = &v15[2 * v18];
      v18 = 1;
      do
      {
        v28 = *((_OWORD *)v27 - 1);
        *((_OWORD *)v27 - 1) = *(_OWORD *)v27;
        *(_OWORD *)v27 = v28;
        v27 -= 2;
        --v26;
      }
      while ( v26 );
    }
    v29 = (unsigned int)v15[2 * v18 + 1];
    v30 = PrepareHDCBITSBitmap(0LL);
    if ( v30 )
    {
      v31 = v29 + 1;
      if ( (a5 & 1) != 0 )
        v31 = v29;
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(v31);
      GreBitBltInternal(a1, a2->left, a2->top, v6, v6, v30, *OemBitmapInfo, OemBitmapInfo[1], 0xCC0020u, 0, 0);
    }
  }
  a2->left += v6;
}
