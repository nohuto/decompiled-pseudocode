/*
 * XREFs of DxgkDestroyOutputDuplInternal @ 0x140182494
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1402FB340 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyOutputDupl @ 0x140406EC0 (DxgkDestroyOutputDupl.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403C42F0 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
 */

__int64 __fastcall DxgkDestroyOutputDuplInternal(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  char v11; // [rsp+60h] [rbp-28h]
  unsigned int v12[2]; // [rsp+68h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v4 = (_DWORD *)a1;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2062);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2062);
  *(_QWORD *)v12 = 0LL;
  v13 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 <= MmUserProbeAddress )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3418;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(ULONG_PTR)pDestroy > MM_USER_PROBE_ADDRESS",
        3418LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v12 = *(_QWORD *)v4;
    v13 = v4[2];
  }
  else
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v12, v4, 0xCuLL);
  }
  v5 = OutputDuplThunks<_D3DKMT_DESTROY_OUTPUTDUPL *>::RunThunk(v12[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v9);
  return v5;
}
