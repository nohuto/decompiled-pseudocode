/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x140042CA0 (DpReadDeviceSpace.c)
 *     DpWriteDeviceSpace @ 0x14004EC60 (DpWriteDeviceSpace.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1400667D4 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x14018DCD4 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401CC6F8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401D3EF8 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1401D44B8 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14021BA68 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x14021E0F0 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1@@@Z @ 0x14022B82C (-VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINT.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x14022B988 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x14022C7EC (-VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x14022D078 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x14022E37C (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     DpiGetAdapterInfo @ 0x140235D60 (DpiGetAdapterInfo.c)
 *     DpiSetDriverVersion @ 0x140237A8C (DpiSetDriverVersion.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x140405DD0 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this, struct DRIVER_WORKAROUNDS *a2)
{
  unsigned int v4; // esi
  char v5; // r13
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGGLOBAL *Global; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int v24; // eax
  struct DXGGLOBAL *v25; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v26; // rcx
  struct DXGGLOBAL *v27; // rax
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rcx
  char v32; // cl
  bool v33; // cf
  int v34; // eax
  DXGGLOBAL *v35; // rax
  DXGGLOBAL *v36; // rax
  unsigned int v37; // r9d
  int v38; // eax
  unsigned int v39; // r9d
  int v40; // eax
  DXG_GUEST_GLOBAL_VMBUS *v41; // rbx
  struct DXGGLOBAL *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+20h] [rbp-E0h]
  __int64 v50; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+30h] [rbp-D0h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+38h] [rbp-C8h]
  ULONG v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  _D3DKMT_QUERYADAPTERINFO v62; // [rsp+70h] [rbp-90h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v65; // [rsp+A4h] [rbp-5Ch]
  __int64 v66; // [rsp+B4h] [rbp-4Ch]
  _QWORD v67[89]; // [rsp+C0h] [rbp-40h] BYREF

  *((_BYTE *)this + 209) = 1;
  v57 = 0;
  v56 = 0;
  v4 = 4;
  v5 = 0;
  v6 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, &v57, 0xD0u, 4u, &v56);
  if ( v6 < 0 || v56 != 4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = v6;
    WdLogGlobalForLineNumber = 6648;
    goto LABEL_10;
  }
  if ( v57 >= 0x28 )
  {
    v11 = 44;
    if ( v57 < 0x2C )
      v11 = v57;
    v58 = v11;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) = v11;
    v12 = DpWriteDeviceSpace(*((_QWORD *)this + 27), 0LL, &v58, 0xD0u, 4u, &v56);
    if ( v12 < 0 || v56 != 4 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v12;
      WdLogGlobalForLineNumber = 6663;
LABEL_10:
      v57 = 0;
    }
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 435) = v57;
  Global = DXGGLOBAL::GetGlobal();
  v18 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, (char *)Global + 1744, 0xDCu, 4u, &v56);
  if ( v18 < 0 || v56 != 4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = v18;
    WdLogGlobalForLineNumber = 6678;
  }
  LODWORD(v23) = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((DXGADAPTER *)((char *)this + 4664), this);
  if ( (int)v23 >= 0 )
  {
    v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
            (DXGADAPTER *)((char *)this + 4664),
            (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 2696LL));
    *((_DWORD *)this + 1188) = v24;
    if ( v24 )
    {
      memset(v67, 0, sizeof(v67));
      v25 = DXGGLOBAL::GetGlobal();
      v26 = (DXGADAPTER *)((char *)this + 4664);
      if ( *((_DWORD *)v25 + 434) <= 0x10u )
      {
        LODWORD(v23) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
                         v26,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *)v67);
        if ( (int)v23 < 0 )
          goto LABEL_61;
      }
      else
      {
        LODWORD(v23) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                         v26,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v67);
        if ( (int)v23 < 0 )
        {
          v4 = 3;
          goto LABEL_61;
        }
      }
      *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (HIDWORD(v67[1]) << 14)) & 0x20000;
      v27 = DXGGLOBAL::GetGlobal();
      v28 = *(_DWORD *)a2;
      if ( *((_DWORD *)v27 + 434) < 0x26u )
      {
        if ( (v67[1] & 0x1000000000LL) != 0 )
          v29 = v28 & 0xFFFE7FFF | 0x10000;
        else
          v29 = v28 & 0xFFFE7FFF;
      }
      else
      {
        v29 = v28 & 0xFFFE7FFF | ((WORD2(v67[1]) & 0x180) << 8);
      }
      *(_DWORD *)a2 = v29;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) < 0x29u )
        v30 = *(_DWORD *)a2 & 0xFFE3FFFF;
      else
        v30 = ((WORD2(v67[1]) & 0x200) << 11) | *(_DWORD *)a2 & 0xFFE3FFFF | ((WORD2(v67[1]) & 0xC00) << 8) & 0xFFEFFFFF;
      *(_DWORD *)a2 = v30;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x22u )
        *(_QWORD *)((char *)this + 4772) = v67[88];
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x28u && (v67[1] & 0x4000000000LL) != 0 )
        *((_BYTE *)DXGGLOBAL::GetGlobal() + 1748) = 1;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x10u )
        DpiSetDriverVersion(*((_QWORD *)this + 27), LODWORD(v67[1]), &v67[3], &v67[23]);
      v31 = *((_QWORD *)this + 27);
      *((_BYTE *)this + 1785) = 1;
      LODWORD(v23) = DpiGetAdapterInfo(v31, (char *)this + 1744, (char *)this + 288);
      if ( (int)v23 < 0 )
        goto LABEL_38;
      *((_DWORD *)this + 111) = v67[0] & 0x18 | *((_DWORD *)this + 111) & 0xFFFFFFE7;
      v32 = BYTE4(v67[1]);
      *((_BYTE *)this + 210) = BYTE4(v67[1]) & 1;
      v33 = HIDWORD(v67[0]) < 2;
      *((_BYTE *)this + 211) = (v32 & 4) != 0;
      v34 = 2;
      if ( v33 )
        v34 = HIDWORD(v67[0]);
      *((_DWORD *)this + 766) = v34;
      *(_QWORD *)((char *)this + 4764) = v67[2];
      if ( (v32 & 2) != 0 )
      {
        v35 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HandleVirtualMachineReset(v35);
      }
      v36 = DXGGLOBAL::GetGlobal();
      LODWORD(v23) = DXGGLOBAL::EnsureVmBusInterface(v36);
      if ( (int)v23 < 0 )
      {
LABEL_38:
        v4 = 5;
      }
      else
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1748) )
          *((_QWORD *)this + 584) = **((_QWORD **)DXGGLOBAL::GetGlobal() + 210);
        v59 = 0;
        v62.pPrivateDriverData = &v59;
        v62.hAdapter = 0;
        *(_QWORD *)&v62.PrivateDriverDataSize = 4LL;
        v62.Type = KMTQAITYPE_PHYSICALADAPTERCOUNT;
        v38 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4664), 0LL, &v62, v37);
        v23 = v38;
        if ( v38 >= 0 )
        {
          *((_DWORD *)this + 74) = v59;
          if ( !*((_DWORD *)this + 105) && !*((_DWORD *)this + 106) )
          {
            v66 = 0LL;
            v63.hAdapter = 0;
            v63.pPrivateDriverData = &v64;
            *(_QWORD *)&v63.PrivateDriverDataSize = 28LL;
            v64 = 0;
            v65 = 0LL;
            v63.Type = KMTQAITYPE_PHYSICALADAPTERDEVICEIDS;
            v40 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                    (DXGADAPTER *)((char *)this + 4664),
                    0LL,
                    &v63,
                    v39);
            v23 = v40;
            if ( v40 < 0 )
            {
              WdLogSingleEntry1(2LL, v40);
              WdLogGlobalForLineNumber = 6865;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"KMTQAITYPE_PHYSICALADAPTERDEVICEIDS failed: 0x%I64x",
                v23,
                0LL,
                0LL,
                0LL,
                0LL);
              v4 = 12;
              goto LABEL_61;
            }
            *(_OWORD *)((char *)this + 420) = v65;
            *((_DWORD *)this + 109) = v66;
          }
          v61 = 0LL;
          v60 = 0LL;
          v41 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
          LODWORD(v23) = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v41, &v61, &v60);
          if ( (int)v23 >= 0 )
          {
            v42 = DXGGLOBAL::GetGlobal();
            LODWORD(v23) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v41, v61, v60, *((_DWORD *)v42 + 427));
            if ( (int)v23 >= 0 )
            {
              v4 = 8;
              if ( (*((_DWORD *)this + 111) & 8) != 0
                || (LODWORD(v23) = DXGADAPTER::CopyDriverStore(this), (int)v23 >= 0) )
              {
                LODWORD(v23) = DXGADAPTER::CopyRegistryKeys(this);
                if ( (int)v23 >= 0 )
                  return (unsigned int)v23;
                v4 = 9;
                v5 = 1;
              }
            }
            else
            {
              v4 = 7;
            }
          }
          else
          {
            v4 = 6;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v38);
          WdLogGlobalForLineNumber = 6843;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"KMTQAITYPE_PHYSICALADAPTERCOUNT failed: 0x%I64x",
            v23,
            0LL,
            0LL,
            0LL,
            0LL);
          v4 = 11;
        }
      }
    }
    else
    {
      v4 = 2;
      LODWORD(v23) = -1073741823;
    }
  }
  else
  {
    v4 = 1;
  }
LABEL_61:
  if ( v5 )
  {
    WdLogSingleEntry2(3LL, (int)v23, v4);
    WdLogGlobalForLineNumber = 6932;
    LODWORD(v23) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v54) = v4;
      LODWORD(v52) = 0;
      LODWORD(v50) = 0;
      LODWORD(v48) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(0LL, &VirtualGpuGuestEvent, v43, this, v48, v50, v52, v54, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, (int)v23, v4);
    WdLogGlobalForLineNumber = 6938;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Status:0x%I64x Reason: 0x%I64x ",
      (int)v23,
      v4,
      0LL,
      0LL,
      0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v55) = v4;
      LODWORD(v53) = 0;
      LODWORD(v51) = v23;
      LODWORD(v49) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(v44, &VirtualGpuGuestEventFailure, v45, this, v49, v51, v53, v55, 0LL, 0LL);
    }
  }
  if ( v4 != 1 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x1Au )
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLogEvent((char *)this + 4664, (unsigned int)v23, v46, v4);
  return (unsigned int)v23;
}
