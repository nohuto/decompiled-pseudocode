/*
 * XREFs of ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BC820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall ndisOidPreTimestampCapability(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // bl
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  int v5; // ebx
  unsigned __int16 *p_Type; // rbp
  KIRQL v7; // dl
  int v8; // r9d
  KIRQL v9; // dl
  size_t v10; // r8
  KIRQL v11; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      208,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3);
  if ( *((_DWORD *)&v3->Header + 1) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( !*a1 )
    return v2;
  v5 = 54;
  if ( v3->PcwDatapathEventMask < 0x36u )
  {
    LODWORD(v3->OpenQueue) = 54;
    *((_DWORD *)a1 + 10) = -1073676268;
    return 1;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  if ( *(_DWORD *)&v3->Reserved4.Length != 10485761 )
  {
    p_Type = (unsigned __int16 *)&v1->HwTimestampCurrentConfig->Header.Type;
    if ( !p_Type )
    {
      v9 = NewIrql;
      *((_DWORD *)a1 + 10) = -1073741637;
      v2 = 1;
      v1->MiniportThread = 0LL;
      KeReleaseSpinLock(&v1->Lock, v9);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      v8 = 210;
      goto LABEL_12;
    }
LABEL_16:
    v10 = p_Type[1];
    if ( p_Type[1] >= 0x36u )
      v10 = 54LL;
    memmove(v3->Reserved4.Buffer, p_Type, v10);
    if ( p_Type[1] < 0x36u )
      v5 = p_Type[1];
    v11 = NewIrql;
    HIDWORD(v3->Reserved28) = v5;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v11);
    *((_DWORD *)a1 + 10) = 0;
    return 1;
  }
  p_Type = (unsigned __int16 *)&v1->HwTimestampCapabilities->Header.Type;
  if ( p_Type )
    goto LABEL_16;
  v7 = NewIrql;
  *((_DWORD *)a1 + 10) = -1073741637;
  v2 = 1;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 209;
LABEL_12:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      v8,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3);
  }
  return v2;
}
