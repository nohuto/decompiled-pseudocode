/*
 * XREFs of ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402A4B50
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1401F57C0 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x140269CA0 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1402A4390 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A4D94 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 */

__int64 __fastcall Edgy::_OnStateTransition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  int v5; // esi
  struct tagEDGY_DATA *v7; // rcx
  HWND v8; // r8
  __int64 v9; // rdx
  Edgy *v10; // rcx

  v4 = *(_QWORD *)(a1 + 224);
  v5 = a2;
  if ( *(_DWORD *)(a1 + 16) == 1 )
    EtwTraceEdgyDetectionStop(*(unsigned int *)(a3 + 8));
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      EtwTraceEdgyDetectionStart();
      v7 = *(struct tagEDGY_DATA **)a3;
      *(_QWORD *)(a1 + 184) = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(a1 + 200) = *(_DWORD *)(a3 + 48);
      *(_QWORD *)(a1 + 176) = *((_QWORD *)v7 + 8);
      *(_QWORD *)(a1 + 224) = v7;
    }
    else if ( v5 == 2 )
    {
      ShellHangDetection::Execute((ShellHangDetection *)a1, a2);
      v9 = *(_QWORD *)(a3 + 16);
      v10 = *(Edgy **)a3;
      if ( *(_DWORD *)(a1 + 16) == 1 )
      {
        v9 = *(_QWORD *)(a1 + 184);
        v10 = *(Edgy **)(a1 + 224);
      }
      Edgy::_AdjustFrameHwnd(v10, *(void *const *)(v9 + 8), v8);
    }
  }
  else
  {
    Edgy::_StoreLastUpDataAndPost((Edgy *)a1, *(struct tagEDGY_DATA **)a3, (void *const)a3);
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 208) = 0LL;
    *(_DWORD *)(a1 + 216) = 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = v5;
  return v4;
}
