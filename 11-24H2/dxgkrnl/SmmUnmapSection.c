/*
 * XREFs of SmmUnmapSection @ 0x14028775C
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14001F350 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall SmmUnmapSection(PVOID a1)
{
  __int64 CurrentProcess; // rax
  NTSTATUS result; // eax

  if ( a1 > MmHighestUserAddress )
  {
    result = MmUnmapViewInSystemSpace(a1);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(a1);
    result = MmUnmapViewOfSection(CurrentProcess, a1);
  }
  if ( result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 184;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146LL,
             0xFFFFFFFFLL,
             L"(((NTSTATUS)(Status)) >= 0)",
             184LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
