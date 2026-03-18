/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x140101CD0
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400D4C5C (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1400F6B40 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140101E64 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  struct VIDMM_GLOBAL_ALLOC *v5; // rdi
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  int v22; // eax
  unsigned int v23; // ecx

  v5 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  VIDMM_GLOBAL::MarkGlobalAllocation(*(VIDMM_GLOBAL **)(a1 + 24), *(struct VIDMM_GLOBAL_ALLOC **)a2);
  *((_DWORD *)v5 + 7) |= 0x40u;
  v10 = *(unsigned __int64 **)(a2 + 80);
  v11 = *v10;
  v12 = v10[4];
  v13 = *v10 + v10[1];
  v14 = *(_QWORD *)(a1 + 208) + 48LL;
  while ( v12 != v14 )
  {
    v15 = *(_QWORD *)(v12 - 24);
    v16 = *(_QWORD *)(v12 - 24 + 8);
    v12 = *(_QWORD *)(v12 - 24 + 32);
    if ( v15 + v16 != v11 )
      break;
    v11 = v15;
  }
  v17 = (_QWORD *)v10[3];
  while ( v17 != (_QWORD *)v14 )
  {
    v18 = v17 - 3;
    v17 = (_QWORD *)*v17;
    if ( *v18 != v13 )
      break;
    v13 = *v18 + v18[1];
  }
  v19 = v13 - v11;
  if ( a5 && v11 % a5 )
  {
    v20 = a5 - v11 % a5;
    if ( v19 < v20 )
      return 3221225473LL;
    v19 -= v20;
  }
  if ( (a3 & 4) != 0 )
    return 3221225473LL;
  if ( (a3 & 1) != 0 && v19 >= a4 )
    return 0LL;
  if ( (a3 & 2) == 0 )
    return 3221225473LL;
  v22 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, 0LL, a4);
  v23 = -1073741823;
  if ( v22 >= 0 )
    return 0;
  return v23;
}
