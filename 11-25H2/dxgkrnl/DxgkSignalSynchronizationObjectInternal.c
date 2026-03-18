/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1402A8CDC
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1400990A0 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400996B8 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1402A8C80 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1402A8CC0 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402AA44C (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r15d
  _OWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rbx
  _DWORD *Pool2; // r8
  __int64 v14; // rax
  int v15; // r9d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID *v20; // rcx
  __int64 v21; // rax
  __int64 CurrentProcess; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-268h] BYREF
  __int64 v33; // [rsp+58h] [rbp-260h]
  char v34; // [rsp+60h] [rbp-258h]
  struct DXGPROCESS *v35; // [rsp+68h] [rbp-250h]
  PVOID v36[58]; // [rsp+70h] [rbp-248h] BYREF
  PVOID P; // [rsp+240h] [rbp-78h]
  _BYTE v38[64]; // [rsp+248h] [rbp-70h] BYREF
  int v39; // [rsp+288h] [rbp-30h]

  v4 = a4;
  v6 = (_OWORD *)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2044);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2044);
  Current = DXGPROCESS::GetCurrent(v7);
  v35 = Current;
  if ( Current )
  {
    memset(v36, 0, sizeof(v36));
    if ( !a2 )
    {
      v20 = v36;
      v21 = 3LL;
      do
      {
        *(_OWORD *)v20 = *v6;
        *((_OWORD *)v20 + 1) = v6[1];
        *((_OWORD *)v20 + 2) = v6[2];
        *((_OWORD *)v20 + 3) = v6[3];
        *((_OWORD *)v20 + 4) = v6[4];
        *((_OWORD *)v20 + 5) = v6[5];
        *((_OWORD *)v20 + 6) = v6[6];
        v20 += 16;
        *((_OWORD *)v20 - 1) = v6[7];
        v6 += 8;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)v20 = *v6;
      *((_OWORD *)v20 + 1) = v6[1];
      *((_OWORD *)v20 + 2) = v6[2];
      *((_OWORD *)v20 + 3) = v6[3];
      *((_OWORD *)v20 + 4) = v6[4];
      v11 = HIDWORD(v36[17]);
LABEL_9:
      P = 0LL;
      v39 = 0;
      v12 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v12 > 0x10 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 4 )
        {
          Pool2 = 0LL;
LABEL_13:
          if ( Pool2 )
          {
            *Pool2 = v36[0];
            v14 = 0LL;
            v15 = HIDWORD(v36[17]);
            if ( HIDWORD(v36[17]) )
            {
              do
              {
                v27 = (unsigned int)(v14 + 1);
                Pool2[v27] = *((_DWORD *)&v36[18] + v14);
                v14 = v27;
                v15 = HIDWORD(v36[17]);
              }
              while ( (unsigned int)v27 < HIDWORD(v36[17]) );
            }
            v16 = SignalSynchronizationObjectInternal(
                    HIDWORD(v36[0]),
                    &v36[1],
                    LODWORD(v36[17]),
                    (unsigned int)(v15 + 1),
                    Pool2,
                    0LL,
                    v36[50],
                    &v36[50],
                    Current,
                    (a2 != 0) | (unsigned int)(4 * v4));
            if ( v16 < 0 )
            {
              if ( P != v38 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v39 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
              if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
              return (unsigned int)v16;
            }
            else
            {
              if ( P != v38 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v39 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
              if ( v34 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v32);
              }
              return 0LL;
            }
          }
          else
          {
            P = 0LL;
            v39 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
            return 3221225495LL;
          }
        }
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4 * v12, 1265072196LL, v10);
        P = Pool2;
      }
      else
      {
        Pool2 = v38;
        P = v38;
        if ( (_DWORD)v12 )
        {
          memset(v38, 0, 4LL * (unsigned int)v12);
          Pool2 = P;
        }
      }
      v39 = v12;
      goto LABEL_13;
    }
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v36, v6, 0x1D0uLL);
    v11 = HIDWORD(v36[17]);
    if ( HIDWORD(v36[17]) > 0x40 )
    {
      WdLogSingleEntry1(3LL, HIDWORD(v36[17]));
      WdLogGlobalForLineNumber = 1190;
    }
    else
    {
      if ( HIDWORD(v36[0]) <= 0x20 )
        goto LABEL_9;
      WdLogSingleEntry1(2LL, HIDWORD(v36[0]));
      WdLogGlobalForLineNumber = 1196;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Signaling too many objects %d",
        HIDWORD(v36[0]),
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1160;
    v24 = PsGetCurrentProcess(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v32);
  return 3221225485LL;
}
