/*
 * XREFs of DxgkOutputDuplReleaseFrame @ 0x1402E5F60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E6144 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 */

__int64 __fastcall DxgkOutputDuplReleaseFrame(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  int v5; // ebx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  char v12; // [rsp+30h] [rbp-28h]
  unsigned int v13[2]; // [rsp+38h] [rbp-20h] BYREF
  int Src; // [rsp+40h] [rbp-18h] BYREF

  v10 = -1;
  v11 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2072;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2072);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2072);
  *(_QWORD *)v13 = 0LL;
  Src = 0;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v13, v4, 0xCuLL);
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunThunk(v13[0]);
  if ( v5 >= 0 )
  {
    v6 = (void *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v6 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v6, &Src, 4uLL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v10);
  return (unsigned int)v5;
}
