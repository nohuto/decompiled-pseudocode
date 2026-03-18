/*
 * XREFs of SmmAcquireBlock @ 0x140058844
 * Callers:
 *     SmmAcquireBlock @ 0x140058844 (SmmAcquireBlock.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140092C44 (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14027F850 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmAcquireBlock @ 0x140058844 (SmmAcquireBlock.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x140093020 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1400930A8 (SmmGetFreeBlockFromPool.c)
 *     SmmReleaseBlock @ 0x140093238 (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAcquireBlock(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r15d
  char v7; // bp
  __int64 v8; // r12
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r8

  v4 = (unsigned __int8)a2;
  v7 = a3;
  v8 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 > *(_BYTE *)(a1 + 1324) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int8)a2, (unsigned __int8)a3, a4);
    WdLogGlobalForLineNumber = 1070;
    return 0LL;
  }
  v10 = (_DWORD *)(a1 + 24LL * (unsigned __int8)a2);
  if ( !(_BYTE)a3 || (result = SmmGetFreeBlockFromPool(a1 + 24LL * (unsigned __int8)a2, a2, a4)) == 0 )
  {
    if ( *(_DWORD **)v10 != v10 && !v7 )
      return SmmGetAnyFreeBlockFromPool(v10);
    LOBYTE(a3) = v7;
    v11 = SmmAcquireBlock(a1, (unsigned int)(v4 + 1), a3, a4);
    v13 = (_QWORD *)v11;
    if ( !v11 )
      return 0LL;
    v14 = (_QWORD *)v11;
    v15 = operator new(0x28uLL, 0x36737844u, 64LL, v12);
    v16 = (_QWORD *)v15;
    if ( !v15 )
    {
      _InterlockedIncrement(&dword_14015E66C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1114;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate logical block",
        1114LL,
        0LL,
        0LL,
        0LL,
        0LL);
      SmmReleaseBlock(a1, v14);
      return 0LL;
    }
    v17 = v8 << 53;
    v18 = v17 & 0xFFEFFFFFFFFFFFFFuLL ^ (v13[4] ^ v17) & 0xF80FFFFFFFFFFFFFuLL;
    v13[4] = v18;
    *(_QWORD *)(v15 + 32) = v17 & 0x7E0000000000000LL ^ *(_QWORD *)(v15 + 32) & 0xF800000000000000uLL ^ (v18 + (1LL << v4)) & 0xFFFFFFFFFFFFFLL;
    v19 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
LABEL_22:
      __fastfail(3u);
    *v16 = v19;
    v16[1] = v13;
    *(_QWORD *)(v19 + 8) = v16;
    *v13 = v16;
    if ( v7 )
    {
      v20 = v16[4] & 0xFFFFFFFFFFFFFLL;
      if ( a4 < v20 || a4 >= (1LL << v4) + v20 )
      {
LABEL_20:
        v21 = *(_QWORD *)v10;
        v22 = v16 + 2;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
        {
          *v22 = v21;
          result = (__int64)v14;
          v22[1] = v10;
          *(_QWORD *)(v21 + 8) = v22;
          *(_QWORD *)v10 = v22;
          ++v10[4];
          return result;
        }
        goto LABEL_22;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1320) & 1) == 0 )
    {
      goto LABEL_20;
    }
    v14 = v16;
    v16 = v13;
    goto LABEL_20;
  }
  return result;
}
