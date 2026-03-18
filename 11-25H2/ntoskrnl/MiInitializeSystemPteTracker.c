/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140C4AF08
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  if ( ((unsigned __int8)&stru_140E35AC0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = &unk_140E385B0;
  stru_140E35AC0 = 0LL;
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
