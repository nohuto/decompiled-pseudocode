/*
 * XREFs of MiMapMdlWithLargePages @ 0x1404C0630
 * Callers:
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiMapMdlWithLargePages(_DWORD *a1, unsigned __int64 a2, __int64 a3, char a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v9; // r9
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // r15
  unsigned __int8 CurrentIrql; // di
  KIRQL v14; // r12
  int v15; // ebx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // r15
  volatile unsigned __int64 v21; // rbx
  unsigned int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // r13
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // di
  __int64 v30; // rdx
  unsigned __int64 LeafVa; // rax
  int v32; // r9d
  unsigned __int8 v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v38; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v41; // [rsp+60h] [rbp-A0h]
  __int128 v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h]
  char *AnyMultiplexedVm; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  _BYTE v48[208]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a3;
  v47 = a3;
  v46 = a6;
  memset_0(v48, 0, 0xC8uLL);
  v38 = (unsigned __int64 *)(a1 + 12);
  v10 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0LL;
  v39 = 0LL;
  v40 = v11 + 8 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 21);
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  v14 = 17;
  if ( v6 )
  {
    v15 = 1;
    v35 = 1;
    if ( CurrentIrql == 2 )
    {
      v34 = 17;
      MiLockWorkingSetSharedAtDpc(v6);
    }
    else
    {
      v34 = MiLockWorkingSetShared(v6, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL, v9);
    }
  }
  else
  {
    v15 = 0;
    v34 = 17;
    v35 = 0;
  }
  if ( v11 < v40 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
    *(_QWORD *)&v44 = v16 << 25;
    while ( 1 )
    {
      if ( v15 )
      {
        v12 = v16 + (v17 & (v11 >> 9));
        v39 = v12;
        MiLockNestedPageTable(v6, v12);
      }
      v18 = 512 - ((v11 >> 3) & 0x1FF);
      if ( v18 > (__int64)(v40 - v11) >> 3 )
        v18 = (__int64)(v40 - v11) >> 3;
      v19 = 8 * v18;
      v37 = 8 * v18 + v11;
      if ( v11 < v37 )
      {
        v20 = 8 * v18 + v11;
        do
        {
          v21 = *(_QWORD *)v11;
          MiRewritePteWithLockBit(v6, 0, (volatile __int64 *)v11, CLFS_LSN_NULL_EXT);
          MiInsertPageChainHead((__int64 *)&v42, (__int64 *)(48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
          v11 += 8LL;
        }
        while ( v11 < v20 );
        v12 = v39;
        v19 = 8 * v18;
      }
      MiInitializeTbFlushList((__int64)v48, (__int64)AnyMultiplexedVm, 20, 0, 1);
      v11 -= v19;
      MiInsertTbFlushEntry((__int64)v48, (__int64)((v11 << 25) - v44) >> 16, v18, v22);
      MiFlushTbList((__int64)v48);
      v25 = v37;
      if ( v11 < v37 )
      {
        v26 = v46;
        v27 = v38;
        do
        {
          v28 = *v27;
          if ( *v27 <= qword_140E2DD20 && (v24 = 6 * v28, ((*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
          {
            MiMakeProtectionPfnCompatible(a4, 48 * v28 - 0x220000000000LL);
          }
          else
          {
            if ( !*(_DWORD *)(v26 + 20) || v28 < *(_QWORD *)v26 || v28 > *(_QWORD *)(v26 + 8) )
            {
              if ( v41 == 2 )
              {
                v29 = 17;
              }
              else
              {
                v29 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v23) = 2;
                  LOBYTE(v24) = v29;
                  KiRaiseIrqlProcessIrqlFlags(v24, v23);
                }
              }
              MiIoSpaceGetBounds(v26, v28);
              if ( !v35 )
              {
                if ( KiIrqlFlags )
                {
                  LOBYTE(v30) = v29;
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
                }
                __writecr8(v29);
              }
              v25 = v37;
            }
            if ( *(_DWORD *)(v26 + 20) == 3 )
              MiLookupIoPageNode(v28, 0LL);
          }
          LeafVa = MiGetLeafVa(v11);
          MiWriteLargePte(LeafVa, v28, 1u, v32);
          v11 += 8LL;
          v27 = v38 + 512;
          v38 += 512;
        }
        while ( v11 < v25 );
        v12 = v39;
        v6 = v47;
      }
      if ( v12 )
        MiUnlockPageTableInternal(v6, v12);
      v17 = 0x7FFFFFFFF8LL;
      v16 = 0xFFFFF68000000000uLL;
      if ( v11 >= v40 )
        break;
      v15 = v35;
    }
    v10 = v43;
    CurrentIrql = v41;
    v44 = v42;
  }
  if ( v35 )
    MiUnlockWorkingSetShared(v6, v34);
  if ( CurrentIrql == 2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35FE8);
  else
    v14 = ExAcquireSpinLockExclusive(&dword_140E35FE8);
  if ( (_QWORD)xmmword_140E35FF8 )
  {
    **((_QWORD **)&xmmword_140E35FF8 + 1) = v42;
    qword_140E36008 += v10;
    *((_QWORD *)&xmmword_140E35FF8 + 1) = *((_QWORD *)&v42 + 1);
  }
  else
  {
    xmmword_140E35FF8 = v44;
    qword_140E36008 = v43;
  }
  return MiReleaseSpinLockExclusive(&dword_140E35FE8, v14);
}
