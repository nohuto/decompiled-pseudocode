/*
 * XREFs of HvpExpandMap @ 0x1409695F8
 * Callers:
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpAllocateMap @ 0x14096C064 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x140A486DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpExpandMap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // ebp
  __int64 v12; // r12
  void *v14; // rax
  void *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // r13
  _QWORD *v19; // rax
  _QWORD *v20; // r15

  v4 = 0;
  v5 = a2;
  if ( a3 )
  {
    v8 = (a3 >> 12) - 1;
  }
  else
  {
    v14 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    memset_0(v14, 0, 0x3000uLL);
    v16 = (_QWORD *)(632 * v5 + a1 + 296);
    *(_QWORD *)(632 * v5 + a1 + 288) = v16;
    *v16 = v15;
    v8 = 0;
  }
  v9 = v5;
  v10 = v8 >> 9;
  v11 = ((a4 >> 12) - 1) >> 9;
  v12 = v5;
  if ( v11 <= v10 )
    return v4;
  if ( !v10 )
  {
    v17 = 632 * v5;
    v18 = (_QWORD *)(632 * v9 + a1 + 296);
    if ( *(_QWORD **)(632 * v9 + a1 + 288) == v18 )
    {
      v19 = (_QWORD *)guard_dispatch_icall_no_overrides(0x2000LL, 0LL);
      v20 = v19;
      if ( v19 )
      {
        memset_0(v19, 0, 0x2000uLL);
        *v20 = *v18;
        *(_QWORD *)(v17 + a1 + 288) = v20;
        goto LABEL_12;
      }
      return (unsigned int)-1073741801;
    }
  }
LABEL_12:
  if ( !(unsigned __int8)HvpAllocateMap(a1, *(_QWORD *)(632 * v12 + a1 + 288), v10 + 1, v11) )
  {
    v4 = -1073741801;
    HvpFreeMap(a1, *(_QWORD *)(632 * v12 + a1 + 288), v10 + 1, v11);
  }
  return v4;
}
