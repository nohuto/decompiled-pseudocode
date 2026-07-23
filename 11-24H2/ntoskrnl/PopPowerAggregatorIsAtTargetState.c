/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x1409A3950
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  switch ( (_DWORD)xmmword_140F08C70 )
  {
    case 0:
      return (xmmword_140F08C98 & 0xFFFFFFFD) == 0;
    case 1:
      if ( (_DWORD)xmmword_140F08C98 == 1 )
        return *((_QWORD *)&xmmword_140F08C98 + 1) == (_QWORD)xmmword_140F08C80;
      break;
    case 2:
      return (xmmword_140F08C98 & 0xFFFFFFFD) == 0;
    case 3:
      return (_DWORD)xmmword_140F08C98 == 5;
  }
  return v0;
}
