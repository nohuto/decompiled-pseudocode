/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B75B4
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800945D0 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180094A30 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800C2F9C (--1CFlickVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800C31A0 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800BAAF8 (-PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        bool a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  __int64 i; // r11
  bool v9; // dl
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v5 = a1 + 184;
  v7 = *(unsigned int *)(a1 + 208);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)v5 + 24 * i) == a2 )
    {
      if ( (int)i >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)v5 + 24 * i + 8) = *a4;
        *(_DWORD *)(*(_QWORD *)v5 + 24 * i + 4) = a3;
        v9 = a5;
        goto LABEL_15;
      }
      break;
    }
  }
  if ( !a5 )
    return 0LL;
  v17 = 0LL;
  v10 = v7 + 1;
  v11 = *a4;
  *(_QWORD *)&v16 = __PAIR64__(a3, a2);
  *((_QWORD *)&v16 + 1) = v11;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
  {
    if ( v10 > *(_DWORD *)(v5 + 20) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(v5, 24, 1, &v16);
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xBEu, 0LL);
    }
    else
    {
      v12 = *(_QWORD *)v5;
      v13 = 3 * v7;
      *(_OWORD *)(v12 + 8 * v13) = v16;
      *(_QWORD *)(v12 + 8 * v13 + 16) = v17;
      *(_DWORD *)(v5 + 24) = v10;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  v9 = a5;
LABEL_15:
  CDesktopManager::PostFlickFeedback(CDesktopManager::s_pDesktopManagerInstance, v9, a2);
  return 0LL;
}
