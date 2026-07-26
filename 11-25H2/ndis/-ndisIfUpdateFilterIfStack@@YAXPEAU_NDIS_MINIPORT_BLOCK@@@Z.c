/*
 * XREFs of ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004B4A0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140018400 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14004B900 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14004B680 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14004BEA0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // si
  unsigned int IfIndex; // edi
  int v3; // edx
  struct _NDIS_IF_BLOCK *Interface; // rbx
  PVOID *v5; // rcx
  unsigned int *p_HigherLayerIfCount; // r8
  unsigned int v7; // edx
  PVOID *v8; // rbx
  int v9; // edx
  unsigned int v10[4]; // [rsp+30h] [rbp-498h] BYREF
  _OWORD v11[69]; // [rsp+40h] [rbp-488h] BYREF

  v1 = (char)a1;
  IfIndex = a1->IfIndex;
  memset(v11, 0, 0x444uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      22,
      14,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      v1);
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
  Interface = ndisIfFindInterface(IfIndex);
  v11[0] = Interface->NetworkGuid;
  if ( Interface->HigherLayerIfCount )
  {
LABEL_4:
    v5 = (PVOID *)P;
    p_HigherLayerIfCount = &Interface->HigherLayerIfCount;
    v7 = 0;
    while ( v5 != &P && v7 < *p_HigherLayerIfCount )
    {
      v8 = v5;
      v5 = (PVOID *)*v5;
      if ( *((_DWORD *)v8 + 5) == IfIndex )
      {
        Interface = (struct _NDIS_IF_BLOCK *)v8[3];
        ++v7;
        if ( Interface )
        {
          if ( (Interface->Flags & 2) != 0 )
          {
            v10[0] = 0;
            ndisNsiChangeInterfaceInfo(Interface, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v11, 0x10u, 0, v10);
            IfIndex = Interface->ifIndex;
            if ( Interface->HigherLayerIfCount )
              goto LABEL_4;
            break;
          }
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      15,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      v1);
  }
}
