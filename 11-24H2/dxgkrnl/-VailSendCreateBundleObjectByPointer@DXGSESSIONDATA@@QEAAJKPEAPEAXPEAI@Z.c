/*
 * XREFs of ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1402081EC
 * Callers:
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B61F0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1401F3564 (-SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1402075BC (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
        DXGSESSIONDATA *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  struct _EX_RUNDOWN_REF *v8; // rcx
  int BundleObjectByPointer; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v14[16]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 17002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 17002);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 17002);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_QWORD *)this + 2372) )
    ++*((_DWORD *)this + 4742);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v8 && ExAcquireRundownProtection(v8 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2372) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      BundleObjectByPointer = DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
                                *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2372) + 80LL),
                                a2,
                                a3,
                                a4);
      v10 = BundleObjectByPointer;
      if ( BundleObjectByPointer < 0 )
      {
        WdLogSingleEntry1(3LL, BundleObjectByPointer);
        WdLogGlobalForLineNumber = 2331;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL));
    }
    else
    {
      v10 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2334;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2372) + 64LL));
  }
  else
  {
    v10 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    WdLogGlobalForLineNumber = 2334;
  }
  if ( *((_QWORD *)this + 2372) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18920), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v16);
  return v10;
}
