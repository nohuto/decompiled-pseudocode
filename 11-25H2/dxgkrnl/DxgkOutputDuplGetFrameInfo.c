/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x140302940
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x140302B10 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  const void *v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  char v11; // [rsp+30h] [rbp-58h]
  _OWORD Src[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+68h] [rbp-20h]

  v3 = (void *)a1;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2063);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2063);
  memset(Src, 0, sizeof(Src));
  v13 = 0LL;
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v4, 0x38uLL);
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunThunk(Src[0]);
  if ( v5 >= 0 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v3, Src, 0x38uLL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v9);
  return (unsigned int)v5;
}
