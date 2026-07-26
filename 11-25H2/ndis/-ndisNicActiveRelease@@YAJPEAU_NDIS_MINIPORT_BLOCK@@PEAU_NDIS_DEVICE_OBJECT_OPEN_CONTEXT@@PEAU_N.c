/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140063390
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DDLqdL @ 0x140063220 (WPP_RECORDER_SF_DDLqdL.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400646F0 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065380 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1400658C0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140065D00 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDL @ 0x140083170 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // esi
  unsigned int *v7; // rbx
  char *v8; // rdi
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v10; // r12
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rcx
  char *v14; // rbp
  int v16; // [rsp+20h] [rbp-88h]
  unsigned __int8 IsTempRefNeededAfterDeref; // [rsp+B0h] [rbp+8h]
  int active; // [rsp+B8h] [rbp+10h]

  v3 = 0;
  v7 = (unsigned int *)((char *)a3 + 16);
  v8 = (char *)a3 + 8;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), HIWORD(*(_QWORD *)v8), (_DWORD)a3, 26);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v11 = *((_DWORD *)a2 + 7);
  if ( v11 )
  {
    *((_DWORD *)a2 + 7) = v11 - 1;
    active = ndisAoAcActiveRefSubtract(AoAc, *v7, 1LL);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (byte_140125103 & 4) != 0 )
    {
      McTemplateK0xqqq_EtwWriteTransfer(
        v13,
        &NicActiveReleased,
        &a1->InterfaceGuid,
        *(_QWORD *)v8,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        active);
      v14 = (char *)a3 + 8;
    }
    else
    {
      v14 = v8;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
    if ( IsTempRefNeededAfterDeref )
    {
      ndisSetTempRefTimer(a1, *((_DWORD *)AoAc + 71));
      v8 = v14;
    }
  }
  else
  {
    v3 = -1073741675;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLqdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (*(_QWORD *)v8 >> 24) & 0xFFFFFFLL,
      HIWORD(*(_QWORD *)v8),
      v12,
      v16);
  return v3;
}
