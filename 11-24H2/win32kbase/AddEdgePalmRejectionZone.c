/*
 * XREFs of AddEdgePalmRejectionZone @ 0x140096120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x140096178 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 */

int __fastcall AddEdgePalmRejectionZone(void *a1, unsigned int a2, struct tagRECT *a3)
{
  DelayZonePalmRejection *Instance; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  Instance = DelayZonePalmRejection::GetInstance((__int64)a1);
  if ( Instance )
  {
    v8 = *a3;
    LODWORD(Instance) = DelayZonePalmRejection::AddEdgeZoneToList(Instance, a1, a2, &v8);
  }
  return (int)Instance;
}
