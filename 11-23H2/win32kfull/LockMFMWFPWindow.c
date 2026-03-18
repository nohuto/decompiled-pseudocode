/*
 * XREFs of LockMFMWFPWindow @ 0x1C0215EAC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023134C (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0215E88 (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0216164 (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  int v4; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    LOBYTE(v4) = IsMFMWFPWindow(a2);
    if ( v4 )
    {
      v5[0] = a1;
      v5[1] = a2;
      HMAssignmentLock(v5, 0LL);
    }
    else
    {
      *a1 = a2;
    }
  }
}
