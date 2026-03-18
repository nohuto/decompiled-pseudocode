/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1402B125C
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x14009B1F0 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009B808 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1402B1200 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1402B1240 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402B29CC (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r15d
  _OWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  int v10; // ebx
  __int64 v11; // rbx
  _DWORD *Pool2; // r8
  __int64 v13; // rax
  int v14; // r9d
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID *v19; // rcx
  __int64 v20; // rax
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-268h] BYREF
  __int64 v32; // [rsp+58h] [rbp-260h]
  char v33; // [rsp+60h] [rbp-258h]
  struct DXGPROCESS *v34; // [rsp+68h] [rbp-250h]
  PVOID v35[58]; // [rsp+70h] [rbp-248h] BYREF
  PVOID P; // [rsp+240h] [rbp-78h]
  _BYTE v37[64]; // [rsp+248h] [rbp-70h] BYREF
  int v38; // [rsp+288h] [rbp-30h]

  v4 = a4;
  v6 = (_OWORD *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2044);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2044);
  Current = DXGPROCESS::GetCurrent(v7);
  v34 = Current;
  if ( Current )
  {
    memset(v35, 0, sizeof(v35));
    if ( !a2 )
    {
      v19 = v35;
      v20 = 3LL;
      do
      {
        *(_OWORD *)v19 = *v6;
        *((_OWORD *)v19 + 1) = v6[1];
        *((_OWORD *)v19 + 2) = v6[2];
        *((_OWORD *)v19 + 3) = v6[3];
        *((_OWORD *)v19 + 4) = v6[4];
        *((_OWORD *)v19 + 5) = v6[5];
        *((_OWORD *)v19 + 6) = v6[6];
        v19 += 16;
        *((_OWORD *)v19 - 1) = v6[7];
        v6 += 8;
        --v20;
      }
      while ( v20 );
      *(_OWORD *)v19 = *v6;
      *((_OWORD *)v19 + 1) = v6[1];
      *((_OWORD *)v19 + 2) = v6[2];
      *((_OWORD *)v19 + 3) = v6[3];
      *((_OWORD *)v19 + 4) = v6[4];
      v10 = HIDWORD(v35[17]);
LABEL_9:
      P = 0LL;
      v38 = 0;
      v11 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v11 > 0x10 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 < 4 )
        {
          Pool2 = 0LL;
LABEL_13:
          if ( Pool2 )
          {
            *Pool2 = v35[0];
            v13 = 0LL;
            v14 = HIDWORD(v35[17]);
            if ( HIDWORD(v35[17]) )
            {
              do
              {
                v26 = (unsigned int)(v13 + 1);
                Pool2[v26] = *((_DWORD *)&v35[18] + v13);
                v13 = v26;
                v14 = HIDWORD(v35[17]);
              }
              while ( (unsigned int)v26 < HIDWORD(v35[17]) );
            }
            v15 = SignalSynchronizationObjectInternal(
                    HIDWORD(v35[0]),
                    &v35[1],
                    LODWORD(v35[17]),
                    (unsigned int)(v14 + 1),
                    Pool2,
                    0LL,
                    v35[50],
                    &v35[50],
                    Current,
                    (a2 != 0) | (unsigned int)(4 * v4));
            if ( v15 < 0 )
            {
              if ( P != v37 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v38 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
              if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
              return (unsigned int)v15;
            }
            else
            {
              if ( P != v37 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v38 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
              if ( v33 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v31);
              }
              return 0LL;
            }
          }
          else
          {
            P = 0LL;
            v38 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
            if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v31);
            return 3221225495LL;
          }
        }
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4 * v11, 1265072196LL);
        P = Pool2;
      }
      else
      {
        Pool2 = v37;
        P = v37;
        if ( (_DWORD)v11 )
        {
          memset(v37, 0, 4LL * (unsigned int)v11);
          Pool2 = P;
        }
      }
      v38 = v11;
      goto LABEL_13;
    }
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v35, v6, 0x1D0uLL);
    v10 = HIDWORD(v35[17]);
    if ( HIDWORD(v35[17]) > 0x40 )
    {
      WdLogSingleEntry1(3LL, HIDWORD(v35[17]));
      WdLogGlobalForLineNumber = 1180;
    }
    else
    {
      if ( HIDWORD(v35[0]) <= 0x20 )
        goto LABEL_9;
      WdLogSingleEntry1(2LL, HIDWORD(v35[0]));
      WdLogGlobalForLineNumber = 1186;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Signaling too many objects %d",
        HIDWORD(v35[0]),
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
    WdLogGlobalForLineNumber = 1150;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v31);
  return 3221225485LL;
}
