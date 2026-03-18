/*
 * XREFs of RemoveAllEdgePalmRejectionZonesForDevice @ 0x140157300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140154028 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

DelayZonePalmRejection *__fastcall RemoveAllEdgePalmRejectionZonesForDevice(void *a1)
{
  DelayZonePalmRejection *result; // rax

  result = DelayZonePalmRejection::GetInstance((__int64)a1);
  if ( result )
    return (DelayZonePalmRejection *)(unsigned __int8)DelayZonePalmRejection::RemoveEdgeZonesForDevice(result, a1);
  return result;
}
