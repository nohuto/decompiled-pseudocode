/*
 * XREFs of MiGetHugeRange @ 0x140671294
 * Callers:
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSnapPageMoveInProgress @ 0x1402647F0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x14026481C (MiWaitForPageMoveComplete.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiInitializeGetPageChannels @ 0x140432090 (MiInitializeGetPageChannels.c)
 *     MiColorSetChannel @ 0x1404400D4 (MiColorSetChannel.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiGetBestHugeRangeFromNode @ 0x140671050 (MiGetBestHugeRangeFromNode.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rbx
  char v18; // di
  __int64 v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+28h] [rbp-40h] BYREF
  __int16 v22; // [rsp+2Ch] [rbp-3Ch]

  v20 = a2;
  v21 = 0;
  v22 = 0;
  v5 = a2;
  MiInitializeGetPageChannels((char *)&v21, 0LL, a2, a3);
  v6 = *(_QWORD *)(a1 + 16) + 57216 * ((v5 >> 9) & 0x3F);
  MiInitializeGetPageChannels((char *)&v21, v6, v7, a3);
  v8 = MiSnapPageMoveInProgress(v6, 4);
  v10 = BYTE2(v21);
  v11 = v8;
  while ( 1 )
  {
    BestHugeRangeFromNode = (_QWORD *)MiGetBestHugeRangeFromNode(v6, v9, a3);
    if ( BestHugeRangeFromNode )
      break;
    BYTE2(v21) = ++v10;
    if ( v10 >= HIBYTE(v21) )
    {
      MiColorSetChannel(&v20, v22);
      v15 = MiWaitForPageMoveComplete(v6, 4LL, v13, v14);
      if ( ((v11 ^ v15) & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return 0LL;
      v11 = v15;
    }
    else
    {
      MiColorSetChannel(&v20, *((_BYTE *)&v21 + v10));
    }
    v9 = v20;
  }
  v17 = (((__int64)BestHugeRangeFromNode - qword_140E30100) >> 3) & 0x3FFFFF;
  if ( (a3 & 0x20) != 0 && (*(_QWORD *)(qword_140E30100 + 8 * v17) & 0x10000LL) != 0 )
  {
    MiHugePageOperation(a1, ((((__int64)BestHugeRangeFromNode - qword_140E30100) >> 3) & 0x3FFFFF) << 18);
    if ( (a3 & 1) != 0 )
    {
      v18 = 17;
      MiLockHugePfnInternal((__int64)BestHugeRangeFromNode);
    }
    else
    {
      v18 = MiLockHugePfn(BestHugeRangeFromNode);
    }
    LOBYTE(v19) = v18;
    *BestHugeRangeFromNode &= ~0x10000uLL;
    MiUnlockHugePfn((__int64)BestHugeRangeFromNode, v19);
  }
  return v17;
}
