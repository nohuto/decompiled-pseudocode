/*
 * XREFs of ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140110A8C
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x14010F850 (EditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x140065490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x140110B2C (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 */

char __fastcall SetCompositionInputWindowUIOwner(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // bl
  bool v4; // zf
  __int64 v6; // rdx
  CInputQueueProp *v7; // rbp
  const struct tagWND *TopLevelWindow; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rdi
  CInputQueueProp *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = (*((_DWORD *)a1 + 95) & 0x40000000) == 0;
  v12 = 0LL;
  if ( !v4 )
  {
    if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v12) )
    {
      v7 = v12;
      if ( *((_DWORD *)v12 + 8) )
      {
        if ( (unsigned int)CoreWindowProp::IsComponent(a1, v6) )
        {
          a2 = a1;
        }
        else
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
          v10 = TopLevelWindow;
          if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow, v9) )
            a2 = v10;
        }
        CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v7, a2);
        return 1;
      }
    }
  }
  return v2;
}
