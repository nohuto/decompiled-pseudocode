/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x140203120
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400322F0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x140079D90 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x140090FC8 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401E8460 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x140200B54 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403B87BC (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGVAILOBJECT *v4; // rsi
  int NumStartedVirtualGpu; // r15d
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD **v13; // rdi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v15; // rax
  _QWORD *i; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // [rsp+50h] [rbp-98h] BYREF
  __int64 v24; // [rsp+58h] [rbp-90h]
  char v25; // [rsp+60h] [rbp-88h]
  _BYTE v26[16]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v28[24]; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v29[24]; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-30h] BYREF

  v3 = (const void *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2214;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2214);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2214);
  v30 = 0LL;
  v4 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v30, v3, 0x10uLL);
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      KeEnterCriticalRegion();
      v10 = -1073741275;
      v13 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
        (struct _KTHREAD **)Global + 61);
      v15 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 1656);
      for ( i = (_QWORD *)*v15; i != v15; i = (_QWORD *)*i )
      {
        v17 = i[35] - v30;
        if ( !v17 )
          v17 = i[36] - *((_QWORD *)&v30 + 1);
        if ( !v17 )
        {
          v13 = (struct _KTHREAD **)(i - 1);
          break;
        }
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28);
      if ( v13 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, v13 + 8);
        v4 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v13);
        if ( v4 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v13);
          v10 = 0;
        }
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29);
      }
      if ( v10 >= 0 )
      {
        v22 = DxgkCompositionObject::AccessCheck(v4);
        v10 = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry1(3LL, v22);
          WdLogGlobalForLineNumber = 868;
        }
        if ( v10 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v27);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v26, Current);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
          DXGPROCESS::SetVailObject(Current, v4);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
          *((_DWORD *)v4 + 34) = PsGetCurrentProcessSessionId();
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 849;
      }
      if ( !NumStartedVirtualGpu )
      {
        v10 = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 893;
      }
      if ( v4 )
        DxgkCompositionObject::Release(v4);
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741786;
      WdLogSingleEntry1(2LL, -1073741786LL);
      WdLogGlobalForLineNumber = 801;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid process context. Returning 0x%I64x",
        -1073741786LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v23);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 782;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v23);
    }
    return 3221225659LL;
  }
}
