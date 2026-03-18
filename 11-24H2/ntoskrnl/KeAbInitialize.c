/*
 * XREFs of KeAbInitialize @ 0x1405C4078
 * Callers:
 *     KiInitSystem @ 0x140C28258 (KiInitSystem.c)
 * Callees:
 *     Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledDeviceUsageNoInline @ 0x1405C3B88 (Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 KeAbInitialize()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  int v2; // ebx
  __int64 result; // rax

  v0 = &KiAbTreeArray;
  v1 = 1024LL;
  v2 = 0;
  do
  {
    *v0 = 0LL;
    v0[1] = 0LL;
    v0[2] = 0LL;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  result = Feature_Servicing_InlinePreWakeupPriorityBoosting__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v2) = (_DWORD)result != 0;
  KiAbpInlinePreWakeupPriorityBoosting = v2;
  return result;
}
