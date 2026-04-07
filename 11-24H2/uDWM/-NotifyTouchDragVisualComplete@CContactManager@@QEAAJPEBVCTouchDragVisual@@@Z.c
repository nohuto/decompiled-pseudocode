/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800122A0
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180012590 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  unsigned int v4; // esi
  int i; // ecx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int Touch; // eax
  CContactManager *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 20); ++i )
  {
    v13 = 104LL * (unsigned int)i;
    v14 = *((_QWORD *)this + 7);
    if ( *(const struct CTouchDragVisual **)(v13 + v14 + 80) == a2 )
    {
      if ( i >= 0 )
      {
        *(_BYTE *)(v13 + v14 + 96) = 1;
        *(_QWORD *)(v13 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v13 + *((_QWORD *)this + 7) + 8);
        v7 = *((_QWORD *)this + 7);
        if ( !*(_QWORD *)(v13 + v7 + 88)
          && !*(_QWORD *)(v13 + v7 + 64)
          && (*((_BYTE *)this + 324) || *(_DWORD *)(v13 + v7 + 40)) )
        {
          if ( !*(_QWORD *)(v13 + v7 + 48) )
          {
            v8 = *((_QWORD *)a2 + 31);
            Touch = CreateTouchVisual<CDirectTouchVisual>(v8);
            v4 = Touch;
            if ( Touch < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x427u, 0LL);
              break;
            }
            CContactManager::AddToTouchNode(v10, v8, *(struct CVisual **)(v13 + *((_QWORD *)this + 7) + 48));
          }
          v11 = *((_QWORD *)this + 7);
          v12 = 4294967291LL;
          if ( !*((_BYTE *)this + 324) )
            v12 = *(unsigned int *)(v13 + v11 + 40);
          CDirectTouchVisual::StartDown(*(_QWORD *)(v13 + v11 + 48), v13 + v11 + 8, v13 + v11 + 24, v12);
        }
      }
      break;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
