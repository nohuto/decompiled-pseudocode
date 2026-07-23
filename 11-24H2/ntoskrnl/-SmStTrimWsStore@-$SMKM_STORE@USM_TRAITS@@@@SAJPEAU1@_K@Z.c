/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402F7648
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404AEC1C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402F73C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r15
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  unsigned int v9; // r12d
  unsigned int v10; // r9d
  unsigned int v11; // esi
  unsigned int v12; // r10d
  __int64 v13; // r15
  unsigned int v14; // r8d
  unsigned __int64 v15; // r11
  _DWORD *v16; // rdx
  int v17; // r9d
  _DWORD *i; // rax
  __int64 v19; // rcx
  unsigned __int64 j; // rax
  unsigned int *v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v30; // [rsp+20h] [rbp-A9h]
  unsigned int v31; // [rsp+30h] [rbp-99h]
  _QWORD *v32; // [rsp+38h] [rbp-91h]
  _QWORD *k; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-81h]
  _OWORD v35[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v36[8]; // [rsp+80h] [rbp-49h] BYREF
  PVOID v37[8]; // [rsp+A0h] [rbp-29h] BYREF

  v34 = a2;
  v2 = a2;
  memset(v35, 0, sizeof(v35));
  memset_0(v37, 0, sizeof(v37));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 7432), 0, (__int64)v35);
  if ( (*(_BYTE *)(a1 + 6837) & 8) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 7416), -1LL);
    k = v6;
    if ( v6 == (_QWORD *)-1LL )
    {
      v7 = -1073740682;
    }
    else
    {
      v7 = 0;
      if ( !v6 || !*v6 || (v8 = v6 + 1, v2) )
        v8 = 0LL;
      v32 = v8;
      v9 = 0;
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      if ( v8 )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 <= v11 )
            break;
          v13 = v8[1];
          v14 = 0;
          v15 = v13 + 4 * ((unsigned __int64)(v12 - 1) >> 5);
          v16 = (_DWORD *)(v13 + 4 * ((unsigned __int64)v11 >> 5));
          v17 = ((1 << (v11 & 0x1F)) - 1) | *v16;
          for ( i = v16 + 1; ; ++i )
          {
            v10 = ~v17;
            if ( v10 )
              break;
            if ( (unsigned __int64)i > v15 )
              goto LABEL_51;
            v17 = *++v16;
          }
          _BitScanForward64((unsigned __int64 *)&v19, v10);
          v11 = v19 + 32 * (((__int64)v16 - v13) >> 2);
          if ( v11 > v12 )
          {
LABEL_51:
            v11 = *(_DWORD *)v8;
            goto LABEL_21;
          }
          for ( j = ~(v10 | ((1 << v19) - 1)); ; j = *v21 )
          {
            if ( (_DWORD)j )
            {
              _BitScanForward64(&j, j);
              goto LABEL_18;
            }
            v21 = v16 + 1;
            if ( (unsigned __int64)(v16 + 1) > v15 )
              break;
            ++v16;
          }
          LODWORD(j) = 32;
LABEL_18:
          v22 = j + 32 * (((__int64)v16 - v13) >> 2);
          if ( v22 > v12 )
            v22 = *(_DWORD *)v8;
          v14 = v22 - v11;
LABEL_21:
          if ( !v14 )
            break;
          v31 = v14 + v11;
          if ( v11 < v14 + v11 )
          {
            v27 = 8LL * v11;
            do
            {
              v28 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + v27);
              if ( (v28 & 0x7FFFFFFFFFFF0000LL) != 0 && v28 >= 0 )
              {
                v29 = v9;
                v36[v9++] = v11;
                v37[v29] = (PVOID)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v11, 0, v10, 4);
                if ( v9 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, v36, v37, 8u, v30, 0LL);
                  v9 = 0;
                }
              }
              ++v11;
              v27 += 8LL;
            }
            while ( v11 < v31 );
            v8 = v32;
          }
        }
        v6 = k;
        v2 = v34;
      }
      v23 = 0;
      for ( k = v2; v23 < *(_DWORD *)(a1 + 7020); ++v23 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v23);
        if ( (v24 & 0x7FFFFFFFFFFF0000LL) != 0 && v24 >= 0 && (!v8 || _bittest64((const signed __int64 *)v8[1], v23)) )
        {
          v26 = v9;
          v36[v9++] = v23;
          v37[v26] = (PVOID)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v23, 0, v10, 4);
          if ( v9 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              v36,
              v37,
              8u,
              v30,
              (_QWORD *)((unsigned __int64)&k & -(__int64)(v2 != 0LL)));
            v9 = 0;
            if ( v2 )
            {
              if ( !k )
                goto LABEL_28;
            }
          }
          v8 = v32;
        }
      }
      if ( v9 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          v36,
          v37,
          v9,
          v30,
          (_QWORD *)((unsigned __int64)&k & -(__int64)(v2 != 0LL)));
LABEL_28:
      StLockReleaseShared((struct VLOCK *)(a1 + 6840));
      _InterlockedExchange64((volatile __int64 *)(a1 + 7416), (__int64)v6);
    }
  }
  KiUnstackDetachProcess((__int64)v35, 0, v4, v5);
  return v7;
}
