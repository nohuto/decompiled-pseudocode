/*
 * XREFs of ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140021E60
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004AE00 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall AERTLockModuleSection(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v6; // [rsp+40h] [rbp-28h]

  v3 = RtlLockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  if ( v3 == -1073741663 )
  {
    v3 = IncreaseProcessWorkingSet(0x100000uLL);
    if ( v3 >= 0 )
      v3 = RtlLockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v2, v1, v4, 10, 0, 0, 0, 0, v6, 0, v3);
  return v3 | 0x10000000u;
}
