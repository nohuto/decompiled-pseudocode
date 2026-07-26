/*
 * XREFs of ndisIfCreateCompartmentBlock @ 0x1400D18DC
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400D0CC0 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_LqL @ 0x14005E5D0 (WPP_RECORDER_SF_LqL.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D2470 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D254C (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 *     Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B48 (Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_L_guid_q @ 0x1400D2C44 (WPP_RECORDER_SF_L_guid_q.c)
 *     WPP_RECORDER_SF_L_guid_qd @ 0x1400D2D34 (WPP_RECORDER_SF_L_guid_qd.c)
 *     WPP_RECORDER_SF_l_guid_ @ 0x1400D2F04 (WPP_RECORDER_SF_l_guid_.c)
 *     WPP_RECORDER_SF_l_guid_d @ 0x1400D30E8 (WPP_RECORDER_SF_l_guid_d.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(__int64 a1, const struct _GUID *a2, unsigned __int16 *a3, _QWORD *a4)
{
  NTSTATUS v5; // ebx
  unsigned int v8; // esi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  _QWORD *v19; // rax
  size_t v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  KIRQL v26; // r12
  unsigned int AvailableCompartmentId; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r15d
  int v31; // edx
  int v32; // r8d
  int v33; // edx
  int v34; // r8d
  struct _GUID v35; // xmm0
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  __int64 *v37; // rcx
  __int64 v38; // rax
  int v39; // edx
  int v40; // r8d
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  int v45; // [rsp+20h] [rbp-68h]
  char v46[8]; // [rsp+38h] [rbp-50h]

  v5 = 0;
  v8 = a1;
  if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)&v46[4] = HIDWORD(a3);
      WPP_RECORDER_SF_L_guid_q(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      v8);
  }
  *a4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 1768LL, 1718174798);
  v15 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = v8;
    v19 = (_QWORD *)(Pool2 + 24);
    v19[1] = v19;
    *v19 = v19;
    v15[217] = v15 + 216;
    v15[216] = v15 + 216;
    if ( !(unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
    {
      v15[219] = v15 + 218;
      v15[218] = v15 + 218;
    }
    *(_QWORD *)((char *)v15 + 44) = 1LL;
    *((_DWORD *)v15 + 10) = 8;
    if ( a3 )
    {
      v20 = 1640LL;
      if ( a3[1] < 0x668u )
        v20 = a3[1];
      memmove(v15 + 8, a3, v20);
    }
    else
    {
      v5 = ExUuidCreate((UUID *)v15 + 5);
      if ( v5 < 0 )
      {
        if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(
                             v22,
                             v21)
          && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_l_guid_d(*((_QWORD *)WPP_GLOBAL_Control + 8), v23, v24, 16, v45, v8, (__int64)a2, v5);
        }
        goto LABEL_50;
      }
      if ( v5 == 1073872982 )
        v5 = 0;
    }
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( a2 )
    {
      if ( (unsigned int)Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline() )
        AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
      else
        AvailableCompartmentId = ndisIfFindAvailableCompartmentId_old(a2);
      v30 = AvailableCompartmentId;
      if ( !AvailableCompartmentId )
      {
        if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(
                             v29,
                             v28)
          && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 2;
          WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v31, v32, v30 + 17, v45, v8, (__int64)a2);
        }
        v5 = -1073741270;
LABEL_37:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v26);
        if ( v5 >= 0 )
        {
LABEL_52:
          *a4 = v15;
          goto LABEL_53;
        }
LABEL_50:
        ExFreePoolWithTag(v15, 0);
        LOBYTE(v15) = 0;
        goto LABEL_53;
      }
      if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v29, v28)
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v33, v34, 18, v45, v30, (__int64)a2);
      }
      v35 = *a2;
      v8 = v30;
      *((_DWORD *)v15 + 4) = v30;
      *(struct _GUID *)(v15 + 143) = v35;
    }
    if ( !v5 )
    {
      for ( i = qword_140126AF0; ; i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
      {
        if ( i == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
        {
LABEL_44:
          _InterlockedIncrement((volatile signed __int32 *)v15 + 11);
          v37 = (__int64 *)*((_QWORD *)i + 1);
          v38 = *v37;
          if ( *(__int64 **)(*v37 + 8) != v37 )
            __fastfail(3u);
          *v15 = v38;
          v15[1] = v37;
          *(_QWORD *)(v38 + 8) = v15;
          *v37 = (__int64)v15;
          _InterlockedIncrement(&dword_1401275C4);
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v26);
          goto LABEL_52;
        }
        if ( *((_DWORD *)i + 4) == v8 )
          break;
        if ( *((_DWORD *)i + 4) > v8 )
          goto LABEL_44;
      }
      if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(
                           v25,
                           &qword_140126AF0)
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v39) = 2;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v39, v40, 19, v45, v8, (__int64)a2);
      }
      v5 = -1073741270;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v26);
      goto LABEL_50;
    }
    goto LABEL_37;
  }
  if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v14, v13)
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v16, v18, 15, v45, v8, (__int64)a2);
  }
  v5 = -1073741670;
LABEL_53:
  if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v17, v16) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L_guid_qd(*((_QWORD *)WPP_GLOBAL_Control + 8), v41, v42, v43, v45, v8, (__int64)a2, (char)v15, v5);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v46 = v5;
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v41,
      v42,
      0x15u,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      v8,
      (char)v15,
      *(_QWORD *)v46);
  }
  return (unsigned int)v5;
}
