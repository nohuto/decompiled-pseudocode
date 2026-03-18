/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1403D932C
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403D92F0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent(void)
{
  if ( (unsigned int)++dword_1401609CC <= 4 )
    return 1;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_1401609D0) > 0xC92A69C000LL )
  {
    qword_1401609D0 = MEMORY[0xFFFFF78000000014];
    return 1;
  }
  return 0;
}
