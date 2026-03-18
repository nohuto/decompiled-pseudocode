/*
 * XREFs of MiMapMdlWithLargePages @ 0x1404C71D0
 * Callers:
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiLookupIoPageNode @ 0x1403D0238 (MiLookupIoPageNode.c)
 *     MiIoSpaceGetBounds @ 0x1403D0398 (MiIoSpaceGetBounds.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiMapMdlWithLargePages(_DWORD *a1, unsigned __int64 a2, __int64 a3, char a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // r15
  unsigned __int8 CurrentIrql; // di
  KIRQL v13; // r12
  int v14; // ebx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  volatile unsigned __int64 v20; // rbx
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // r13
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int8 v28; // di
  __int64 v29; // rdx
  unsigned __int64 LeafVa; // rax
  int v31; // r9d
  unsigned __int8 v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v36; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v37; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v38; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-80h]
  char *AnyMultiplexedVm; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  _BYTE v47[208]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a3;
  v46 = a3;
  v45 = a6;
  memset_0(v47, 0, 0xC8uLL);
  v37 = (unsigned __int64 *)(a1 + 12);
  v9 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0LL;
  v38 = 0LL;
  v39 = v10 + 8 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 21);
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  v13 = 17;
  if ( v6 )
  {
    v14 = 1;
    v34 = 1;
    if ( CurrentIrql == 2 )
    {
      v33 = 17;
      MiLockWorkingSetSharedAtDpc(v6);
    }
    else
    {
      v33 = MiLockWorkingSetShared(v6);
    }
  }
  else
  {
    v14 = 0;
    v33 = 17;
    v34 = 0;
  }
  if ( v10 < v39 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
    *(_QWORD *)&v43 = v15 << 25;
    while ( 1 )
    {
      if ( v14 )
      {
        v11 = v15 + (v16 & (v10 >> 9));
        v38 = v11;
        MiLockNestedPageTable(v6, v11);
      }
      v17 = 512 - ((v10 >> 3) & 0x1FF);
      if ( v17 > (__int64)(v39 - v10) >> 3 )
        v17 = (__int64)(v39 - v10) >> 3;
      v18 = 8 * v17;
      v36 = 8 * v17 + v10;
      if ( v10 < v36 )
      {
        v19 = 8 * v17 + v10;
        do
        {
          v20 = *(_QWORD *)v10;
          MiRewritePteWithLockBit(v6, 0, (volatile __int64 *)v10, CLFS_LSN_NULL_EXT);
          MiInsertPageChainHead((__int64 *)&v41, (__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
          v10 += 8LL;
        }
        while ( v10 < v19 );
        v11 = v38;
        v18 = 8 * v17;
      }
      MiInitializeTbFlushList((__int64)v47, (__int64)AnyMultiplexedVm, 20, 0, 1);
      v10 -= v18;
      MiInsertTbFlushEntry((__int64)v47, (__int64)((v10 << 25) - v43) >> 16, v17, v21);
      MiFlushTbList((__int64)v47);
      v24 = v36;
      if ( v10 < v36 )
      {
        v25 = v45;
        v26 = v37;
        do
        {
          v27 = *v26;
          if ( *v26 <= qword_140E2DBE0 && (v23 = 6 * v27, ((*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
          {
            MiMakeProtectionPfnCompatible(a4, 48 * v27 - 0x220000000000LL);
          }
          else
          {
            if ( !*(_DWORD *)(v25 + 20) || v27 < *(_QWORD *)v25 || v27 > *(_QWORD *)(v25 + 8) )
            {
              if ( v40 == 2 )
              {
                v28 = 17;
              }
              else
              {
                v28 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v22) = 2;
                  LOBYTE(v23) = v28;
                  KiRaiseIrqlProcessIrqlFlags(v23, v22);
                }
              }
              MiIoSpaceGetBounds(v25, v27);
              if ( !v34 )
              {
                if ( KiIrqlFlags )
                {
                  LOBYTE(v29) = v28;
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
                }
                __writecr8(v28);
              }
              v24 = v36;
            }
            if ( *(_DWORD *)(v25 + 20) == 3 )
              MiLookupIoPageNode(v27, 0LL);
          }
          LeafVa = MiGetLeafVa(v10);
          MiWriteLargePte(LeafVa, v27, 1u, v31);
          v10 += 8LL;
          v26 = v37 + 512;
          v37 += 512;
        }
        while ( v10 < v24 );
        v11 = v38;
        v6 = v46;
      }
      if ( v11 )
        MiUnlockPageTableInternal(v6, v11);
      v16 = 0x7FFFFFFFF8LL;
      v15 = 0xFFFFF68000000000uLL;
      if ( v10 >= v39 )
        break;
      v14 = v34;
    }
    v9 = v42;
    CurrentIrql = v40;
    v43 = v41;
  }
  if ( v34 )
    MiUnlockWorkingSetShared(v6, v33);
  if ( CurrentIrql == 2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35EA8);
  else
    v13 = ExAcquireSpinLockExclusive(&dword_140E35EA8);
  if ( (_QWORD)xmmword_140E35EB8 )
  {
    **((_QWORD **)&xmmword_140E35EB8 + 1) = v41;
    qword_140E35EC8 += v9;
    *((_QWORD *)&xmmword_140E35EB8 + 1) = *((_QWORD *)&v41 + 1);
  }
  else
  {
    xmmword_140E35EB8 = v43;
    qword_140E35EC8 = v42;
  }
  return MiReleaseSpinLockExclusive(&dword_140E35EA8, v13);
}
