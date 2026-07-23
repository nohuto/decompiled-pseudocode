/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x14064F0A4
 * Callers:
 *     EtwpThreadEnumCallback @ 0x1408EEB50 (EtwpThreadEnumCallback.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     EtwpTraceThreadRundown @ 0x1404ECB50 (EtwpTraceThreadRundown.c)
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x14064F2D0 (Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(PKTHREAD Thread, __int64 a2)
{
  KPRIORITY PriorityThread; // esi
  KPRIORITY v5; // eax
  NTSTATUS result; // eax
  unsigned int v7; // eax
  __int128 Object; // [rsp+40h] [rbp-69h] BYREF
  char *v9; // [rsp+50h] [rbp-59h]
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v11[96]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v12; // [rsp+C0h] [rbp+17h] BYREF
  _QWORD v13[2]; // [rsp+D0h] [rbp+27h] BYREF

  memset_0(v11, 0, 0x58uLL);
  v9 = 0LL;
  Object = 0LL;
  Timeout.QuadPart = 0LL;
  PriorityThread = 0;
  v12 = 0LL;
  if ( Thread != KeGetCurrentThread() && ((__int64)Thread[1].Queue & 4) == 0 && !*(_BYTE *)(a2 + 67) )
  {
    v9 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    KeInitializeApc((__int64)v11, (__int64)Thread, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
    if ( (unsigned int)Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a2 + 72) = 0;
      *(_BYTE *)(a2 + 76) = 0;
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      v5 = KeQueryPriorityThread(Thread);
      *(_DWORD *)(a2 + 72) = v5;
      if ( v5 < PriorityThread )
      {
        *(_BYTE *)(a2 + 76) = 1;
        *(_DWORD *)(a2 + 72) = KeSetPriorityThread(Thread, PriorityThread);
      }
    }
    if ( (unsigned __int8)KeInsertQueueApc((__int64)v11, (__int64)&Object, a2, 0) )
    {
      Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
      result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
      if ( result != 258 )
        return result;
      if ( !KeRemoveQueueApc((__int64)v11) )
        return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      if ( (unsigned int)Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *(_BYTE *)(a2 + 76) )
          KeSetPriorityThread(Thread, *(_DWORD *)(a2 + 72));
        LODWORD(v12) = Thread[1].CurrentRunTime;
        DWORD1(v12) = Thread[1].CycleTime;
        v7 = *(_DWORD *)(a2 + 72);
        *((_QWORD *)&v12 + 1) = v7;
        if ( *(_BYTE *)(a2 + 76) )
          HIDWORD(v12) = PriorityThread - v7;
        v13[1] = 16LL;
        v13[0] = &v12;
        EtwTraceKernelEvent((int)v13, 1, 2u, 1384, 256);
      }
    }
  }
  return EtwpTraceThreadRundown((__int64)Thread, a2);
}
