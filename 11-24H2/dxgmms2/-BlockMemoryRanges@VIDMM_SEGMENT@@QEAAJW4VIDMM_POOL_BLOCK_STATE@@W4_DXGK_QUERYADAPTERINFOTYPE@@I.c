/*
 * XREFs of ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009DDE4
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004B5E4 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x14009F7D4 (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 *     ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400A01E0 (-MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  __int64 v7; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _WORD v20[2]; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp+3h]
  struct _DXGK_MEMORYRANGE *v22; // [rsp+60h] [rbp+7h]
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+68h] [rbp+Fh] BYREF

  v5 = 0;
  v7 = a3;
  v9 = a2;
  if ( !a4 )
    return v5;
  v10 = 16LL * a4;
  if ( !is_mul_ok(a4, 0x10uLL) )
    v10 = -1LL;
  v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, 256LL);
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1400816C4);
    WdLogSingleEntry2(6LL, (unsigned int)v9, -1073741801LL);
    WdLogGlobalForLineNumber = 714;
    DxgkLogInternalTriageEvent(v12, 262145LL);
    return 3221225495LL;
  }
  v20[0] = *(_WORD *)(a1 + 40);
  v20[1] = *(_WORD *)(a1 + 420);
  *(_QWORD *)&v23.Type = 0LL;
  v23.pInputData = v20;
  v14 = *(_QWORD *)(a1 + 24);
  memset(&v23.InputDataSize, 0, 32);
  v21 = a4;
  v22 = v11;
  v23.InputDataSize = 16;
  v23.Type = v7;
  v15 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v14 + 24), &v23);
  v5 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(1LL, v7, v15);
    WdLogGlobalForLineNumber = 733;
LABEL_12:
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    goto LABEL_13;
  }
  v17 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v11, a5);
  v5 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v17);
    WdLogGlobalForLineNumber = 743;
    goto LABEL_12;
  }
  LOBYTE(v18) = v9;
  v19 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 208), v18, a4, v11);
  v5 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v19);
    WdLogGlobalForLineNumber = 753;
    goto LABEL_12;
  }
LABEL_13:
  operator delete(v11);
  return v5;
}
