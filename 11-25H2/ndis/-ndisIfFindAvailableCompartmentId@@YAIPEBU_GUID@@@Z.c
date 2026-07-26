/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D2470
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D254C (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdx
  unsigned int AvailableCompartmentId_old; // ecx

  v1 = qword_140126AF0;
  if ( qword_140126AF0 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
    return 1LL;
  AvailableCompartmentId_old = dword_140124F2C;
  if ( (unsigned int)dword_140124F2C > *(_DWORD *)(qword_140126AF8 + 16) )
  {
    while ( *((_QWORD *)v1 + 143) != *(_QWORD *)&a1->Data1 || *((_QWORD *)v1 + 144) != *(_QWORD *)a1->Data4 )
    {
      v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
      if ( v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
        goto LABEL_7;
    }
    if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(
                         (unsigned int)dword_140124F2C,
                         v1)
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0xCu,
        (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
        (__int64)a1);
    }
    return 0LL;
  }
  AvailableCompartmentId_old = ndisIfFindAvailableCompartmentId_old(a1);
  if ( !AvailableCompartmentId_old )
    return 0LL;
LABEL_7:
  dword_140124F2C = AvailableCompartmentId_old + 1;
  if ( AvailableCompartmentId_old == -2 )
    dword_140124F2C = 2;
  return AvailableCompartmentId_old;
}
