/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AF80C
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001D4A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AEF60 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800AFDA0 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800E974C (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800E97CC (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  int v4; // ebp
  unsigned int v5; // ecx
  unsigned __int16 *FeedbackString; // r14
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  CTrackingTooltip *v10; // rcx
  __int64 v11; // rax
  int v12; // ebx
  HMODULE ModuleHandleW; // rax
  CContactManager *v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  CTrackingTooltip *v18; // rcx
  CTrackingTooltip *v19; // rcx
  unsigned int v20; // ecx
  __int64 i; // r9
  __int64 v22; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-28h]
  _BYTE *v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 52);
  FeedbackString = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v8 = *((_QWORD *)this + 23);
    while ( 1 )
    {
      v9 = 3 * v7;
      if ( *(_DWORD *)(v8 + 24 * v7) == a3 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v5 )
        goto LABEL_30;
    }
    if ( (int)v7 >= 0 )
    {
      v10 = *(CTrackingTooltip **)(v8 + 24 * v7 + 16);
      if ( a2 )
      {
        if ( v10 )
        {
          CTrackingTooltip::Update(v10, (const struct tagPOINT *)(v8 + 8 + 24 * v7), 0LL);
          goto LABEL_30;
        }
        _mm_lfence();
        v11 = *((_QWORD *)this + 23);
        LODWORD(v27) = 0;
        v12 = dword_180128790[*(int *)(v11 + 24 * v7 + 4)];
        ModuleHandleW = GetModuleHandleW(0LL);
        FeedbackString = CContactManager::LoadFeedbackString(v14, ModuleHandleW, v12, (int *)&v27);
        if ( !FeedbackString )
        {
          v26 = 1645;
LABEL_12:
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v26);
          goto LABEL_30;
        }
        v15 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
        v16 = v15;
        v27 = v15;
        if ( v15 )
          *v15 = 0;
        else
          v16 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = v16;
        v17 = *((_QWORD *)this + 23);
        v18 = *(CTrackingTooltip **)(v17 + 8 * v9 + 16);
        if ( !v18 )
        {
          v26 = 1649;
          goto LABEL_12;
        }
        v4 = CTrackingTooltip::Initialize(v18, (const struct tagPOINT *)(v17 + 8 + 8 * v9), FeedbackString);
        if ( v4 < 0 )
        {
          v19 = *(CTrackingTooltip **)(*((_QWORD *)this + 23) + 8 * v9 + 16);
          if ( v19 )
            CTrackingTooltip::`scalar deleting destructor'(v19);
          *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = 0LL;
        }
      }
      else
      {
        if ( v10 )
          CTrackingTooltip::`scalar deleting destructor'(v10);
        *(_QWORD *)(*((_QWORD *)this + 23) + 24 * v7 + 16) = 0LL;
        v20 = *((_DWORD *)this + 52);
        if ( (unsigned int)v7 < v20 )
        {
          for ( i = *((_QWORD *)this + 23); (unsigned int)v7 < v20 - 1; v20 = *((_DWORD *)this + 52) )
          {
            v22 = (unsigned int)v7;
            LODWORD(v7) = v7 + 1;
            v23 = *(_QWORD *)(i + 24LL * (unsigned int)v7 + 16);
            v24 = 3 * v22;
            *(_OWORD *)(i + 8 * v24) = *(_OWORD *)(i + 24LL * (unsigned int)v7);
            *(_QWORD *)(i + 8 * v24 + 16) = v23;
          }
          *((_DWORD *)this + 52) = v20 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        }
      }
    }
  }
LABEL_30:
  (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    FeedbackString);
  return (unsigned int)v4;
}
