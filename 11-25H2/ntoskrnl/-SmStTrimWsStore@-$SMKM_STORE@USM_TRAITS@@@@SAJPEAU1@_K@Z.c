/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020AC98
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404B4ABC (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14020A29C (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14020AA10 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14020C270 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14020C858 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  _QWORD *v4; // r15
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  unsigned int v8; // r9d
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // r15
  unsigned int v12; // r8d
  unsigned __int64 v13; // r11
  _DWORD *v14; // rdx
  int v15; // r9d
  _DWORD *i; // rax
  __int64 v17; // rcx
  unsigned __int64 j; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // [rsp+20h] [rbp-A9h]
  unsigned int v29; // [rsp+30h] [rbp-99h]
  _QWORD *v30; // [rsp+38h] [rbp-91h]
  _QWORD *k; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-81h]
  _OWORD v33[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v34[8]; // [rsp+80h] [rbp-49h] BYREF
  PVOID v35[8]; // [rsp+A0h] [rbp-29h] BYREF

  v32 = a2;
  v2 = a2;
  memset(v33, 0, sizeof(v33));
  memset_0(v35, 0, sizeof(v35));
  KiStackAttachProcess(*(_QWORD *)(a1 + 7432));
  if ( (*(_BYTE *)(a1 + 6837) & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 7416), -1LL);
    k = v4;
    if ( v4 == (_QWORD *)-1LL )
    {
      v5 = -1073740682;
    }
    else
    {
      v5 = 0;
      if ( !v4 || !*v4 || (v6 = v4 + 1, v2) )
        v6 = 0LL;
      v30 = v6;
      v7 = 0;
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      if ( v6 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = *(_DWORD *)v6;
          if ( *(_DWORD *)v6 <= v9 )
            break;
          v11 = v6[1];
          v12 = 0;
          v13 = v11 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
          v14 = (_DWORD *)(v11 + 4 * ((unsigned __int64)v9 >> 5));
          v15 = ((1 << (v9 & 0x1F)) - 1) | *v14;
          for ( i = v14 + 1; ; ++i )
          {
            v8 = ~v15;
            if ( v8 )
              break;
            if ( (unsigned __int64)i > v13 )
              goto LABEL_51;
            v15 = *++v14;
          }
          _BitScanForward64((unsigned __int64 *)&v17, v8);
          v9 = v17 + 32 * (((__int64)v14 - v11) >> 2);
          if ( v9 > v10 )
          {
LABEL_51:
            v9 = *(_DWORD *)v6;
            goto LABEL_21;
          }
          for ( j = ~(v8 | ((1 << v17) - 1)); ; j = *v19 )
          {
            if ( (_DWORD)j )
            {
              _BitScanForward64(&j, j);
              goto LABEL_18;
            }
            v19 = v14 + 1;
            if ( (unsigned __int64)(v14 + 1) > v13 )
              break;
            ++v14;
          }
          LODWORD(j) = 32;
LABEL_18:
          v20 = j + 32 * (((__int64)v14 - v11) >> 2);
          if ( v20 > v10 )
            v20 = *(_DWORD *)v6;
          v12 = v20 - v9;
LABEL_21:
          if ( !v12 )
            break;
          v29 = v12 + v9;
          if ( v9 < v12 + v9 )
          {
            v25 = 8LL * v9;
            do
            {
              v26 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + v25);
              if ( (v26 & 0x7FFFFFFFFFFF0000LL) != 0 && v26 >= 0 )
              {
                v27 = v7;
                v34[v7++] = v9;
                v35[v27] = (PVOID)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v9, 0, v8, 4);
                if ( v7 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, v34, v35, 8u, v28, 0LL);
                  v7 = 0;
                }
              }
              ++v9;
              v25 += 8LL;
            }
            while ( v9 < v29 );
            v6 = v30;
          }
        }
        v4 = k;
        v2 = v32;
      }
      v21 = 0;
      for ( k = v2; v21 < *(_DWORD *)(a1 + 7020); ++v21 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v21);
        if ( (v22 & 0x7FFFFFFFFFFF0000LL) != 0 && v22 >= 0 && (!v6 || _bittest64((const signed __int64 *)v6[1], v21)) )
        {
          v24 = v7;
          v34[v7++] = v21;
          v35[v24] = (PVOID)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v21, 0, v8, 4);
          if ( v7 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              v34,
              v35,
              8u,
              v28,
              (_QWORD *)((unsigned __int64)&k & -(__int64)(v2 != 0LL)));
            v7 = 0;
            if ( v2 )
            {
              if ( !k )
                goto LABEL_28;
            }
          }
          v6 = v30;
        }
      }
      if ( v7 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          v34,
          v35,
          v7,
          v28,
          (_QWORD *)((unsigned __int64)&k & -(__int64)(v2 != 0LL)));
LABEL_28:
      StLockReleaseShared((struct VLOCK *)(a1 + 6840));
      _InterlockedExchange64((volatile __int64 *)(a1 + 7416), (__int64)v4);
    }
  }
  KiUnstackDetachProcess(v33, 0LL);
  return v5;
}
