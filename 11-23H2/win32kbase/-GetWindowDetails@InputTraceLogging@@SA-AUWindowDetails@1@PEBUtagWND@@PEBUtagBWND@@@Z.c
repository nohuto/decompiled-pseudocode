/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E45D2
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1C01CC5DC (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C01D2B68 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01D7234 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95B4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x1C01F6754 (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x1C01FAB64 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01FAF30 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1C01FB110 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  const WCHAR *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  unsigned int v18; // eax
  PETHREAD *v19; // rcx

  v3 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 104LL);
    if ( *(_DWORD *)(v8 + 184) )
      v9 = *(const WCHAR **)(a2 + 184);
    else
      v9 = &word_1C0248490;
    v10 = *(_QWORD *)(v7 + 424);
    v11 = *(struct _KTHREAD **)v7;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10 + 1008;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v10 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v11);
    v13 = *(PETHREAD **)(a2 + 264);
    *(_DWORD *)(a1 + 28) = ThreadId;
    if ( v13 )
      v3 = (unsigned int)PsGetThreadId(*v13);
    v14 = *(_DWORD *)(a2 + 260);
LABEL_12:
    *(_DWORD *)(a1 + 36) = v14;
    *(_DWORD *)(a1 + 32) = v3;
    return a1;
  }
  if ( a3 )
  {
    v15 = *(_QWORD *)(a3 + 16);
    v16 = *(_QWORD *)(v15 + 424);
    v17 = *(struct _KTHREAD **)v15;
    *(_QWORD *)(a1 + 16) = v16 + 1008;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v16 + 56);
    v18 = (unsigned int)PsGetThreadId(v17);
    v19 = *(PETHREAD **)(a3 + 64);
    *(_DWORD *)(a1 + 28) = v18;
    if ( v19 )
      v3 = (unsigned int)PsGetThreadId(*v19);
    v14 = *(_DWORD *)(a3 + 72);
    goto LABEL_12;
  }
  return a1;
}
