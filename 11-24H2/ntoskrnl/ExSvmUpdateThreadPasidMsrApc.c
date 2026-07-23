/*
 * XREFs of ExSvmUpdateThreadPasidMsrApc @ 0x1407C0F10
 * Callers:
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 * Callees:
 *     ExBuildPasidMsrForThread @ 0x1403FFF2C (ExBuildPasidMsrForThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExSvmUpdateThreadPasidMsrApc(__int64 a1)
{
  __int64 v1; // r9

  __writemsr(0xD93u, ExBuildPasidMsrForThread(*(_QWORD *)(a1 + 88)));
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v1 + 96), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*(PVOID *)(v1 + 96), 0);
}
