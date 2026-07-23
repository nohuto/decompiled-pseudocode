/*
 * XREFs of MiReferenceIncomingPhysicalPages @ 0x140683C60
 * Callers:
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiGetAweViewPageSize @ 0x1404B4F9C (MiGetAweViewPageSize.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetAweNode @ 0x1404F2AEC (MiGetAweNode.c)
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiIncrementAweMapCount @ 0x140683750 (MiIncrementAweMapCount.c)
 */

__int64 __fastcall MiReferenceIncomingPhysicalPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 AweViewPageSize; // rax
  __int64 v14; // r9
  unsigned int v15; // r11d
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v20; // rax
  __int64 v21; // rbx
  bool v22; // cf
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // r8
  _QWORD *AweNode; // rax
  __int64 v26; // r8
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r9
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rbx
  int v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]
  __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int8 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+B0h] [rbp+18h]
  unsigned int VadCacheAttribute; // [rsp+C8h] [rbp+30h]

  v41 = a3;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = a3;
  v9 = a2;
  v10 = 0;
  v11 = *(_QWORD *)(a6 + 24);
  v37 = v11;
  v35 = *(_DWORD *)(v11 + 48) & 0x4200000;
  VadCacheAttribute = MiGetVadCacheAttribute(v11);
  v36 = v7;
  AweViewPageSize = MiGetAweViewPageSize(v12);
  v16 = a7;
  v17 = v7;
  if ( AweViewPageSize )
    v17 = AweViewPageSize;
  v18 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    v14 = v37;
    v15 = VadCacheAttribute;
  }
  if ( v8 )
  {
    v20 = a4;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v9 + 8 * v18);
      if ( !v20 )
        goto LABEL_31;
      if ( v21 )
        break;
      if ( (++v18 & 0x3F) != 0 )
        goto LABEL_24;
      v22 = v18 < v8;
      if ( v18 != v8 )
      {
        if ( KiIrqlFlags )
          goto LABEL_12;
        goto LABEL_13;
      }
LABEL_25:
      v14 = v37;
      v7 = v36;
      v15 = VadCacheAttribute;
      v9 = a2;
      if ( !v22 )
        goto LABEL_26;
    }
    v24 = *(_QWORD *)(v20 + 8 * v18);
    v16 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v24 < (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12
      || v24 > (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) )
    {
      AweNode = MiGetAweNode(v24);
      v26 = MiGetAweViewPageSize((__int64)AweNode);
      v28 = v7;
      if ( v26 )
        v28 = v26;
      if ( v28 != v17 )
        goto LABEL_22;
      v29 = *(_QWORD *)(v27 + 24);
      v37 = v29;
      if ( (*(_DWORD *)(v29 + 48) & 0x4200000) == 0x4200000 )
      {
        if ( v35 != 69206016 )
          goto LABEL_22;
      }
      else if ( v35 == 69206016 )
      {
        goto LABEL_22;
      }
      v31 = MiGetVadCacheAttribute(v29);
      v15 = VadCacheAttribute;
      if ( VadCacheAttribute != v31 )
        goto LABEL_22;
    }
LABEL_31:
    v32 = v21 & 0x7FFFFFFFFFFFFFFFLL;
    if ( ((v17 - 1) & v32) == 0 )
    {
      v33 = 0LL;
      if ( v10 < 0 )
      {
        if ( v17 )
        {
          do
          {
            MiDecrementAweMapCount(a1, v32, 2u, a5);
            v32 += v36;
            v33 += v36;
          }
          while ( v33 < v17 );
          CurrentIrql = v38;
          v8 = v41;
        }
      }
      else
      {
        while ( v33 < v17 )
        {
          v10 = MiIncrementAweMapCount(a1, v32, CurrentIrql, v15, v16);
          if ( v10 < 0 )
          {
            if ( v33 )
            {
              v34 = v32 - v33;
              do
              {
                v33 -= v36;
                MiDecrementAweMapCount(a1, v34 + v33, 2u, a5);
              }
              while ( v33 );
              CurrentIrql = v38;
            }
            goto LABEL_22;
          }
          v32 += v36;
          v33 += v36;
          v15 = VadCacheAttribute;
        }
      }
      ++v18;
      v16 += 8 * v17;
      if ( (v18 & 0x3F) == 0 && v18 != v8 )
      {
        if ( KiIrqlFlags )
LABEL_12:
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_13:
        __writecr8(CurrentIrql);
        v23 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v23, 2);
      }
LABEL_23:
      v20 = a4;
LABEL_24:
      v22 = v18 < v8;
      goto LABEL_25;
    }
LABEL_22:
    v16 = a7;
    v8 = v18;
    v41 = v18;
    v10 = -1073741800;
    v18 = 0LL;
    goto LABEL_23;
  }
LABEL_26:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (unsigned int)v10;
}
