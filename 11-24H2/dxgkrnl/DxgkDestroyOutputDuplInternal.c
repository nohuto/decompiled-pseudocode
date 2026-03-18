/*
 * XREFs of DxgkDestroyOutputDuplInternal @ 0x140184944
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1403D1220 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyOutputDupl @ 0x1403FF7D0 (DxgkDestroyOutputDupl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403B8D30 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
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
  if ( (qword_14015E4B0 & 2) != 0 )
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
      WdLogGlobalForLineNumber = 3424;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(ULONG_PTR)pDestroy > MM_USER_PROBE_ADDRESS",
        3424LL,
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
