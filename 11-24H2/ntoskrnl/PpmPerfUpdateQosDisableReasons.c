/*
 * XREFs of PpmPerfUpdateQosDisableReasons @ 0x14048DA40
 * Callers:
 *     PpmCheckPausePpmEngineForSx @ 0x14048D954 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048D998 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmPerfTelemetryWorker @ 0x14074FD20 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfUpdateQosDisableReasons(int *a1)
{
  char v1; // dl
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // r9d
  _QWORD *v6; // rcx
  int v7; // eax

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( !byte_140FC67A8 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    qword_140FC66F8 += MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    if ( PpmPerfQosEnabled )
      qword_140FC6708 += v4;
    v5 = 0;
    v6 = &unk_140FC6718;
    do
    {
      v7 = PpmPerfQosDisableReasons;
      if ( _bittest(&v7, v5) )
        *v6 += v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
  }
  if ( a1 )
  {
    if ( !PpmPerfQosDisableAccounting || PpmPerfQosDisableReasons != *a1 )
      v1 = 1;
    PpmPerfQosDisableReasons = *a1;
  }
  PpmPerfQosDisableAccounting = v3;
  return v1;
}
