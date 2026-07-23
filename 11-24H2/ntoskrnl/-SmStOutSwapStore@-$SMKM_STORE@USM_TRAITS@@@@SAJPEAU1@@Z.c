/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403797D0
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1404861DC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140378128 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *Pool2; // r12
  __int64 v4; // rsi
  signed __int64 v5; // r14
  struct VLOCK *v6; // r13
  __int64 v7; // r15
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned __int64 v10; // r11
  _DWORD *v11; // rdx
  int v12; // r9d
  _DWORD *i; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 j; // rax
  unsigned int *v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct VLOCK *v28; // rcx
  int v29; // ebx
  unsigned int *v31; // r14
  __int64 v32; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-38h]
  PVOID v34; // [rsp+38h] [rbp-30h] BYREF
  __int64 v35; // [rsp+40h] [rbp-28h]
  __int128 v36; // [rsp+48h] [rbp-20h]
  __int64 v37; // [rsp+58h] [rbp-10h]
  int v38; // [rsp+B0h] [rbp+48h]
  int v39; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  P = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  Pool2 = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v5 = *(_QWORD *)(a1 + 7416);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7416), -1LL, v5) )
      return (unsigned int)-1073700861;
    if ( *(_QWORD *)v5 )
    {
      v7 = v5;
      v29 = -1073741791;
    }
    else
    {
      v6 = (struct VLOCK *)(a1 + 6840);
      P = (PVOID)v5;
      v38 = 1;
      v7 = 0LL;
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, (unsigned int)(4 * *(_DWORD *)(a1 + 7020)), 0x77536D73u);
      if ( !Pool2 )
      {
        v29 = -1073741670;
LABEL_31:
        StLockReleaseShared(v6);
LABEL_32:
        if ( v7 == -1 )
          goto LABEL_33;
        goto LABEL_42;
      }
      v39 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v5 + 8);
        if ( v8 <= v1 )
          break;
        v9 = 0;
        v40 = *(_QWORD *)(v5 + 16);
        v10 = v40 + 4 * ((unsigned __int64)(v8 - 1) >> 5);
        v11 = (_DWORD *)(v40 + 4 * ((unsigned __int64)v1 >> 5));
        v12 = ((1 << (v1 & 0x1F)) - 1) | *v11;
        for ( i = v11 + 1; ; ++i )
        {
          v14 = (unsigned int)~v12;
          if ( (_DWORD)v14 )
            break;
          if ( (unsigned __int64)i > v10 )
            goto LABEL_47;
          v12 = *++v11;
        }
        _BitScanForward64((unsigned __int64 *)&v15, (unsigned int)v14);
        v1 = v15 + 32 * (((__int64)v11 - v40) >> 2);
        if ( v1 > v8 )
        {
LABEL_47:
          v1 = v8;
          goto LABEL_20;
        }
        for ( j = ~((unsigned int)v14 | ((1 << v15) - 1)); ; j = *v17 )
        {
          if ( (_DWORD)j )
          {
            _BitScanForward64(&j, j);
            goto LABEL_17;
          }
          v17 = v11 + 1;
          if ( (unsigned __int64)(v11 + 1) > v10 )
            break;
          ++v11;
        }
        LODWORD(j) = 32;
LABEL_17:
        v18 = j + 32 * (((__int64)v11 - v40) >> 2);
        if ( v18 > v8 )
          v18 = v8;
        v9 = v18 - v1;
LABEL_20:
        if ( !v9 )
          break;
        v19 = v9 + v1;
        LODWORD(v40) = v9 + v1;
        while ( v1 < v19 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v1);
          if ( (v20 & 0x7FFFFFFFFFFF0000LL) != 0 && v20 >= 0 )
          {
            v35 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v14, 4);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v4, v21, &v39, &v34) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v22, v14, v32, 2u);
              v28 = (struct VLOCK *)(a1 + 6840);
              v29 = -1073741670;
              goto LABEL_29;
            }
            v23 = v34;
            v24 = v35;
            Pool2[v4] = v1;
            v25 = 2LL * (unsigned int)v4;
            v4 = (unsigned int)(v4 + 1);
            v23[v25] = v24;
            v23[v25 + 1] = *(unsigned int *)(a1 + 7016);
          }
          v19 = v40;
          ++v1;
        }
      }
      StLockReleaseShared((struct VLOCK *)(a1 + 6840));
      v38 = 0;
      if ( (_DWORD)v4 )
      {
        *((_QWORD *)&v36 + 1) = v34;
        v37 = (unsigned int)v4;
        v29 = MmOutSwapVirtualAddresses(KeGetCurrentThread()->ApcState.Process);
        v28 = (struct VLOCK *)(a1 + 6840);
        if ( v29 < 0 )
        {
LABEL_29:
          v6 = v28;
          if ( !(_DWORD)v4 )
            goto LABEL_30;
          P = (PVOID)v5;
          if ( v38 )
          {
LABEL_51:
            v31 = Pool2;
            do
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v31++, v26, v27, v32, 2u);
              --v4;
            }
            while ( v4 );
LABEL_30:
            if ( !v38 )
              goto LABEL_32;
            goto LABEL_31;
          }
        }
        else
        {
          v7 = v5;
          *(_QWORD *)v5 = v36;
          P = 0LL;
          v29 = 0;
        }
        v38 = 1;
        StLockAcquireShared(v28);
        goto LABEL_51;
      }
      v29 = -1073741607;
    }
LABEL_42:
    _InterlockedExchange64((volatile __int64 *)(a1 + 7416), v7);
LABEL_33:
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_35;
  }
  v29 = -1073700861;
LABEL_35:
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v29;
}
