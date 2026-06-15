/*
 * XREFs of ?IsSecondaryProfileRenderProcessingMode@CBtLeAudioResourceManager@@UEAA_NU_GUID@@@Z @ 0x1800E90A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtLeAudioResourceManager::IsSecondaryProfileRenderProcessingMode(
        CBtLeAudioResourceManager *this,
        struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v2 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  return v2 == 0;
}
