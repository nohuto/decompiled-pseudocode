/*
 * XREFs of DxgkUnlock2Internal @ 0x14028E6D0
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1401FCD68 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     DxgkUnlock2 @ 0x14028DD70 (DxgkUnlock2.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x14003E4E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401AF8A8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401D7EAC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DxgkUnlock2Internal(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  struct DXGALLOCATION *v14; // rdx
  struct DXGALLOCATION *v15; // rbx
  DXGDEVICE *v16; // r9
  int v17; // eax
  int v18; // edi
  struct DXGTHREAD *DxgThread; // rax
  struct DXG_VMBUS_CHANNEL_BASE *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // ecx
  struct DXGALLOCATION *v27; // rdx
  struct DXGALLOCATION *v28; // rbx
  __int64 v29; // rdi
  struct DXGTHREAD *v30; // rax
  unsigned int v31; // edi
  __int64 v32; // rsi
  unsigned int v33; // edi
  struct DXGKVMB_COMMAND_BASE *v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION *v38; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGALLOCATION *v39; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGTHREAD *v40; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGTHREAD *v41; // [rsp+68h] [rbp-98h] BYREF
  struct DXGKVMB_COMMAND_BASE *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+90h] [rbp-70h]

  v4 = (volatile signed __int32 *)(a3 + 248);
  v5 = *(_DWORD *)(a4 + 4);
  if ( *(_BYTE *)(a2 + 209) )
  {
    v21 = (struct DXG_VMBUS_CHANNEL_BASE *)(a2 + 4664);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v4, v22, v23);
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
    _InterlockedIncrement(v4 + 4);
    v24 = (v5 >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(a3 + 296) )
    {
      v25 = *(_QWORD *)(a3 + 280) + 16LL * v24;
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v25 + 8) & 0x60) && (*(_DWORD *)(v25 + 8) & 0x2000) == 0 )
      {
        v26 = *(_DWORD *)(v25 + 8) & 0x1F;
        if ( v26 )
        {
          if ( v26 == 5 )
          {
            v27 = *(struct DXGALLOCATION **)v25;
LABEL_32:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v27);
            _InterlockedDecrement(v4 + 4);
            ExReleasePushLockSharedEx(v4, 0LL);
            KeLeaveCriticalRegion();
            v28 = v39;
            if ( v39 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL) )
              {
                if ( *((_DWORD *)v39 + 24)
                  && _InterlockedExchangeAdd((volatile signed __int32 *)v39 + 24, 0xFFFFFFFF) == 1
                  && (*((_BYTE *)v28 + 128) & 3) == 0 )
                {
                  _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
                  if ( !*((_BYTE *)v21 + 80) )
                    UnlockParavirtualizedAllocationOnGuest(v39, 1);
                  v43 = 0;
                  *(_OWORD *)v42 = 0LL;
                  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v42, v21, 0x28u, 0LL, 0LL, 0LL);
                  v34 = v42[0];
                  if ( v42[0] )
                  {
                    v35 = *(_DWORD *)(a3 + 488);
                    *((_BYTE *)v42[0] + 12) = 0;
                    *((_DWORD *)v34 + 3) &= 0x1FFu;
                    *(_QWORD *)v34 = 0LL;
                    *((_DWORD *)v34 + 2) = v35;
                    *((_QWORD *)v34 + 2) = 24LL;
                    *((_BYTE *)v34 + 32) = 0;
                    *((_DWORD *)v34 + 7) = *((_DWORD *)v28 + 5);
                    *((_DWORD *)v34 + 6) = *((_DWORD *)this + 118);
                    v36 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                            v21,
                            (unsigned __int8 *)v42[1],
                            v42[0],
                            v43);
                    v29 = v36;
                    if ( v36 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v36);
                      WdLogGlobalForLineNumber = 11220;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        0xFFFFFFFFLL,
                        L"VmBusSendUnlock2 failed: 0x%I64x",
                        v29,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v42);
                  }
                  else
                  {
                    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v42);
                    LODWORD(v29) = -1073741801;
                  }
                }
                else
                {
                  LODWORD(v29) = 0;
                }
              }
              else
              {
                LODWORD(v29) = -1073741811;
                WdLogSingleEntry3(2LL, this, v39, -1073741811LL);
                WdLogGlobalForLineNumber = 11176;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  (__int64)this,
                  (__int64)v39,
                  -1073741811LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, *(unsigned int *)(a4 + 4));
              v37 = *(unsigned int *)(a4 + 4);
              WdLogGlobalForLineNumber = 11168;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Invalid allocation handle: 0x%I64x",
                v37,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v29) = -1073741811;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
            return (unsigned int)v29;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v27 = 0LL;
    goto LABEL_32;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v4, v9, v10);
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  _InterlockedIncrement(v4 + 4);
  v11 = (v5 >> 6) & 0xFFFFFF;
  if ( v11 >= *(_DWORD *)(a3 + 296) )
    goto LABEL_52;
  v12 = *(_QWORD *)(a3 + 280) + 16LL * v11;
  if ( ((v5 >> 25) & 0x60) != (*(_BYTE *)(v12 + 8) & 0x60) )
    goto LABEL_52;
  if ( (*(_DWORD *)(v12 + 8) & 0x2000) != 0 )
    goto LABEL_52;
  v13 = *(_DWORD *)(v12 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_52;
  if ( v13 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_52:
    v14 = 0LL;
    goto LABEL_10;
  }
  v14 = *(struct DXGALLOCATION **)v12;
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v14);
  _InterlockedDecrement(v4 + 4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  v15 = v38;
  if ( !v38 )
  {
    WdLogSingleEntry1(3LL, *(unsigned int *)(a4 + 4));
    WdLogGlobalForLineNumber = 1086;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38);
    return -1073741811LL;
  }
  v16 = (DXGDEVICE *)*((_QWORD *)v38 + 1);
  if ( *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    WdLogSingleEntry3(3LL, this, v38, -1073741811LL);
    WdLogGlobalForLineNumber = 1095;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38);
    return 3221225485LL;
  }
  if ( *((_QWORD *)v38 + 3) )
  {
    if ( v16 == this )
    {
      if ( !*((_DWORD *)this + 116) )
      {
        v31 = *(_DWORD *)(*((_QWORD *)v38 + 6) + 4LL);
        if ( (v31 & 4) != 0 )
        {
          v32 = *((_QWORD *)this + 235);
          v33 = (v31 >> 6) & 0xF;
          if ( v32 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 235)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1185;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                1185LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)this + 152) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v32 + 3120), this, v33)
              && DXGDEVICE::GetDisplayedPrimary(this, v33) == v15 )
            {
              DXGDEVICE::UpdateDodFrontBuffer((ADAPTER_RENDER **)this, v15);
            }
          }
        }
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 768LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *((_QWORD *)v15 + 3));
      v18 = v17;
      if ( v17 >= 0 )
      {
        if ( v38 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v38 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
        {
          v41 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v41) >= 0 )
          {
            DxgThread = v41;
            if ( v41 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v41 = DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
              {
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
                WdLogGlobalForLineNumber = 73;
              }
            }
          }
        }
        return 0LL;
      }
      WdLogSingleEntry3(3LL, this, v15, v17);
      WdLogGlobalForLineNumber = 1204;
    }
    else
    {
      v18 = -1073741811;
      WdLogSingleEntry4(3LL, v38, this, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 1168;
    }
    WdLogSingleEntry2(2LL, v38, v18);
    WdLogGlobalForLineNumber = 1114;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to unlock allocation 0x%p, returning 0x%x",
      (__int64)v38,
      v18,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38);
    return (unsigned int)v18;
  }
  WdLogSingleEntry2(3LL, *(unsigned int *)(a4 + 4), v38);
  WdLogGlobalForLineNumber = 1104;
  if ( v38 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v38 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
  {
    v40 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v40) >= 0 )
    {
      v30 = v40;
      if ( v40 || (v30 = DxgkThreadObjectCreateDxgThread(1), (v40 = v30) != 0LL) )
      {
        if ( *((_DWORD *)v30 + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v30 + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  return -1073741811LL;
}
