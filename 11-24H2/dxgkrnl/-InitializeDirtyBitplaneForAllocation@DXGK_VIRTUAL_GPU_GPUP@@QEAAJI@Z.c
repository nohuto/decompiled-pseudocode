/*
 * XREFs of ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140218F8C
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x14007ADA0 (-InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z @ 0x1401A2BC4 (-DdiCreateMemoryBasis@ADAPTER_RENDER@@QEAAPEAXPEAU_DXGKARG_CREATEMEMORYBASIS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::InitializeDirtyBitplaneForAllocation(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 MemoryBasis; // rax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v20[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h]
  _OWORD v22[2]; // [rsp+68h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)this + 23);
  v19 = 0;
  v4 = a2;
  v5 = 112LL * a2;
  v6 = *(_DWORD *)(v2 + v5 + 28);
  v7 = v2 + v5;
  v8 = operator new[](0x10uLL, 0x4B677844u, 256LL);
  *(_DWORD *)(v7 + 64) = v6;
  *(_QWORD *)(v7 + 72) = 1LL;
  *(_QWORD *)(v7 + 80) = v8;
  v20[1] = 0;
  v9 = 0;
  v20[0] = v6;
  memset(v22, 0, sizeof(v22));
  v21 = 1LL;
  do
  {
    v10 = v9++;
    v11 = v10;
    v12 = *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 8);
    *(_QWORD *)(v8 + 4 * v11) = v12;
    *(_QWORD *)(v8 + 4 * v11 + 8) = *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16);
    *(_QWORD *)&v22[v11] = v12;
    *((_QWORD *)&v22[v11] + 1) = *(_QWORD *)(v8 + 4 * v11 + 8);
  }
  while ( !v9 );
  MemoryBasis = ADAPTER_RENDER::DdiCreateMemoryBasis(
                  *((ADAPTER_RENDER **)this + 1),
                  (struct _DXGKARG_CREATEMEMORYBASIS *)v20,
                  v11 * 2);
  *(_QWORD *)(v7 + 96) = MemoryBasis;
  *(_DWORD *)(v7 + 104) = 1;
  if ( MemoryBasis )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 16LL) + 760LL)
                                                                                        + 8LL)
                                                                            + 1208LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 768LL),
            0LL,
            v6,
            &v19);
    v16 = v15;
    if ( v15 >= 0 )
    {
      result = DXGK_DIRTY_BITPLANE::InitializeBitplane(
                 (PRTL_BITMAP)(v7 + 32),
                 *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16),
                 v19);
      v17 = result;
      if ( (int)result < 0 )
      {
        WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 16), v19, v4);
        v18 = *((_QWORD *)this + 23);
        WdLogGlobalForLineNumber = 1110;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VF Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x Index: %d",
          *(_QWORD *)(v18 + v5 + 16),
          v19,
          v4,
          0LL,
          0LL);
        return v17;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 1099;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to Query Segment Dirty Bit Tracking Caps. Status: 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v16;
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
