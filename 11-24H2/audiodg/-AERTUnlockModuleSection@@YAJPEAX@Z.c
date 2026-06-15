/*
 * XREFs of ?AERTUnlockModuleSection@@YAJPEAX@Z @ 0x14001DE40
 * Callers:
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x14001DAA0 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTUnlockModuleSection(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v6; // [rsp+40h] [rbp-28h]

  v3 = RtlUnlockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v2, v1, v4, 11, 0, 0, 0, 0, v6, 0, v3);
  return v3 | 0x10000000u;
}
