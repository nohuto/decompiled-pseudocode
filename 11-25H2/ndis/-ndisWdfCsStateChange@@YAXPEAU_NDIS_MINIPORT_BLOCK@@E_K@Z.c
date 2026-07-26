/*
 * XREFs of ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1400CB880
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x14009B564 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __fastcall ndisWdfCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  KSPIN_LOCK *AoAc; // rbx
  KIRQL v6; // al
  _GUID *p_InterfaceGuid; // rbx
  unsigned __int16 IfIndex; // ax
  GUID v9; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+70h] [rbp-28h] BYREF

  v10[1] = 0LL;
  AoAc = (KSPIN_LOCK *)a1->AoAc;
  if ( (_BYTE)a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->AoAc);
    AoAc[103] = 0LL;
    KeReleaseSpinLock(AoAc, v6);
  }
  else
  {
    p_InterfaceGuid = &a1->InterfaceGuid;
    v10[0] = a1->PhysicalDeviceObject;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        a2,
        &a1->InterfaceGuid,
        a3,
        (__int64)v10,
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        (__int64)a1->pAdapterInstanceName->Buffer,
        (__int64)&a1->InterfaceGuid,
        128,
        a3);
    IfIndex = a1->IfIndex;
    v9 = GUID_CS_BLOCKER_GEN;
    v9.Data3 = IfIndex;
    v9.Data4[0] = 0;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
        (__int64)a1,
        a2,
        p_InterfaceGuid,
        a3,
        (__int64)p_InterfaceGuid,
        5,
        (__int64)L"NDIS",
        (__int64)&v9,
        128,
        a3);
  }
}
