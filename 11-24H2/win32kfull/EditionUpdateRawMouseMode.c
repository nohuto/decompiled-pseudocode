/*
 * XREFs of EditionUpdateRawMouseMode @ 0x14002BEB0
 * Callers:
 *     LockCaptureWindow @ 0x14002BE08 (LockCaptureWindow.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     TransferWakeBit @ 0x14012E5F8 (TransferWakeBit.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401305C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1401AEBF0 (DestroyThreadHidObjects.c)
 *     UnlockCaptureWindow @ 0x1401B8730 (UnlockCaptureWindow.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x140276480 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax

  result = W32GetUserSessionState();
  if ( a1 == *(_QWORD *)(result + 18944) )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 96);
    if ( !v4
      || (v5 = *(_QWORD *)(v4 + 464)) == 0
      || !*(_QWORD *)(v5 + 832)
      || (v3 ? (v7 = *(_QWORD *)(v3 + 16)) : (v7 = *(_QWORD *)(a1 + 96)),
          v6 = 1,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 464) + 832LL) + 100LL) & 1) == 0) )
    {
      v6 = 0;
    }
    result = W32GetUserSessionState();
    *(_DWORD *)(result + 16316) = v6;
  }
  return result;
}
