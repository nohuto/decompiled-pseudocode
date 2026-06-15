/*
 * XREFs of ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x18013DDD0
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001180C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSpatialProperties::IsPropertyChangeRelevant(
        CSpatialProperties *this,
        const struct _tagpropertykey *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 5)
    && *((_QWORD *)this + 8)
    && *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_SpatialAudio_Signaling_Key.fmtid.Data1
    && *(_QWORD *)a2->fmtid.Data4 == *(_QWORD *)PKEY_SpatialAudio_Signaling_Key.fmtid.Data4 )
  {
    return a2->pid == 2;
  }
  return v2;
}
