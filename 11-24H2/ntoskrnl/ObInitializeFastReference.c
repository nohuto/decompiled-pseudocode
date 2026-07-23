/*
 * XREFs of ObInitializeFastReference @ 0x140A4A4A0
 * Callers:
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     SeAssignPrimaryToken @ 0x140A4A3CC (SeAssignPrimaryToken.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     SepInitializationPhase0 @ 0x140C3BE1C (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x1404091E0 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
