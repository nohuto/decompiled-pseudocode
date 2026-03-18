/*
 * XREFs of KiConfigureAllSchedulingInformation @ 0x140C27EA8
 * Callers:
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405B6964 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiConfigureNodeSchedulingInformation @ 0x1405B6A2C (KiConfigureNodeSchedulingInformation.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiConfigureSchedulingInformation @ 0x140B560D8 (KiConfigureSchedulingInformation.c)
 */

__int64 __fastcall KiConfigureAllSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int j; // ebx
  unsigned __int16 k; // bx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 i; // [rsp+38h] [rbp-20h]

  v6 = 0LL;
  v2 = 0;
  v7 = 0LL;
  for ( i = 0LL; v2 < (unsigned int)KeNumberProcessors_0; ++v2 )
    KiConfigureSchedulingInformation(KiProcessorBlock[v2]);
  for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    KiFinalizeCoreControlBlockAssignment(KiProcessorBlock[j], a2);
  for ( k = 0; k < (unsigned __int16)KeNumberNodes; ++k )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v7, KeNodeBlock[k]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v7, &v6) )
      KiConfigureNodeSchedulingInformation(v6);
  }
  return KiConfigureCooperativeIdleSearchTargets();
}
