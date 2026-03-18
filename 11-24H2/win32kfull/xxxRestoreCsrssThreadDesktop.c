/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x140107100
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     SendMsgCleanup @ 0x140107600 (SendMsgCleanup.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, __int64 a2)
{
  char v2; // si
  struct tagTHREADINFO *v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // edi
  void *v7; // rsi
  unsigned __int64 v9; // [rsp+20h] [rbp-48h]
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  memset(v10, 0, sizeof(v10));
  v5 = *((_QWORD *)v4 + 62);
  if ( *a1 == v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( 1 )
      {
        LODWORD(v9) = 3;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)v10, v9, 0) )
          break;
        xxxDispatchMessage((struct tagMSG *)v10);
      }
      if ( (v2 & 1) != 0 )
        SendMsgCleanup(v4);
    }
    v6 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v7 = (void *)a1[1];
  if ( v7 )
  {
    SetHandleFlag(a1[1], 1LL, 0LL);
    ObCloseHandle(v7, 0);
    a1[1] = 0LL;
  }
  return v6;
}
