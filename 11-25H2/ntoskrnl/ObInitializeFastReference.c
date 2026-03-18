/*
 * XREFs of ObInitializeFastReference @ 0x140A0CFE4
 * Callers:
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140A0E1E4 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140C289F4 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x14041D1B0 (ObpIncrPointerCountEx.c)
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
