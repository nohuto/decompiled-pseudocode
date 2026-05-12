/*
 * XREFs of NvmeControllerStorMQInitializeAdminQueues @ 0x1400F5234
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerStorMQInitializeAdminQueues(__int64 a1)
{
  NvmeControllerSetStorMQProperty(a1, 0x30u, 8LL, 0);
  NvmeControllerSetStorMQProperty(a1, 0x80000000, 40LL, 1);
  NvmeControllerSetStorMQProperty(a1, 0x28u, 8LL, 0);
  NvmeControllerSetStorMQProperty(a1, 0x80000000, 40LL, 1);
  NvmeControllerSetStorMQProperty(a1, 0x80000001, 40LL, 1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 712) + 40LL) )
    NvmeControllerSetStorMQProperty(a1, 0x80000003, 40LL, 1);
  return 0LL;
}
