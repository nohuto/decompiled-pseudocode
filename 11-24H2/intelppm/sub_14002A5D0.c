/*
 * XREFs of sub_14002A5D0 @ 0x14002A5D0
 * Callers:
 *     sub_14002A400 @ 0x14002A400 (sub_14002A400.c)
 * Callees:
 *     sub_140006A38 @ 0x140006A38 (sub_140006A38.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

_DWORD *sub_14002A5D0()
{
  _DWORD *result; // rax
  int v1; // r9d
  KDPC *p_Dpc; // r8
  __int64 DpcData_high; // r10
  unsigned int *p_ActiveThreadCount; // r9
  unsigned __int64 v5; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  result = sub_140006A38();
  if ( !v1 )
  {
    sub_140010270(0xAu, v6);
    DeviceObject.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)((1LL << (v6[3] >> 5)) - 1);
    if ( HIDWORD(DeviceObject.Dpc.DpcData) )
    {
      p_Dpc = &DeviceObject.Dpc;
      DpcData_high = HIDWORD(DeviceObject.Dpc.DpcData);
      p_ActiveThreadCount = &DeviceObject.ActiveThreadCount;
      do
      {
        v5 = __readmsr(*p_ActiveThreadCount++);
        *(_QWORD *)&p_Dpc->TargetInfoAsUlong = v5;
        p_Dpc = (KDPC *)((char *)p_Dpc + 8);
        --DpcData_high;
      }
      while ( DpcData_high );
    }
    *(_DWORD *)&DeviceObject.DeviceQueue.Type |= 0x40u;
    qword_140019938[0] = (__int64)sub_140007210;
    result = sub_140006AB0;
    qword_140019930[0] = (__int64)sub_140006AB0;
  }
  return result;
}
