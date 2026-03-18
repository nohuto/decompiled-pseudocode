/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140207F54
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x14021C828 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x140205938 (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x140207528 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int v7; // r15d
  struct DXGFASTMUTEX *v10; // r14
  unsigned int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rbx
  DXGPROCESSCOPYPROTECTIONMUTEX *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v20[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v22[16]; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+88h] [rbp+7h] BYREF
  __int64 v24; // [rsp+90h] [rbp+Fh]
  char v25; // [rsp+98h] [rbp+17h]

  v23 = -1;
  v24 = 0LL;
  v7 = a3;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 17010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 17010);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 17010);
  v10 = (DXGSESSIONDATA *)((char *)this + 18920);
  v11 = -1073741808;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v12 )
  {
    DXGVAILGUESTOBJECT::AddReference((DXGVAILGUESTOBJECT *)v12);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    if ( ExAcquireRundownProtection(v12 + 8) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)&v12[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
        v14 = *(__int64 **)(v12[11].Count + 8);
        if ( v14 )
        {
          v15 = *v14;
          if ( a6 )
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v15 + 32))(
                    v14,
                    a2,
                    v7,
                    a4,
                    a5);
          else
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v15 + 40))(v14, a2, v7);
          v11 = v16;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2776;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Unable to get VAIL composition object",
            2776LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64));
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
      }
      else
      {
        v11 = -2147483611;
        WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
        WdLogGlobalForLineNumber = 2786;
      }
      ExReleaseRundownProtection(v12 + 8);
    }
    else
    {
      v11 = -2147483611;
      WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2795;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    DXGVAILGUESTOBJECT::ReleaseReference((DXGVAILGUESTOBJECT *)v12);
    v13 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v22;
  }
  else
  {
    v13 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v20;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v23);
  return v11;
}
