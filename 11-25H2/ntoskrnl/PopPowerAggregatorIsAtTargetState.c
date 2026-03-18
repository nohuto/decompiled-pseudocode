/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x1409655F4
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  switch ( (_DWORD)xmmword_140F08290 )
  {
    case 0:
      return (xmmword_140F082B8 & 0xFFFFFFFD) == 0;
    case 1:
      if ( (_DWORD)xmmword_140F082B8 == 1 )
        return *((_QWORD *)&xmmword_140F082B8 + 1) == (_QWORD)xmmword_140F082A0;
      break;
    case 2:
      return (xmmword_140F082B8 & 0xFFFFFFFD) == 0;
    case 3:
      return (_DWORD)xmmword_140F082B8 == 5;
  }
  return v0;
}
