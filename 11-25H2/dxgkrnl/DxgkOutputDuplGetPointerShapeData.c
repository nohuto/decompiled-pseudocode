/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1402E5440
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402E65A4 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  const void *v4; // rdx
  __int64 v5; // r9
  void *v6; // rax
  void *v7; // rdi
  void *v8; // r14
  int v9; // esi
  __int64 v10; // rax
  size_t v11; // r8
  ULONG64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+58h] [rbp-60h]
  char v20; // [rsp+60h] [rbp-58h]
  void *v21; // [rsp+68h] [rbp-50h]
  size_t Size[2]; // [rsp+70h] [rbp-48h] BYREF
  void *v23[2]; // [rsp+80h] [rbp-38h]
  __int128 v24; // [rsp+90h] [rbp-28h]
  __int64 v25; // [rsp+A0h] [rbp-18h]

  v3 = (void *)a1;
  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2065);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2065);
  *(_OWORD *)Size = 0LL;
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Size, v4, 0x38uLL);
  v6 = (void *)operator new[](LODWORD(Size[1]), 0x674D444Fu, 256LL, v5);
  v7 = v6;
  v21 = v6;
  if ( v6 )
  {
    v8 = v23[0];
    v23[0] = v6;
    v9 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(Size[0]);
    v23[0] = v8;
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v3, Size, 0x38uLL);
    }
    if ( v9 >= 0 )
    {
      v10 = LODWORD(v23[1]);
      if ( LODWORD(v23[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v23[1]) )
          v10 = LODWORD(Size[1]);
        v11 = (unsigned int)v10;
        v12 = (ULONG64)v8 + v10;
        if ( v12 > MmUserProbeAddress || v12 <= (unsigned __int64)v8 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, v7, v11);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v18);
    }
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry1(6LL, LODWORD(Size[1]));
    WdLogGlobalForLineNumber = 3771;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Couldn't allocate buffer of size 0x%I64x for pointer shape kernel mode buffer",
      LODWORD(Size[1]),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
    return 3221225495LL;
  }
}
