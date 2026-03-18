/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037FE90
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14048B408 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E408 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmArrayGrow @ 0x140380C70 (SmArrayGrow.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x140399948 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14039B2D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14039B930 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14039BF08 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *Pool2; // r12
  __int64 v4; // rsi
  signed __int64 v5; // r14
  ULONG_PTR v6; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned __int64 v11; // r11
  int v12; // r9d
  unsigned __int64 i; // rax
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 j; // rax
  unsigned int *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  struct VLOCK *v26; // rcx
  int v27; // ebx
  _DWORD *v29; // r14
  int v30; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-38h]
  PVOID v32; // [rsp+38h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-28h]
  __int128 v34; // [rsp+48h] [rbp-20h]
  __int64 v35; // [rsp+58h] [rbp-10h]
  int v36; // [rsp+B0h] [rbp+48h]
  int v37; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  P = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  Pool2 = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((union _SLIST_HEADER *)a1);
  v5 = *(_QWORD *)(a1 + 7416);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7416), -1LL, v5) )
      return (unsigned int)-1073700861;
    if ( *(_QWORD *)v5 )
    {
      v7 = v5;
      v27 = -1073741791;
    }
    else
    {
      v6 = a1 + 6840;
      P = (PVOID)v5;
      v36 = 1;
      v7 = 0LL;
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
      {
        v27 = -1073741670;
LABEL_31:
        StLockReleaseShared(v6, v8);
LABEL_32:
        if ( v7 == -1 )
          goto LABEL_33;
        goto LABEL_42;
      }
      v37 = 0;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v5 + 8);
        if ( v9 <= v1 )
          break;
        v10 = 0;
        v38 = *(_QWORD *)(v5 + 16);
        v11 = v38 + 4 * ((unsigned __int64)(v9 - 1) >> 5);
        v8 = v38 + 4 * ((unsigned __int64)v1 >> 5);
        v12 = ((1 << (v1 & 0x1F)) - 1) | *(_DWORD *)v8;
        for ( i = v8 + 4; ; i += 4LL )
        {
          v14 = ~v12;
          if ( v14 )
            break;
          if ( i > v11 )
            goto LABEL_47;
          v8 += 4LL;
          v12 = *(_DWORD *)v8;
        }
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        v1 = v15 + 32 * ((v8 - v38) >> 2);
        if ( v1 > v9 )
        {
LABEL_47:
          v1 = v9;
          goto LABEL_20;
        }
        for ( j = ~(v14 | ((1 << v15) - 1)); ; j = *v17 )
        {
          if ( (_DWORD)j )
          {
            _BitScanForward64(&j, j);
            goto LABEL_17;
          }
          v17 = (unsigned int *)(v8 + 4);
          if ( v8 + 4 > v11 )
            break;
          v8 += 4LL;
        }
        LODWORD(j) = 32;
LABEL_17:
        v8 -= v38;
        v18 = j + 32 * (v8 >> 2);
        if ( v18 > v9 )
          v18 = v9;
        v10 = v18 - v1;
LABEL_20:
        if ( !v10 )
          break;
        v19 = v10 + v1;
        LODWORD(v38) = v10 + v1;
        while ( v1 < v19 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v1);
          if ( (v8 & 0x7FFFFFFFFFFF0000LL) != 0 && v8 >= 0 )
          {
            v33 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v14, 4);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v4, v20, &v37, &v32) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v21, v14, v30, 2);
              v26 = (struct VLOCK *)(a1 + 6840);
              v27 = -1073741670;
              goto LABEL_29;
            }
            v8 = (__int64)v32;
            v22 = v33;
            Pool2[v4] = v1;
            v23 = 2LL * (unsigned int)v4;
            v4 = (unsigned int)(v4 + 1);
            *(_QWORD *)(v8 + 8 * v23) = v22;
            *(_QWORD *)(v8 + 8 * v23 + 8) = *(unsigned int *)(a1 + 7016);
          }
          v19 = v38;
          ++v1;
        }
      }
      StLockReleaseShared(a1 + 6840, v8);
      v36 = 0;
      if ( (_DWORD)v4 )
      {
        *((_QWORD *)&v34 + 1) = v32;
        v35 = (unsigned int)v4;
        v27 = MmOutSwapVirtualAddresses(KeGetCurrentThread()->ApcState.Process);
        v26 = (struct VLOCK *)(a1 + 6840);
        if ( v27 < 0 )
        {
LABEL_29:
          v6 = (ULONG_PTR)v26;
          if ( !(_DWORD)v4 )
            goto LABEL_30;
          P = (PVOID)v5;
          if ( v36 )
          {
LABEL_51:
            v29 = Pool2;
            do
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v29++, v24, v25, v30, 2);
              --v4;
            }
            while ( v4 );
LABEL_30:
            if ( !v36 )
              goto LABEL_32;
            goto LABEL_31;
          }
        }
        else
        {
          v7 = v5;
          *(_QWORD *)v5 = v34;
          P = 0LL;
          v27 = 0;
        }
        v36 = 1;
        StLockAcquireShared(v26);
        goto LABEL_51;
      }
      v27 = -1073741607;
    }
LABEL_42:
    _InterlockedExchange64((volatile __int64 *)(a1 + 7416), v7);
LABEL_33:
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_35;
  }
  v27 = -1073700861;
LABEL_35:
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v27;
}
