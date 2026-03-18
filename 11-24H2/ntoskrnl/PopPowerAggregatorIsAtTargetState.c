/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x1409BD300
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  switch ( (_DWORD)xmmword_140F08910 )
  {
    case 0:
      return (xmmword_140F08938 & 0xFFFFFFFD) == 0;
    case 1:
      if ( (_DWORD)xmmword_140F08938 == 1 )
        return *((_QWORD *)&xmmword_140F08938 + 1) == (_QWORD)xmmword_140F08920;
      break;
    case 2:
      return (xmmword_140F08938 & 0xFFFFFFFD) == 0;
    case 3:
      return (_DWORD)xmmword_140F08938 == 5;
  }
  return v0;
}
