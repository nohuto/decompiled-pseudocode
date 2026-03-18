/*
 * XREFs of IopProcessIoRingEntry @ 0x1406F7A58
 * Callers:
 *     NtSubmitIoRing @ 0x1404C3910 (NtSubmitIoRing.c)
 * Callees:
 *     IopIoRingSetupCompletionWait @ 0x1404C3BD0 (IopIoRingSetupCompletionWait.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405978CC (IopIoRingWaitForCompletionEvent.c)
 *     IopIoRingDispatchComplete @ 0x1406F7B84 (IopIoRingDispatchComplete.c)
 *     IopIoRingDispatchCancel @ 0x14071659C (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x14071665C (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x14071673C (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140716848 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140716C08 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingDispatchWrite @ 0x140716E78 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x140717020 (IopIoRingDispatchWriteGather.c)
 *     IopIoRingDispatchRead @ 0x140A94B48 (IopIoRingDispatchRead.c)
 */

__int64 __fastcall IopProcessIoRingEntry(_QWORD *a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v6; // r8
  _DWORD *v7; // rdx
  _QWORD *v8; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  if ( (a2[1] & 1) != 0 )
  {
    v10 = 0;
    IopIoRingSetupCompletionWait((__int64)a1, 0, 0xFFFFFFFF, 0, &v10);
    if ( v10 )
    {
      IopIoRingWaitForCompletionEvent((__int64)a1, 0, 0, 0LL);
      *a3 = 1;
    }
  }
  ++a1[14];
  if ( (a2[1] & 0xFFFFFFFE) != 0 && (unsigned int)(*a2 - 2) > 1 )
  {
    v6 = 3225812993LL;
LABEL_26:
    v7 = a2;
    v8 = a1;
    return IopIoRingDispatchComplete(v8, v7, v6);
  }
  if ( !*a2 )
  {
    v6 = 0LL;
    goto LABEL_26;
  }
  v7 = a2;
  switch ( *a2 )
  {
    case 1:
      return IopIoRingDispatchRead(a1);
    case 2:
      return IopIoRingDispatchRegisterFiles(a1, a2);
    case 3:
      return IopIoRingDispatchRegisterBuffers(a1, a2);
    case 4:
      return IopIoRingDispatchCancel(a1, a2);
    case 5:
      return IopIoRingDispatchWrite((__int64)a1);
    case 6:
      return IopIoRingDispatchFlush(a1);
    case 7:
      return IopIoRingDispatchReadScatter(a1);
  }
  v8 = a1;
  if ( *a2 == 8 )
    return IopIoRingDispatchWriteGather(a1);
  v6 = 3221225474LL;
  return IopIoRingDispatchComplete(v8, v7, v6);
}
