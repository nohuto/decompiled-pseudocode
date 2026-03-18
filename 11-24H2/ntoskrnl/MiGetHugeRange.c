/*
 * XREFs of MiGetHugeRange @ 0x1406700C4
 * Callers:
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSnapPageMoveInProgress @ 0x1403D598C (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D59B8 (MiWaitForPageMoveComplete.c)
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
 *     MiInitializeGetPageChannels @ 0x14043DDF0 (MiInitializeGetPageChannels.c)
 *     MiColorSetChannel @ 0x1404479B4 (MiColorSetChannel.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiGetBestHugeRangeFromNode @ 0x14066FE80 (MiGetBestHugeRangeFromNode.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetHugeRange(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int16 v7; // r11
  __int64 v8; // rax
  unsigned int v9; // r11d
  unsigned __int8 v10; // r14
  __int64 v11; // rbx
  _QWORD *BestHugeRangeFromNode; // rsi
  __int64 v13; // rax
  __int64 v15; // rbx
  char v16; // di
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+28h] [rbp-40h] BYREF
  __int16 v20; // [rsp+2Ch] [rbp-3Ch]

  v18 = a2;
  v19 = 0;
  v20 = 0;
  v5 = a2;
  MiInitializeGetPageChannels((char *)&v19, 0LL, a2, a3);
  v6 = *(_QWORD *)(a1 + 16) + 57216 * ((v5 >> 9) & 0x3F);
  MiInitializeGetPageChannels((char *)&v19, v6, v7, a3);
  v8 = MiSnapPageMoveInProgress(v6, 4);
  v10 = BYTE2(v19);
  v11 = v8;
  while ( 1 )
  {
    BestHugeRangeFromNode = (_QWORD *)MiGetBestHugeRangeFromNode(v6, v9, a3);
    if ( BestHugeRangeFromNode )
      break;
    BYTE2(v19) = ++v10;
    if ( v10 >= HIBYTE(v19) )
    {
      MiColorSetChannel(&v18, v20);
      v13 = MiWaitForPageMoveComplete(v6, 4);
      if ( ((v11 ^ v13) & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return 0LL;
      v11 = v13;
    }
    else
    {
      MiColorSetChannel(&v18, *((_BYTE *)&v19 + v10));
    }
    v9 = v18;
  }
  v15 = (((__int64)BestHugeRangeFromNode - qword_140E2FFC0) >> 3) & 0x3FFFFF;
  if ( (a3 & 0x20) != 0 && (*(_QWORD *)(qword_140E2FFC0 + 8 * v15) & 0x10000LL) != 0 )
  {
    MiHugePageOperation(a1, ((((__int64)BestHugeRangeFromNode - qword_140E2FFC0) >> 3) & 0x3FFFFF) << 18);
    if ( (a3 & 1) != 0 )
    {
      v16 = 17;
      MiLockHugePfnInternal((__int64)BestHugeRangeFromNode);
    }
    else
    {
      v16 = MiLockHugePfn(BestHugeRangeFromNode);
    }
    LOBYTE(v17) = v16;
    *BestHugeRangeFromNode &= ~0x10000uLL;
    MiUnlockHugePfn((__int64)BestHugeRangeFromNode, v17);
  }
  return v15;
}
