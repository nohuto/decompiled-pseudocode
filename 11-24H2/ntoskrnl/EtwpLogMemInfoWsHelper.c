/*
 * XREFs of EtwpLogMemInfoWsHelper @ 0x140861ADC
 * Callers:
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpLogMemInfoWsHelper(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v7 = 0;
  v5 = a2 + 1;
  v2 = 68 * *a2;
  UserData.Ptr = (ULONGLONG)a2;
  UserData.Size = 4;
  v6 = v2;
  if ( a1 )
    return EtwpLogKernelEvent((__int64)&UserData, *(_QWORD *)(a1 + 1360), *(_DWORD *)a1, 2u, 637, 0x501804u);
  EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 637, 5249028);
  result = EtwpHostSiloState + 4812;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x800000) != 0 )
    return EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
  return result;
}
