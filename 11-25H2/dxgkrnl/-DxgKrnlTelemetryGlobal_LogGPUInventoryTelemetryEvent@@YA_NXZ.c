/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1403E193C
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403E1900 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent(void)
{
  if ( (unsigned int)++dword_14015D9C4 <= 4 )
    return 1;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_14015D9C8) > 0xC92A69C000LL )
  {
    qword_14015D9C8 = MEMORY[0xFFFFF78000000014];
    return 1;
  }
  return 0;
}
