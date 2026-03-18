/*
 * XREFs of KeInitAmd64SpecificState @ 0x140BDEB80
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  _mm_lfence();
  if ( *(_QWORD *)&HvlpVsmVtlCallVa || !(_DWORD)InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
