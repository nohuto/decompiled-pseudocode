/*
 * XREFs of RtlInitializeCorrelationVector @ 0x180112D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpBase64Encode @ 0x180112E10 (RtlpBase64Encode.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

DWORD __cdecl RtlInitializeCorrelationVector(PCORRELATION_VECTOR CorrelationVector, int Version, const GUID *Guid)
{
  CHAR v4; // di
  __int64 v6; // rdx
  DWORD result; // eax

  v4 = Version;
  if ( (unsigned __int8)(Version - 1) > 1u || !Guid )
    return -1073741811;
  memset_thunk_772440563353939046(CorrelationVector->Vector, 0, 0x81uLL);
  CorrelationVector->Version = v4;
  result = RtlpBase64Encode(Guid, v6, CorrelationVector->Vector);
  if ( (result & 0x80000000) == 0 )
  {
    if ( v4 == 1 )
      strcpy(&CorrelationVector->Vector[16], ".0");
    else
      strcpy(&CorrelationVector->Vector[22], ".0");
  }
  return result;
}
