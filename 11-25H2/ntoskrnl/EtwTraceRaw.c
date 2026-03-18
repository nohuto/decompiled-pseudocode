/*
 * XREFs of EtwTraceRaw @ 0x14064325C
 * Callers:
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140257A00 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14030BE80 (EtwpCloseLogger.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseTraceBuffer @ 0x1403F86A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140440370 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404AB500 (EtwpInvokeEventCallback.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r13
  int ReserveTraceBufferStatus; // ebx
  unsigned int v7; // r12d
  struct _LIST_ENTRY *Flink; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  signed __int64 v13[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  char v16; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]
  char v18; // [rsp+B8h] [rbp+20h]

  v18 = a4;
  Src = a2;
  v5 = a3;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  ReserveTraceBufferStatus = 0;
  v13[0] = 0LL;
  v7 = a1;
  if ( a4 )
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  else
    Flink = (struct _LIST_ENTRY *)EtwpHostSiloState;
  if ( v7 < LODWORD(Flink[1].Flink) )
  {
    v9 = EtwpOpenLogger(v7, (__int64)Flink, a4, &v16);
    v10 = v9;
    v13[1] = v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_28:
        EtwpCloseLogger(v7, (__int64)Flink, v16);
        return (unsigned int)ReserveTraceBufferStatus;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_28;
        if ( (_DWORD)v5 && ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( (*(_DWORD *)(v9 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_28;
      }
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, v5, (unsigned __int64 *)&v14, v13, 0);
      if ( v11 )
      {
        memmove(v11, Src, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, (__int64)&v14);
        }
        if ( *(_QWORD *)(v10 + 1552) )
          EtwpInvokeEventCallback(v10, (__int64 *)&v14);
        EtwpReleaseTraceBuffer((signed __int64 *)&v14);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, v5);
      }
      goto LABEL_28;
    }
  }
  return (unsigned int)-1073741816;
}
