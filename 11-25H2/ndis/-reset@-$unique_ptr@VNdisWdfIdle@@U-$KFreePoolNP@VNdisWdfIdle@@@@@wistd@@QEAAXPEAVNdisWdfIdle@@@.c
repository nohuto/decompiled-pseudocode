/*
 * XREFs of ?reset@?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@Z @ 0x14006CD70
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006CCA0 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??1NdisWdfIdle@@QEAA@XZ @ 0x14008E2F0 (--1NdisWdfIdle@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<NdisWdfIdle,KFreePoolNP<NdisWdfIdle>>::reset(NdisWdfIdle **a1, NdisWdfIdle *a2)
{
  NdisWdfIdle *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    NdisWdfIdle::~NdisWdfIdle(v2);
    ExFreePoolWithTag(v2, 0);
  }
}
