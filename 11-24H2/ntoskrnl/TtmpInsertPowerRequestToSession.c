/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x14076AA58
 * Callers:
 *     TtmNotifySessionPowerRequestCreated @ 0x140769D98 (TtmNotifySessionPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x140769F48 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmpPowerRequestHashAllocator @ 0x14076AD94 (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x14076ADB8 (TtmpPowerRequestHashDeallocator.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(unsigned int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  char v8; // r15
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 Pool2; // rax
  _QWORD *v14; // r14
  __int64 v15; // rbx
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // edi
  __int64 v21; // r10
  __int64 v22; // r15
  _QWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-38h] BYREF

  v5 = a2;
  v30 = 0LL;
  v8 = 0;
  v9 = TtmpAcquireSessionById(&v30, a1);
  v10 = v30;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 3377LL;
LABEL_3:
    TtmiLogError("TtmpInsertPowerRequestToSession", v12, v11, -1LL);
    goto LABEL_28;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 0x40uLL, 0x52507454u);
  v14 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v12 = 3386LL;
    v11 = 3221225626LL;
    goto LABEL_3;
  }
  *(_QWORD *)(Pool2 + 24) = a4;
  *(_DWORD *)(Pool2 + 20) = a3;
  *(_QWORD *)(Pool2 + 8) = v5;
  *(_DWORD *)(Pool2 + 16) = v5;
  *(_QWORD *)(Pool2 + 32) = a5;
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v15 = (unsigned int)(2 * (*(_DWORD *)(v10 + 276) >> 5));
  if ( *(_DWORD *)(v10 + 272) < (unsigned int)v15 )
    goto LABEL_27;
  if ( (unsigned int)v15 < 4 )
    v15 = 4LL;
  v16 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v15, 0LL);
  if ( v16 )
  {
    if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
    {
      v17 = -1;
      do
      {
        ++v17;
        LODWORD(v15) = (unsigned int)v15 >> 1;
      }
      while ( (_DWORD)v15 );
      v15 = (unsigned int)(1 << v17);
    }
    if ( (unsigned int)v15 > 0x4000000 )
      v15 = 0x4000000LL;
    v18 = (unsigned int)v15;
    if ( v16 > &v16[8 * v15] )
      v18 = 0LL;
    if ( v18 )
      memset64(v16, (v10 + 272) | 1, v18);
    v19 = *(_DWORD *)(v10 + 276);
    v20 = 0;
    v21 = -1LL << (*(_BYTE *)(v10 + 276) & 0x1F);
    if ( (v19 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v22 = *(_QWORD *)(v10 + 280);
        while ( 1 )
        {
          v23 = *(_QWORD **)(v22 + 8LL * v20);
          if ( ((unsigned __int8)v23 & 1) != 0 )
            break;
          *(_QWORD *)(v22 + 8LL * v20) = *v23;
          v30 = v21 & v23[1];
          v24 = (37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37
                 * (BYTE4(v30)
                  + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
               + HIBYTE(v30)) & (unsigned int)(v15 - 1);
          *v23 = *(_QWORD *)&v16[8 * v24];
          *(_QWORD *)&v16[8 * v24] = v23;
        }
        v19 = *(_DWORD *)(v10 + 276);
        ++v20;
      }
      while ( v20 < v19 >> 5 );
    }
    v25 = *(_QWORD *)(v10 + 280);
    *(_QWORD *)(v10 + 280) = v16;
    *(_DWORD *)(v10 + 276) = (32 * v15) | v19 & 0x1F;
    if ( v25 )
      TtmpPowerRequestHashDeallocator(v25, 0LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v10 + 276) >= 0x20u )
  {
LABEL_27:
    v8 = 1;
    v26 = *(_DWORD *)(v10 + 276);
    v30 = v14[1] & (-1LL << (v26 & 0x1F));
    v27 = *(_QWORD *)(v10 + 280);
    v28 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & ((v26 >> 5) - 1);
    *v14 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v14;
    ++*(_DWORD *)(v10 + 272);
    goto LABEL_28;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession", 3409LL, 3221225626LL, -1LL);
  ExFreePoolWithTag(v14, 0x52507454u);
LABEL_28:
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v8;
}
