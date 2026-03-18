/*
 * XREFs of ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021296C
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x14007A8C0 (-InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z @ 0x1401A06A8 (-DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 MemoryBasis; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rax
  unsigned int v22; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v23[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v24; // [rsp+60h] [rbp+7h]
  _OWORD v25[2]; // [rsp+68h] [rbp+Fh] BYREF

  v4 = *((_QWORD *)this + 23);
  v22 = 0;
  v6 = a2;
  v7 = 112LL * a2;
  v8 = *(_DWORD *)(v4 + v7 + 28);
  v9 = v4 + v7;
  v10 = operator new[](0x10uLL, 0x4B677844u, 256LL, a4);
  *(_DWORD *)(v9 + 64) = v8;
  *(_QWORD *)(v9 + 72) = 1LL;
  *(_QWORD *)(v9 + 80) = v10;
  v23[1] = 0;
  v11 = 0;
  v23[0] = v8;
  memset(v25, 0, sizeof(v25));
  v24 = 1LL;
  do
  {
    v12 = v11++;
    v13 = v12;
    v14 = *(_QWORD *)(*((_QWORD *)this + 23) + v7 + 8);
    *(_QWORD *)(v10 + 4 * v13) = v14;
    *(_QWORD *)(v10 + 4 * v13 + 8) = *(_QWORD *)(*((_QWORD *)this + 23) + v7 + 16);
    *(_QWORD *)&v25[v13] = v14;
    *((_QWORD *)&v25[v13] + 1) = *(_QWORD *)(v10 + 4 * v13 + 8);
  }
  while ( !v11 );
  MemoryBasis = ADAPTER_RENDER::DdiCreateMemoryBasis(
                  *((ADAPTER_RENDER **)this + 1),
                  (struct _DXGKARG_CREATEMEMORYBASIS *)v23,
                  v13 * 2);
  *(_QWORD *)(v9 + 96) = MemoryBasis;
  *(_DWORD *)(v9 + 104) = 1;
  if ( MemoryBasis )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 16LL) + 760LL)
                                                                                        + 8LL)
                                                                            + 1208LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 768LL),
            0LL,
            v8,
            &v22);
    v19 = v17;
    if ( v17 >= 0 )
    {
      result = DXGK_DIRTY_BITPLANE::InitializeBitplane(
                 (PRTL_BITMAP)(v9 + 32),
                 *(_QWORD *)(*((_QWORD *)this + 23) + v7 + 16),
                 v22,
                 v18);
      v20 = result;
      if ( (int)result < 0 )
      {
        WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)this + 23) + v7 + 16), v22, v6);
        v21 = *((_QWORD *)this + 23);
        WdLogGlobalForLineNumber = 1110;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"VF Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x Index: %d",
          *(_QWORD *)(v21 + v7 + 16),
          v22,
          v6,
          0LL,
          0LL);
        return v20;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 1099;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to Query Segment Dirty Bit Tracking Caps. Status: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1089;
  }
  return result;
}
