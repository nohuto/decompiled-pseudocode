/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1403E75C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rbx
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  signed __int16 v13; // cx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  char v18; // [rsp+60h] [rbp-18h]
  char v19; // [rsp+88h] [rbp+10h] BYREF

  v3 = (const void *)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2155);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2155);
  v4 = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  v7 = Current;
  if ( !Current )
  {
    v8 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5308;
    v9 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v16);
    }
    return (unsigned int)v8;
  }
  if ( *((_BYTE *)Current + 336) )
  {
    v8 = -1073741823LL;
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 5314;
    v9 = L"It is invalid to specify device removal support after device creation, returning 0x%I64x";
    goto LABEL_7;
  }
  v19 = 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v19, v3, 1uLL);
  v13 = 1;
  if ( !v19 )
    v13 = 2;
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)v7 + 280, v13, 0) )
  {
    v4 = -1073740528;
    WdLogSingleEntry1(2LL, -1073740528LL);
    WdLogGlobalForLineNumber = 5333;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device removal support has been specified before, returning 0x%I64x",
      -1073740528LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v16);
  return v4;
}
