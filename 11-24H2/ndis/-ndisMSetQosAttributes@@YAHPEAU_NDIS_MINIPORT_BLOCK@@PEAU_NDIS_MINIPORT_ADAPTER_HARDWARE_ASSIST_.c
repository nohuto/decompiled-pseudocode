/*
 * XREFs of ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E718
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400A0478 (WPP_RECORDER_SF_DDDD.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisMSetQosAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  unsigned int v3; // ebx
  _NDIS_QOS_CAPABILITIES *HardwareQosCapabilities; // rax
  size_t v6; // rsi
  int Revision; // edx
  _NDIS_QOS_CAPABILITIES *Pool2; // rax
  _NDIS_QOS_CAPABILITIES *v9; // rax
  unsigned __int16 *p_Type; // rdx
  size_t v11; // r8
  unsigned __int16 *v12; // rdx
  _QWORD *v13; // rcx
  int v14; // r9d
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rcx
  char v18; // [rsp+28h] [rbp-40h]
  char v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v2 = a2;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      139,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v19);
  }
  HardwareQosCapabilities = v2->HardwareQosCapabilities;
  v6 = 20LL;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_25;
    v14 = 140;
    goto LABEL_24;
  }
  HardwareQosCapabilities = v2->CurrentQosCapabilities;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_25;
    v14 = 141;
LABEL_24:
    v18 = Revision;
    LOBYTE(Revision) = 5;
    WPP_RECORDER_SF_DDDD(
      v13[8],
      Revision,
      13,
      v14,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      v18,
      1,
      HardwareQosCapabilities->Header.Size,
      20);
LABEL_25:
    v3 = -1073741811;
    goto LABEL_26;
  }
  if ( a1->QosCurrentCapabilities || a1->QosHwCapabilities )
  {
    v3 = -1073676283;
    goto LABEL_30;
  }
  Pool2 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePool2(64LL, 20LL, 1936802894LL);
  a1->QosCurrentCapabilities = Pool2;
  if ( Pool2 )
  {
    v9 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePool2(64LL, 20LL, 1936802894LL);
    a1->QosHwCapabilities = v9;
    if ( v9 )
    {
      p_Type = (unsigned __int16 *)&v2->CurrentQosCapabilities->Header.Type;
      v11 = p_Type[1];
      if ( p_Type[1] >= 0x14u )
        v11 = 20LL;
      memmove(a1->QosCurrentCapabilities, p_Type, v11);
      v12 = (unsigned __int16 *)&v2->HardwareQosCapabilities->Header.Type;
      if ( v12[1] < 0x14u )
        v6 = v12[1];
      memmove(a1->QosHwCapabilities, v12, v6);
      goto LABEL_30;
    }
  }
  v3 = -1073741670;
LABEL_26:
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( QosCurrentCapabilities )
  {
    ExFreePoolWithTag(QosCurrentCapabilities, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  QosHwCapabilities = a1->QosHwCapabilities;
  if ( QosHwCapabilities )
  {
    ExFreePoolWithTag(QosHwCapabilities, 0);
    a1->QosHwCapabilities = 0LL;
  }
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x8Eu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)v2,
      v20);
  }
  return v3;
}
