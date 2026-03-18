/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1402E5C50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E5E70 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  const void *v4; // rdx
  void *v5; // rsi
  int v6; // edi
  const void *v7; // r15
  __int64 v8; // rax
  size_t v9; // r8
  ULONG64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF
  void *v18[2]; // [rsp+48h] [rbp-20h]

  v3 = (void *)a1;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2064);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2064);
  Src = 0LL;
  *(_OWORD *)v18 = 0LL;
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v4, 0x20uLL);
  v5 = v18[0];
  LODWORD(v18[1]) = 0;
  v18[0] = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunThunk(Src);
  v7 = v18[0];
  v18[0] = v5;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v3, &Src, 0x20uLL);
  }
  if ( v6 >= 0 )
  {
    v8 = LODWORD(v18[1]);
    if ( LODWORD(v18[1]) )
    {
      if ( HIDWORD(Src) < LODWORD(v18[1]) )
        v8 = HIDWORD(Src);
      v9 = (unsigned int)v8;
      v10 = (ULONG64)v5 + v8;
      if ( v10 <= (unsigned __int64)v5 || v10 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v7, v9);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v14);
  return (unsigned int)v6;
}
