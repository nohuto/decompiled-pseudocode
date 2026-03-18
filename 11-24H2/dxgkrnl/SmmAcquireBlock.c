/*
 * XREFs of SmmAcquireBlock @ 0x1400582C4
 * Callers:
 *     SmmAcquireBlock @ 0x1400582C4 (SmmAcquireBlock.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140095148 (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140286BC0 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmAcquireBlock @ 0x1400582C4 (SmmAcquireBlock.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x140095524 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1400955AC (SmmGetFreeBlockFromPool.c)
 *     SmmReleaseBlock @ 0x14009573C (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAcquireBlock(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r15d
  char v7; // bp
  __int64 v8; // r12
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r8

  v4 = (unsigned __int8)a2;
  v7 = a3;
  v8 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 > *(_BYTE *)(a1 + 1332) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int8)a2, (unsigned __int8)a3, a4);
    WdLogGlobalForLineNumber = 1075;
    return 0LL;
  }
  v10 = (_DWORD *)(a1 + 24LL * (unsigned __int8)a2);
  if ( !(_BYTE)a3 || (result = SmmGetFreeBlockFromPool(a1 + 24LL * (unsigned __int8)a2, a2, a4)) == 0 )
  {
    if ( *(_DWORD **)v10 != v10 && !v7 )
      return SmmGetAnyFreeBlockFromPool(v10);
    LOBYTE(a3) = v7;
    v11 = SmmAcquireBlock(a1, (unsigned int)(v4 + 1), a3, a4);
    v12 = (_QWORD *)v11;
    if ( !v11 )
      return 0LL;
    v13 = (_QWORD *)v11;
    v14 = operator new(0x28uLL, 0x36737844u, 64LL);
    v15 = (_QWORD *)v14;
    if ( !v14 )
    {
      _InterlockedIncrement(&dword_14016167C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1119;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate logical block",
        1119LL,
        0LL,
        0LL,
        0LL,
        0LL);
      SmmReleaseBlock(a1, v13);
      return 0LL;
    }
    v16 = v8 << 53;
    v17 = v16 & 0xFFEFFFFFFFFFFFFFuLL ^ (v12[4] ^ v16) & 0xF80FFFFFFFFFFFFFuLL;
    v12[4] = v17;
    *(_QWORD *)(v14 + 32) = v16 & 0x7E0000000000000LL ^ *(_QWORD *)(v14 + 32) & 0xF800000000000000uLL ^ (v17 + (1LL << v4)) & 0xFFFFFFFFFFFFFLL;
    v18 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
LABEL_22:
      __fastfail(3u);
    *v15 = v18;
    v15[1] = v12;
    *(_QWORD *)(v18 + 8) = v15;
    *v12 = v15;
    if ( v7 )
    {
      v19 = v15[4] & 0xFFFFFFFFFFFFFLL;
      if ( a4 < v19 || a4 >= (1LL << v4) + v19 )
      {
LABEL_20:
        v20 = *(_QWORD *)v10;
        v21 = v15 + 2;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
        {
          *v21 = v20;
          result = (__int64)v13;
          v21[1] = v10;
          *(_QWORD *)(v20 + 8) = v21;
          *(_QWORD *)v10 = v21;
          ++v10[4];
          return result;
        }
        goto LABEL_22;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    {
      goto LABEL_20;
    }
    v13 = v15;
    v15 = v12;
    goto LABEL_20;
  }
  return result;
}
