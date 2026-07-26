/*
 * XREFs of ?ndisOidPreCrossTimestamp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C1B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

char __fastcall ndisOidPreCrossTimestamp(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v6; // dl
  unsigned __int16 v7; // r9
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xD3u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      v3);
  if ( *((_DWORD *)&v3->Header + 1) )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  if ( !*a1 )
    return v2;
  if ( v3->PcwDatapathEventMask < 0x20u )
  {
    LODWORD(v3->OpenQueue) = 32;
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v2;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  p_Lock = &v1->Lock;
  v6 = NewIrql;
  if ( !v1->HwTimestampCapabilities )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v2 = 1;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v6);
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2;
    v7 = 212;
LABEL_11:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      v7,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      v3);
    return v2;
  }
  HwTimestampCurrentConfig = v1->HwTimestampCurrentConfig;
  if ( !HwTimestampCurrentConfig )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v2 = 1;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v6);
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2;
    v7 = 213;
    goto LABEL_11;
  }
  if ( HwTimestampCurrentConfig->CrossTimestamp )
  {
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v6);
    return v2;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
  v2 = 1;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = 214;
    goto LABEL_11;
  }
  return v2;
}
