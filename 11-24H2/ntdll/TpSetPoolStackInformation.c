/*
 * XREFs of TpSetPoolStackInformation @ 0x1800EE120
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800EDFB0 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}
