/*
 * XREFs of VfIrpTrackingPluginEntry @ 0x1406A5140
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     VfDdiInit @ 0x140B86374 (VfDdiInit.c)
 *     VfIrpLogInit @ 0x140B9D63C (VfIrpLogInit.c)
 *     VfIsRuleClassEnabled @ 0x140BA9550 (VfIsRuleClassEnabled.c)
 */

__int64 VfIrpTrackingPluginEntry()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  if ( !(unsigned __int8)VfIsRuleClassEnabled(4LL) )
    return 3221225659LL;
  if ( !VfIrpTrackingInitialized )
  {
    result = DifRegisterPlugin(0LL, 0, 0xAu, 0LL);
    v0 = result;
    if ( (int)result < 0 )
      return result;
    VfIrpLogInit();
    VfDdiInit();
  }
  VfIrpTrackingInitialized = 1;
  return v0;
}
