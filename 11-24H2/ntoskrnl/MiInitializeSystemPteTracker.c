/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140C5C288
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  if ( ((unsigned __int8)&stru_140E35D00 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = &unk_140E387F0;
  stru_140E35D00 = 0LL;
  v1 = 16LL;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
