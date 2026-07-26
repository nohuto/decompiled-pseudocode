/*
 * XREFs of NdisReleaseNicActive @ 0x140075FC0
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140051760 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140037220 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14003AC20 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x14003BD90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14003C8F0 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 */

void __fastcall NdisReleaseNicActive(__int64 a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  unsigned __int8 IsTempRefNeededAfterDeref; // r13
  int v4; // r14d
  int v7; // r12d
  __int64 AoAc; // rdi
  PVOID *v9; // rdx
  KIRQL v10; // r15
  int active; // eax
  __int64 v12; // rcx
  struct _GUID *v13; // [rsp+20h] [rbp-48h]
  char v14[8]; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  char v16[4]; // [rsp+30h] [rbp-38h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  IsTempRefNeededAfterDeref = 0;
  v4 = 0;
  v7 = 0;
  AoAc = (__int64)v2->AoAc;
  v9 = WPP_f95a930beee8328147ea537ccd3c5542_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x35u,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      a1,
      *(_DWORD *)v16);
    v9 = WPP_f95a930beee8328147ea537ccd3c5542_Traceguids;
  }
  if ( a2 && a2 < 17 && v2->AoAc )
  {
    if ( ndisWdfTryAcquireNicActive
      && (v2->Flags & 0x80u) != 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        14,
        54,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids);
    }
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( *(_DWORD *)(a1 + 848) && *(int *)(AoAc + 52) > 0 )
    {
      active = ndisAoAcActiveRefSubtract(AoAc, a2, 1);
      v7 = --*(_DWORD *)(a1 + 848);
      v4 = active;
      IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref((struct _NDIS_MINIPORT_AOAC *)AoAc);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
    if ( (byte_14011B103 & 4) != 0 )
    {
      LODWORD(v15) = v4;
      *(_DWORD *)v14 = v7;
      LODWORD(v13) = a2;
      McTemplateK0xqqq_EtwWriteTransfer(
        v12,
        (__int64)&NicActiveReleased,
        (__int64)&v2->InterfaceGuid,
        v2->NetLuid.Value,
        v13,
        *(_QWORD *)v14,
        v15);
    }
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(v2, *(_DWORD *)(AoAc + 284));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v7;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x37u,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v4,
        v15);
    }
  }
}
