/*
 * XREFs of DxgkCloseAdapterImpl @ 0x14031DF20
 * Callers:
 *     DxgkCloseAdapterInternal @ 0x1401A99F0 (DxgkCloseAdapterInternal.c)
 *     DxgkCloseAdapter @ 0x14031DF00 (DxgkCloseAdapter.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x140342220 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkCloseAdapterImpl(__int64 a1, char a2, __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  struct DXGPROCESS *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  char v19; // [rsp+60h] [rbp-18h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v4 = (_DWORD *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2002);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2002);
  v20 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v20, v4, 4uLL);
  }
  else
  {
    v20 = *v4;
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v9 )
        goto LABEL_10;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v9 )
        goto LABEL_10;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = v8;
  if ( !v8 )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1767;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
LABEL_10:
  v10 = DXGADAPTER::DestroyHandle(v9, v20);
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v17);
  return v10;
}
