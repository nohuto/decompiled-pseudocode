/*
 * XREFs of EtwpLogMemInfo @ 0x140261FE0
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140261D70 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1407B1080 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2)
{
  char v5; // [rsp+40h] [rbp-C0h] BYREF
  GUID v6; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v8; // [rsp+110h] [rbp+10h] BYREF
  int v9; // [rsp+118h] [rbp+18h]
  int v10; // [rsp+11Ch] [rbp+1Ch]
  __int64 v11; // [rsp+120h] [rbp+20h]
  int v12; // [rsp+128h] [rbp+28h]
  int v13; // [rsp+12Ch] [rbp+2Ch]

  v6.Data1 = 0;
  memset_0(&v6.Data4[4], 0, 0xB0uLL);
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(0LL, (__int64)&v6);
  v10 = 0;
  v13 = 0;
  v8 = &v6.Data4[4];
  v9 = 176;
  v11 = a2;
  v12 = 32;
  if ( a1 )
    return EtwpLogKernelEvent((unsigned int)&v8, *(_QWORD *)(a1 + 1360), *(_DWORD *)a1, 2, 624, 5249027);
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x80000) != 0 )
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  return EtwTraceKernelEvent((unsigned int)&v8, 2, 537395200, 624, 5249027);
}
