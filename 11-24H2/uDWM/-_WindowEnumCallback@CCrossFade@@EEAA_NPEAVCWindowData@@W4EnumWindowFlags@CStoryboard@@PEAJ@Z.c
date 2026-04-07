/*
 * XREFs of ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18005214C (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18005218C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCrossFade::_WindowEnumCallback(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // edi
  char v8; // si
  int v9; // ebx
  unsigned __int64 v10; // rcx
  float v11; // xmm6_4
  struct tagPOINT *v12; // rcx
  char result; // al
  int v14; // eax
  CWindowPropertyTracker *WPT; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  struct tagRECT v19; // [rsp+30h] [rbp-38h] BYREF
  CBaseObject *v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_17;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 744) & 0xFFF;
  v10 = (unsigned int)(v9 - 18);
  if ( v9 != 18 )
  {
    v10 = (unsigned int)(v9 - 19);
    if ( v9 == 19 )
      goto LABEL_20;
    if ( v9 == 61 )
    {
      LOBYTE(a3) = 1;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
              a1,
              a2,
              a3,
              &v20);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          v14,
          0x678u,
          0LL);
        goto LABEL_15;
      }
LABEL_9:
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == 75 )
      {
        if ( ((v9 - 62) & 0xFFFFFFFD) != 0 )
        {
LABEL_11:
          v11 = FLOAT_1_0;
LABEL_12:
          if ( !v20 )
            goto LABEL_17;
          v12 = (struct tagPOINT *)*((_QWORD *)v20 + 5);
          v19 = *(struct tagRECT *)((char *)v20 + 88);
          CAnimatedTransitionVisual::SetBeginRect(v12, &v19);
          CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v20 + 5), &v19);
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v20 + 5), v11);
          if ( *((_DWORD *)v20 + 17) != 2 )
            *((_DWORD *)v20 + 17) = 1;
          goto LABEL_15;
        }
      }
      else if ( !v8 )
      {
        goto LABEL_11;
      }
      v11 = 0.0;
      goto LABEL_12;
    }
    v10 = (unsigned int)(v9 - 62);
    if ( v9 == 62 )
      goto LABEL_20;
    v10 = (unsigned int)(v9 - 63);
    if ( v9 == 63 )
      goto LABEL_21;
    v10 = (unsigned int)(v9 - 64);
    if ( v9 == 64 )
    {
LABEL_20:
      v8 = 1;
      goto LABEL_21;
    }
    if ( v9 != 65 )
      goto LABEL_9;
  }
LABEL_21:
  WPT = CStoryboard::_GetWPT((CStoryboard *)v10);
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(WPT, *(HWND *)(v16 + 40), v8 ^ 1) )
    goto LABEL_9;
  LOBYTE(v17) = v8;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
          a1,
          a2,
          v17,
          &v20);
  v4 = v18;
  if ( v18 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x670u, 0LL);
LABEL_15:
  if ( v20 )
    CBaseObject::Release(v20);
LABEL_17:
  result = 1;
  *a4 = v4;
  return result;
}
