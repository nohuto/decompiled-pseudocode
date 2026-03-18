/*
 * XREFs of DxgkSessionDisconnected @ 0x140398350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     OutputDuplRemoteSessionDisconnected @ 0x14018BB18 (OutputDuplRemoteSessionDisconnected.c)
 *     _lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_ @ 0x1401D1FA0 (_lambda_940d064d943a20fd52938170853ed62c_--_lambda_invoker_cdecl_.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403986AC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x140398770 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x140398884 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rbx
  int v6; // r15d
  __int64 v7; // rcx
  DXGGLOBAL *v8; // rax
  struct DXGSESSIONDATA *SessionData; // r14
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGADAPTERLISTLOCK *v17[2]; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+78h] [rbp+28h] BYREF

  v18 = -1;
  v3 = a1;
  v19 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2198);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v21 = -300000000LL;
    LOBYTE(v4) = 1;
    DxgkMiracastStopAllMiracastSessions(v4, &v21, 129LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
      (DXGAUTOADAPTERLISTLOCK *)v17,
      (struct DXGGLOBAL *)((char *)Global + 672));
    v6 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(v7) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v8 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v8);
    }
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v17);
    v10 = (_QWORD *)((char *)Global + 800);
    v11 = (_QWORD *)*((_QWORD *)Global + 100);
LABEL_10:
    while ( v11 != v10 && v11 && !v6 )
    {
      v12 = (__int64)v11;
      v11 = (_QWORD *)*v11;
      _m_prefetchw((const void *)(v12 + 24));
      v13 = *(_QWORD *)(v12 + 24);
      while ( v13 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v13 + 1, v13);
        if ( v14 == v13 )
        {
          if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v12) )
            v6 = lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_(v12);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
          goto LABEL_10;
        }
      }
    }
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v17);
  }
  else
  {
    OutputDuplRemoteSessionDisconnected();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v18);
}
