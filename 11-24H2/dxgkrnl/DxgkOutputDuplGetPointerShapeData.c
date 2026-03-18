/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1403D8910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402D5848 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  const void *v4; // rdx
  void *v5; // rax
  void *v6; // rdi
  void *v7; // r14
  int v8; // esi
  __int64 v9; // rax
  size_t v10; // r8
  ULONG64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+58h] [rbp-60h]
  char v19; // [rsp+60h] [rbp-58h]
  void *v20; // [rsp+68h] [rbp-50h]
  size_t Size[2]; // [rsp+70h] [rbp-48h] BYREF
  void *v22[2]; // [rsp+80h] [rbp-38h]
  __int128 v23; // [rsp+90h] [rbp-28h]
  __int64 v24; // [rsp+A0h] [rbp-18h]

  v3 = (void *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2065);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2065);
  *(_OWORD *)Size = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Size, v4, 0x38uLL);
  v5 = (void *)operator new[](LODWORD(Size[1]), 0x674D444Fu, 256LL);
  v6 = v5;
  v20 = v5;
  if ( v5 )
  {
    v7 = v22[0];
    v22[0] = v5;
    v8 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
           LODWORD(Size[0]),
           HIDWORD(Size[0]),
           (__int64)Size,
           (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v22[0] = v7;
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741789 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v3, Size, 0x38uLL);
    }
    if ( v8 >= 0 )
    {
      v9 = LODWORD(v22[1]);
      if ( LODWORD(v22[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v22[1]) )
          v9 = LODWORD(Size[1]);
        v10 = (unsigned int)v9;
        v11 = (ULONG64)v7 + v9;
        if ( v11 > MmUserProbeAddress || v11 <= (unsigned __int64)v7 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, v6, v10);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v17);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(6LL, LODWORD(Size[1]));
    WdLogGlobalForLineNumber = 3777;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Couldn't allocate buffer of size 0x%I64x for pointer shape kernel mode buffer",
      LODWORD(Size[1]),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
    return 3221225495LL;
  }
}
