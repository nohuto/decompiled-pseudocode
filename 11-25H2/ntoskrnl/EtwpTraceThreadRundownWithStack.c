/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140644A5C
 * Callers:
 *     EtwpThreadEnumCallback @ 0x1408BD820 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x1403044A0 (EtwpTraceThreadRundown.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140644BC8 (Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall EtwpTraceThreadRundownWithStack(__int64 a1, __int64 a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v5; // r8d
  NTSTATUS result; // eax
  __int128 Object; // [rsp+48h] [rbp-29h] BYREF
  char *v8; // [rsp+58h] [rbp-19h]
  _BYTE v9[96]; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp+77h] BYREF

  memset_0(v9, 0, 0x58uLL);
  v8 = 0LL;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_EtwThreadStackRundownAvoidTimeout__private_IsEnabledDeviceUsageNoInline();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return EtwpTraceThreadRundown(a1, a2);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( (*(_BYTE *)(a1 + 1448) & 4) != 0 || *(_BYTE *)(a2 + 67) )
      return EtwpTraceThreadRundown(a1, a2);
    v5 = 3;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 67) )
      return EtwpTraceThreadRundown(a1, a2);
    v5 = 0;
  }
  v8 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  DWORD1(Object) = 0;
  BYTE2(Object) = 6;
  LOWORD(Object) = 1;
  KeInitializeApc((__int64)v9, a1, v5, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( (unsigned __int8)KeInsertQueueApc((__int64)v9, (__int64)&Object, a2, 0) )
  {
    Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
    result = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout);
    if ( result != 258 )
      return result;
    if ( !KeRemoveQueueApc((__int64)v9) )
      return KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
  }
  return EtwpTraceThreadRundown(a1, a2);
}
