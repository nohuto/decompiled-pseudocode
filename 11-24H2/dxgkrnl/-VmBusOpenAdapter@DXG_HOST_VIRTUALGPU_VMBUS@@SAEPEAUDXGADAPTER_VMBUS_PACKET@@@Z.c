/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402250C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444444@Z @ 0x1400043C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x14004F8C0 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1401A9270 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  DXGPROCESS *v17; // rcx
  void *KmdProcessHandle; // rax
  char v19; // cl
  __int64 v20; // rcx
  __int64 v21; // r8
  struct VMBPACKETCOMPLETION__ *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-C8h]
  unsigned int v34; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v36; // [rsp+90h] [rbp-78h] BYREF
  int v37; // [rsp+94h] [rbp-74h] BYREF
  int v38; // [rsp+98h] [rbp-70h] BYREF
  int v39; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v40; // [rsp+A0h] [rbp-68h] BYREF
  int v41; // [rsp+A4h] [rbp-64h] BYREF
  int v42; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 *v43; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v45; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v46[24]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v47[24]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int16 *v48; // [rsp+108h] [rbp+0h] BYREF
  int v49; // [rsp+110h] [rbp+8h]
  int v50; // [rsp+114h] [rbp+Ch]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v2;
  if ( v2 )
  {
    v6 = 0;
    v7 = *((_QWORD *)a1 + 12);
    v8 = 0;
    v9 = *((_QWORD *)a1 + 10);
    v34 = 0;
    v10 = *(_QWORD *)(v7 + 592);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0pqtq_EtwWriteTransfer(v3, &OpenVirtualGpuStart, v4, *(_QWORD *)(v9 + 16), *(_DWORD *)(v9 + 24), 0, 0);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v47, (struct _KTHREAD **)(v9 + 248));
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v46,
      *(struct DXGADAPTER **)(v9 + 16),
      1);
    v11 = *(_DWORD *)(v5 + 24);
    if ( v11 > 0x2C || (v12 = *(_DWORD *)(v5 + 28), v12 < 0x10) || v11 < v12 )
    {
      WdLogSingleEntry4(2LL, 44LL, 16LL, *(unsigned int *)(v5 + 24), *(unsigned int *)(v5 + 28));
      v33 = *(unsigned int *)(v5 + 28);
      v32 = *(unsigned int *)(v5 + 24);
      WdLogGlobalForLineNumber = 5599;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VM bus interface mismatch: 0x%I64x, 0x%I64x, 0x%I64x, 0x%I64x",
        44LL,
        16LL,
        v32,
        v33,
        0LL);
      LODWORD(v13) = -1073741637;
      v6 = 9;
    }
    else if ( *(_BYTE *)(v9 + 173) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5607;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Adapter is already opened by the guest",
        5607LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v13) = -1073741811;
      v6 = 10;
    }
    else
    {
      *(_DWORD *)(v10 + 392) = v11;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 200LL) == 1 )
      {
        v14 = DXGADAPTER::CreateHandle(*(DXGADAPTER **)(v9 + 16), *(struct DXGPROCESS **)(v9 + 96), &v34);
        v13 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(2LL, v14);
          WdLogGlobalForLineNumber = 5647;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"CreateHandle failed: 0x%I64x",
            v13,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v13) = -1073741823;
          v6 = 13;
        }
        else
        {
          *(_BYTE *)(v9 + 173) = 1;
          if ( *(_DWORD *)(v5 + 24) > 0x10u )
          {
            v15 = *((_DWORD *)a1 + 36);
            if ( v15 < 0x28 )
            {
              WdLogSingleEntry1(2LL, v15);
              v16 = *((unsigned int *)a1 + 36);
              WdLogGlobalForLineNumber = 5631;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid command length: 0x%I64x",
                v16,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v13) = -1073741811;
              v6 = 12;
            }
            *(_QWORD *)(v9 + 344) = *(_QWORD *)(v5 + 32);
          }
          *(_QWORD *)&v45.Flags.0 = 0LL;
          v17 = (DXGPROCESS *)*((_QWORD *)a1 + 12);
          v45.pVmGuid = (GUID *)(v10 + 288);
          KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(v17, *(_DWORD *)(*(_QWORD *)(v9 + 16) + 240LL));
          v19 = *(_BYTE *)(v10 + 336);
          v45.hKmdVmWorkerProcess = KmdProcessHandle;
          LODWORD(KmdProcessHandle) = (v45.Flags.Value & 0xFFFFFFFE | v19 & 1) ^ ((*(_BYTE *)&v45.Flags.0 & 0xFE | v19 & 1) ^ (unsigned __int8)(2 * *(_DWORD *)(v10 + 396))) & 2;
          v20 = *(_QWORD *)(v9 + 16);
          v45.Flags.Value = (unsigned int)KmdProcessHandle;
          ADAPTER_RENDER::DdiSetVirtualMachineData(*(ADAPTER_RENDER **)(v20 + 3128), &v45, v21);
        }
      }
      else
      {
        LODWORD(v13) = -1073741130;
        v6 = 11;
      }
    }
    if ( *(_DWORD *)(v5 + 24) <= 0x10u )
    {
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry1(2LL, (int)v13);
        WdLogGlobalForLineNumber = 5673;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"CreateHandle failed: 0x%I64x",
          (int)v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v34, 4u);
        v8 = 1;
      }
    }
    else
    {
      v22 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v48 = (unsigned __int16 *)__PAIR64__(v13, v34);
      v49 = 44;
      v50 = 16;
      VmBusCompletePacket(v22, &v48, 0x10u);
      v8 = 1;
    }
    v48 = *(unsigned __int16 **)(*(_QWORD *)(v9 + 16) + 412LL);
    if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000008000LL) )
    {
      v35 = *(_DWORD *)(v25 + 432);
      v36 = *(_DWORD *)(v25 + 428);
      v37 = *(_DWORD *)(v25 + 424);
      v38 = *(_DWORD *)(v25 + 420);
      v26 = *(_QWORD *)(v9 + 104);
      v39 = 44;
      v27 = *(unsigned int *)(v26 + 392);
      v43 = v48;
      v48 = *(unsigned __int16 **)(v25 + 1928);
      v40 = v27;
      v41 = v13;
      v42 = v6;
      v44 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        (__int64)&unk_14013E7C2,
        v24,
        v25,
        (__int64)&v44,
        (__int64)&v42,
        (__int64)&v41,
        &v48,
        (__int64)&v43,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
    if ( bTracingEnabled )
    {
      if ( (int)v13 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      {
        LODWORD(v31) = v6;
        LODWORD(v30) = v13;
        LODWORD(v29) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqtq_EtwWriteTransfer(v23, &OpenVirtualGpuFailed, v24, *(_QWORD *)(v9 + 16), v29, v30, v31);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        LODWORD(v31) = v6;
        LODWORD(v30) = v13;
        LODWORD(v29) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqtq_EtwWriteTransfer(
          (unsigned int)v29,
          &OpenVirtualGpuEnd,
          v24,
          *(_QWORD *)(v9 + 16),
          v29,
          v30,
          v31);
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    LOBYTE(v2) = v8;
  }
  return v2;
}
