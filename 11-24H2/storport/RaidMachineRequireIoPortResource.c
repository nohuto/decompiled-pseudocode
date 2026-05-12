/*
 * XREFs of RaidMachineRequireIoPortResource @ 0x1400BE1B8
 * Callers:
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140196B4C (NvmeAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     <none>
 */

__int64 RaidMachineRequireIoPortResource()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  EmClientQueryRuleState(&GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE, &v1);
  result = (unsigned __int8)g_OSisClient;
  if ( v1 == 2 )
    return 1LL;
  return result;
}
