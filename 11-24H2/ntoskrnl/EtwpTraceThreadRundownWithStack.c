/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140650A6C
 * Callers:
 *     EtwpThreadEnumCallback @ 0x14094A5E0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     EtwpTraceThreadRundown @ 0x140433490 (EtwpTraceThreadRundown.c)
 *     Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledDeviceUsageNoInline @ 0x140650BC8 (Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(__int64 a1, __int64 a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  NTSTATUS result; // eax
  __int128 Object; // [rsp+40h] [rbp-29h] BYREF
  char *v7; // [rsp+50h] [rbp-19h]
  _BYTE v8[96]; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+67h] BYREF

  memset_0(v8, 0, 0x58uLL);
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v7 = 0LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown(a1, a2);
  if ( (*(_BYTE *)(a1 + 1448) & 4) != 0 )
    return EtwpTraceThreadRundown(a1, a2);
  if ( *(_BYTE *)(a2 + 67) )
    return EtwpTraceThreadRundown(a1, a2);
  DWORD1(Object) = 0;
  v7 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledDeviceUsageNoInline();
  KeInitializeApc(
    (__int64)v8,
    a1,
    IsEnabledDeviceUsageNoInline == 0 ? 3 : 0,
    (__int64)EtwpThreadRundownApc,
    0LL,
    0LL,
    0,
    0LL);
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v8, (__int64)&Object, a2, 0) )
    return EtwpTraceThreadRundown(a1, a2);
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
  if ( result != 258 )
    return result;
  if ( KeRemoveQueueApc((__int64)v8) )
    return EtwpTraceThreadRundown(a1, a2);
  else
    return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
}
