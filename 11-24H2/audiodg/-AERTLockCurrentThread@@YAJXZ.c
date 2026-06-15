/*
 * XREFs of ?AERTLockCurrentThread@@YAJXZ @ 0x140021644
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004A960 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

__int64 AERTLockCurrentThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-28h]

  v2 = RtlLockCurrentThread();
  if ( v2 == -1073741663 && (int)IncreaseProcessWorkingSet(0x100000uLL) >= 0 )
    v2 = RtlLockCurrentThread();
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v1, v0, v3, 12, 0, 0, 0, 0, v5, 0, v2);
  return v2 | 0x10000000u;
}
