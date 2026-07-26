/*
 * XREFs of ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D254C
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D2470 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId_old(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  const struct _GUID *v4; // rsi
  unsigned int v5; // eax

  v1 = qword_140126AF0;
  v2 = 1;
  v3 = 1LL;
  v4 = a1;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      a1 = (const struct _GUID *)*((unsigned int *)v1 + 4);
      v5 = v2 + 1;
      if ( v2 != (_DWORD)a1 )
        v5 = v2;
      v2 = v5;
      if ( v5 < (unsigned int)a1 )
        v3 = v5;
    }
    if ( *((_QWORD *)v1 + 143) == *(_QWORD *)&v4->Data1 && *((_QWORD *)v1 + 144) == *(_QWORD *)v4->Data4 )
    {
      if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(a1, v3)
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x16u,
          0xAu,
          (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
          (__int64)v4);
      }
      v3 = 0LL;
      break;
    }
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  if ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
    v2 = v3;
  if ( v2 == -1 )
  {
    if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(a1, v3)
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0xBu,
        (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
        (__int64)v4);
    }
    return 0;
  }
  return v2;
}
