/*
 * XREFs of ObInitializeFastReference @ 0x140A3134C
 * Callers:
 *     PspLocateSystemDll @ 0x140771E70 (PspLocateSystemDll.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140A315A4 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140C39CC4 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140419440 (ObpIncrPointerCountEx.c)
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
