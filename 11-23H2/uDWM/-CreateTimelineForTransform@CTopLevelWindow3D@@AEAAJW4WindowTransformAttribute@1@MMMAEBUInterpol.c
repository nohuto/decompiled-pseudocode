/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180038100
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        __int64 a6)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rax
  bool v13; // zf
  char v14; // al
  _BYTE v15[40]; // [rsp+30h] [rbp-68h]

  v6 = a2;
  v8 = 0;
  *(_OWORD *)v15 = *(_OWORD *)a6;
  v9 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  *(_QWORD *)&v15[32] = *(_QWORD *)(a6 + 32);
  *(_OWORD *)&v15[16] = *(_OWORD *)(a6 + 16);
  if ( v9 )
  {
    v13 = (*(_DWORD *)(v9 + 8))-- == 1;
    v14 = CDesktopManager::s_fTimelineDirty;
    if ( v13 )
      v14 = 1;
    *(_QWORD *)(a1 + 8LL * a2 + 392) = 0LL;
    CDesktopManager::s_fTimelineDirty = v14;
  }
  v10 = *(_DWORD *)v15;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - a5) & _xmm) < 0.00000011920929 )
    v10 = 0;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = &CTimelineBase::`vftable';
    *(_DWORD *)(v11 + 56) = v10;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(double *)(v11 + 32) = a4;
    *(double *)(v11 + 40) = a5;
    *(double *)(v11 + 48) = a4;
    *(_WORD *)(v11 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
    *(double *)(v11 + 24) = a3;
    *(struct _SINGLE_LIST_ENTRY *)(v11 + 16) = CDesktopManager::s_listTimeline;
    CDesktopManager::s_listTimeline.Next = (struct _SINGLE_LIST_ENTRY *)(v11 + 16);
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_QWORD *)v11 = &CTimeline<float>::`vftable';
    *(_OWORD *)(v11 + 88) = *(_OWORD *)&v15[8];
    *(_OWORD *)(v11 + 104) = *(_OWORD *)&v15[24];
    *(_QWORD *)(a1 + 8 * v6 + 392) = v11;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v6 + 392) = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xECu, 0LL);
  }
  return v8;
}
