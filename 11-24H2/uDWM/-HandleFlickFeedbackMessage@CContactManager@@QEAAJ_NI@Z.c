/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180083770 (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800B6780 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800B6E30 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ??0CTrackingTooltip@@QEAA@XZ @ 0x1800DC4AC (--0CTrackingTooltip@@QEAA@XZ.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800DC5D4 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800DC654 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  int v3; // ebp
  __int64 *v4; // rsi
  unsigned __int16 *FeedbackString; // r14
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  CTrackingTooltip *v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  HMODULE ModuleHandleW; // rax
  CContactManager *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  CTrackingTooltip *v15; // rax
  CTrackingTooltip *v16; // rcx
  CTrackingTooltip *v17; // rcx
  char v18; // dl
  CTrackingTooltip *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h]
  CTrackingTooltip *v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (__int64 *)((char *)this + 184);
  FeedbackString = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 52) )
      goto LABEL_24;
    v7 = *v4;
    v8 = 3 * i;
    if ( *(_DWORD *)(*v4 + 24 * i) == a3 )
      break;
  }
  if ( (int)i < 0 )
    goto LABEL_24;
  v9 = *(CTrackingTooltip **)(v7 + 24 * i + 16);
  if ( a2 )
  {
    if ( v9 )
    {
      CTrackingTooltip::Update(v9, (const struct tagPOINT *)(v7 + 8 + 24 * i), 0LL);
      goto LABEL_24;
    }
    _mm_lfence();
    v10 = *v4;
    LODWORD(v22) = 0;
    v11 = dword_180109740[*(int *)(v10 + 24 * i + 4)];
    ModuleHandleW = GetModuleHandleW(0LL);
    FeedbackString = CContactManager::LoadFeedbackString(v13, ModuleHandleW, v11, (int *)&v22);
    if ( !FeedbackString )
    {
      v21 = 1644;
LABEL_11:
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v21, 0LL);
      goto LABEL_24;
    }
    v15 = (CTrackingTooltip *)operator new[](0x70uLL, v14);
    v22 = v15;
    if ( v15 )
      v16 = CTrackingTooltip::CTrackingTooltip(v15);
    else
      v16 = 0LL;
    *(_QWORD *)(*v4 + 8 * v8 + 16) = v16;
    v17 = *(CTrackingTooltip **)(*v4 + 8 * v8 + 16);
    if ( !v17 )
    {
      v21 = 1648;
      goto LABEL_11;
    }
    v3 = CTrackingTooltip::Initialize(v17, (const struct tagPOINT *)(*v4 + 8 + 8 * v8), FeedbackString);
    if ( v3 < 0 )
    {
      v19 = *(CTrackingTooltip **)(*v4 + 8 * v8 + 16);
      if ( v19 )
        CTrackingTooltip::`scalar deleting destructor'(v19, v18);
      *(_QWORD *)(*v4 + 8 * v8 + 16) = 0LL;
    }
  }
  else
  {
    if ( v9 )
      CTrackingTooltip::`scalar deleting destructor'(v9, a2);
    *(_QWORD *)(*v4 + 24 * i + 16) = 0LL;
    DynArray<CFlickTextFeedback,0>::RemoveAt(v4, i);
  }
LABEL_24:
  DefaultHeap::Free(FeedbackString);
  return (unsigned int)v3;
}
