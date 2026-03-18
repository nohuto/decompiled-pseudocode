/*
 * XREFs of MiMapMdlWithLargePages @ 0x1404C6BAC
 * Callers:
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiLookupIoPageNode @ 0x1403920A8 (MiLookupIoPageNode.c)
 *     MiIoSpaceGetBounds @ 0x140392208 (MiIoSpaceGetBounds.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // r15
  volatile unsigned __int64 v21; // rbx
  unsigned int v22; // r9d
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
        MiLockNestedPageTable(v6, v11, v16, v17);
      }
      v18 = 512 - ((v10 >> 3) & 0x1FF);
      if ( v18 > (__int64)(v39 - v10) >> 3 )
        v18 = (__int64)(v39 - v10) >> 3;
      v19 = 8 * v18;
      v36 = 8 * v18 + v10;
      if ( v10 < v36 )
      {
        v20 = 8 * v18 + v10;
        do
        {
          v21 = *(_QWORD *)v10;
          MiRewritePteWithLockBit(v6, 0, (volatile __int64 *)v10, CLFS_LSN_NULL_EXT);
          MiInsertPageChainHead((__int64 *)&v41, (__int64 *)(48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
          v10 += 8LL;
        }
        while ( v10 < v20 );
        v11 = v38;
        v19 = 8 * v18;
      }
      MiInitializeTbFlushList((__int64)v47, (__int64)AnyMultiplexedVm, 20, 0, 1);
      v10 -= v19;
      MiInsertTbFlushEntry((__int64)v47, (__int64)((v10 << 25) - v43) >> 16, v18, v22);
      MiFlushTbList((__int64)v47);
      v24 = v36;
      if ( v10 < v36 )
      {
        v25 = v45;
        v26 = v37;
        do
        {
          v27 = *v26;
          if ( *v26 <= qword_140E2D9A0 && (v23 = 6 * v27, ((*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
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
                  LOBYTE(v23) = v28;
                  KiRaiseIrqlProcessIrqlFlags(v23);
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
              MiLookupIoPageNode(v27, 0);
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
        MiUnlockPageTable(v6, v11);
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C68);
  else
    v13 = ExAcquireSpinLockExclusive(&dword_140E35C68);
  if ( (_QWORD)xmmword_140E35C78 )
  {
    **((_QWORD **)&xmmword_140E35C78 + 1) = v41;
    qword_140E35C88 += v9;
    *((_QWORD *)&xmmword_140E35C78 + 1) = *((_QWORD *)&v41 + 1);
  }
  else
  {
    xmmword_140E35C78 = v43;
    qword_140E35C88 = v42;
  }
  return MiReleaseSpinLockExclusive(&dword_140E35C68, v13);
}
