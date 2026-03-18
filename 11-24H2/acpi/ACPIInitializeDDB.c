/*
 * XREFs of ACPIInitializeDDB @ 0x1400C72F4
 * Callers:
 *     ACPIInitializeDDBs @ 0x1400C4B28 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1400C8FFC (ACPILoadTableCheckSum.c)
 */

__int64 __fastcall ACPIInitializeDDB(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( !(unsigned __int8)ACPILoadTableCheckSum(v1, *(unsigned int *)(v1 + 4)) )
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v1, *(unsigned int *)(v1 + 32));
  v3 = AMLILoadDDB(v1, &v6);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = v3;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x25u,
        (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
        v5);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v1, *(unsigned int *)(v1 + 32));
  }
  *(_QWORD *)(a1 + 16) = v6;
  return 0LL;
}
