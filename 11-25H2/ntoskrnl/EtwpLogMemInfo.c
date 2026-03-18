/*
 * XREFs of EtwpLogMemInfo @ 0x1403BDEF0
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1403BDC30 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1407A1860 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     MmQueryMemoryListInformation @ 0x1403BE2A8 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

int __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2)
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
    return EtwpLogKernelEvent((struct _KTHREAD *)&v8, *(_QWORD *)(a1 + 1360), *(_DWORD *)a1, 2u, 0x270u, 0x501803u);
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x80000) != 0 )
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  return EtwTraceKernelEvent((int)&v8, 2, 0x20080000u, 624, 5249027);
}
