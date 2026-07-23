/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140A200A0
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140A2006C (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  do
  {
    v5 = qword_140F0BE80;
    if ( qword_140F0BE80 + 50000000 > v3 )
      break;
    PopBatteryQueueWork(0x20u);
    v2 = ExBlockOnAddressPushLock(&qword_140F0BE88, &qword_140F0BE80, &v5, 8LL, a1);
  }
  while ( v2 != 258 );
  return v2;
}
