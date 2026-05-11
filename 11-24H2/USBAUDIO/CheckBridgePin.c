/*
 * XREFs of CheckBridgePin @ 0x1400415AC
 * Callers:
 *     PropertyJackDescriptionBasicSupport @ 0x1400333B0 (PropertyJackDescriptionBasicSupport.c)
 *     PropertyJackDescriptionGet @ 0x1400412B0 (PropertyJackDescriptionGet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckBridgePin(__int64 a1, unsigned int a2, bool *a3)
{
  if ( !a1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    return 3221226021LL;
  *a3 = *(_DWORD *)(176LL * a2 + *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 68) == 4;
  return 0LL;
}
