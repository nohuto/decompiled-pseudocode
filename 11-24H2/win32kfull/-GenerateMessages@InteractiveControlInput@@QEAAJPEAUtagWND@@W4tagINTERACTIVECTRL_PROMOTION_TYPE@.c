/*
 * XREFs of ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14021352C
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1402171F8 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402EBDC0 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EC5E4 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012A9E8 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1402135F4 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1402EC9F8 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlInput::GenerateMessages(__int64 a1, struct tagWND *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r9
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+48h] [rbp-20h]

  v4 = 0;
  v9 = 0LL;
  if ( a2 )
    v9 = *(_QWORD *)a2;
  v10 = *(_OWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 16) = v9;
  v11 = *(_QWORD *)(a1 + 68);
  v12 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 48) = a3;
  v13 = *(_QWORD **)(a1 + 40);
  v17 = v10;
  v18 = v11;
  v19 = v12;
  HandleIntObjUsageTelemetry(*v13, a2, &v17);
  if ( !a3 || (unsigned int)(a3 - 1) > 1 )
    return (unsigned int)InteractiveControlInput::GenerateCtrlInputMessages((InteractiveControlInput *)a1, a2, a4);
  if ( (a4 & 0x80u) != 0 )
    return (unsigned int)InteractiveControlDefaultScroller::GenerateMessages(
                           (InteractiveControlDefaultScroller *)(*(_QWORD *)(a1 + 40) + 264LL),
                           a1 + 52,
                           *(unsigned int *)(a1 + 48),
                           v14);
  return v4;
}
