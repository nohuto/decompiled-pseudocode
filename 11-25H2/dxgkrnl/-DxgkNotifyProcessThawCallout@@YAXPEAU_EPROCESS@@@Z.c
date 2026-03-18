/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x14039FC20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140226208 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x14039FDC8 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessDxgProcess; // rax
  int *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGGLOBAL *Global; // rax
  int v9; // [rsp+20h] [rbp-19h] BYREF
  __int64 v10; // [rsp+28h] [rbp-11h]
  char v11; // [rsp+30h] [rbp-9h]
  _BYTE v12[16]; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp+Fh] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+1Fh] BYREF

  v9 = -1;
  v10 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)PROCESS, (__int64)&EventProfilerEnter, a3, 2096);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2096);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v5 = (int *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x800) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( v5[122] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessThaw(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 206), v5[122]);
    }
    DXGPROCESS::NotifyProcessThaw((DXGPROCESS *)v5);
    KeUnstackDetachProcess(&ApcState);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v9);
  }
}
