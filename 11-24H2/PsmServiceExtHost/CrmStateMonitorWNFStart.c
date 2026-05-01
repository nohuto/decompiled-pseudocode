/*
 * XREFs of CrmStateMonitorWNFStart @ 0x18006E65C
 * Callers:
 *     CrmStateMonitorStart @ 0x18006F1D8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFStart(int *a1, __int64 a2)
{
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  void *v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  a1[14] = 0;
  *((_QWORD *)a1 + 5) = a1 + 14;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  memcpy_0(v6, v5, v4);
  if ( (unsigned int)*a1 > 0x22 || (v7 = CrmStateMonitorSebCallback, v8 = 0x54000E000LL, !_bittest64(&v8, *a1)) )
    v7 = CrmStateMonitorWNFCallback;
  v9 = RtlSubscribeWnfStateChangeNotification(&v12, a2, 0LL, v7, a1, 0LL, 0, 0);
  if ( v9 < 0 )
  {
    v10 = v12;
  }
  else
  {
    v10 = 0LL;
    *((_QWORD *)a1 + 11) = v12;
    v9 = 0;
    v12 = 0LL;
  }
  if ( v10 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v9;
}
