/*
 * XREFs of EtwTraceWorkingSetSwap @ 0x140A03234
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407FB880 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140A03180 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetSwap(PEPROCESS Process, char a2, __int64 a3)
{
  BOOLEAN result; // al
  ULONG v7; // r9d
  __int64 *v8; // rdx
  unsigned int ProcessId; // [rsp+38h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+60h] [rbp-1h]
  int v13; // [rsp+64h] [rbp+3h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  int v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+74h] [rbp+13h]
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  __int64 v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  __int64 v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v13 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    v7 = 2;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v12 = 4;
    if ( (a2 & 2) != 0 )
    {
      v11 = a3;
      v8 = KERNEL_MEM_EVENT_WS_INSWAP_START;
      if ( (a2 & 1) == 0 )
        v8 = (__int64 *)&KERNEL_MEM_EVENT_WS_OUTSWAP_START;
    }
    else
    {
      v11 = a3 + 32;
      if ( (a2 & 1) != 0 )
      {
        v8 = KERNEL_MEM_EVENT_WS_INSWAP_STOP;
      }
      else
      {
        v16 = 0;
        v19 = 0;
        v8 = KERNEL_MEM_EVENT_WS_OUTSWAP_STOP;
        v22 = 0;
        v25 = 0;
        v17 = a3 + 8;
        v20 = a3 + 16;
        v23 = a3 + 24;
        v7 = 6;
        v14 = a3;
        v15 = 8;
        v18 = 8;
        v21 = 8;
        v24 = 8;
      }
    }
    return EtwWrite(EtwpMemoryProvRegHandle, (PCEVENT_DESCRIPTOR)v8, 0LL, v7, &UserData);
  }
  return result;
}
