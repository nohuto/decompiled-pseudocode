/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x140305E20
 * Callers:
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x140306208 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031440 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v7; // rbp
  struct DXGTHREAD *v8; // rsi
  int v9; // r15d
  __int64 v10; // rdi
  __int64 PrivateDriverDataSize; // rcx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  KIRQL v16; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h]
  char v20; // [rsp+68h] [rbp-70h]
  _BYTE v21[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5022);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 5022);
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_BYTE *)Global + 1624)
    && (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)Global + 1620),
                          this) )
  {
    LODWORD(v10) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1201);
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v8 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v8 = DxgThread) != 0LL)) )
    {
      v9 = *((_DWORD *)v8 + 12);
    }
    else
    {
      v9 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21, this);
    v10 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 74))(*((_QWORD *)this + 36), a2);
    if ( v21[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v16 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
      WdLogGlobalForLineNumber = 2524;
    }
    if ( v8 && *((_DWORD *)v8 + 12) != v9 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v9, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1201);
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize <= 4 )
      v12 = 0;
    else
      v12 = *(_DWORD *)a2->pPrivateDriverData;
    WdLogSingleEntry5(4LL, v10, *((_QWORD *)this + 36), a2->hDevice, PrivateDriverDataSize, v12);
    WdLogGlobalForLineNumber = 2531;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == -1073741823 )
      {
        WdLogSingleEntry1(4LL, -1073741823LL);
        WdLogGlobalForLineNumber = 2539;
      }
      else if ( (_DWORD)v10 != -1073741811
             && (_DWORD)v10 != -1073741801
             && (_DWORD)v10 != -1073741795
             && (_DWORD)v10 != -1073741674 )
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 2533;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGADAPTER::ReleaseDdiSync(this);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v18);
  return (unsigned int)v10;
}
