/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1804624F4
 * Callers:
 *     _lambda_8d7ff6ea4a024ac9f0217c619eab51b9_::operator() @ 0x1804621D4 (_lambda_8d7ff6ea4a024ac9f0217c619eab51b9_--operator().c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1804623DC (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 * Callees:
 *     _lambda_938783a7a9d4cf23ff264fef3f831840_::operator() @ 0x18046229C (_lambda_938783a7a9d4cf23ff264fef3f831840_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD *v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_938783a7a9d4cf23ff264fef3f831840_::operator()(v3);
  return v4;
}
