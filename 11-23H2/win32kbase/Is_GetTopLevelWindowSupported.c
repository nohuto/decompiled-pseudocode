/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C000E2B0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0053680 (EtwTraceInputProcessDelay.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0089570 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0295EA8 )
    return qword_1C0295EA8();
  else
    return 3221225659LL;
}
