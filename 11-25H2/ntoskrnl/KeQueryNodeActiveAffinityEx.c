/*
 * XREFs of KeQueryNodeActiveAffinityEx @ 0x140305020
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDF04 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ExProcessorCounterSetCallback @ 0x1409FB640 (ExProcessorCounterSetCallback.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C239E8 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KeQueryNodeActiveAffinityEx(unsigned __int16 a1, unsigned __int16 *a2, _WORD *a3)
{
  __int64 v3; // rsi
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int16 v10; // cx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF

  v3 = a1;
  if ( a2 )
  {
    memset_0(a2 + 4, 0, 8LL * *a2);
    *a2 = 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned __int16)v3 < (unsigned __int16)KeNumberNodes )
  {
    v12 = KeNodeBlock[v3];
    v13 = 0LL;
    RtlCopyVolatileMemory(&v13, (const void *)(v12 + 16), 0x10uLL);
    while ( 1 )
    {
      v11[0] = 32LL;
      v11[1] = &v13;
      if ( !RtlNumberOfSetBitsEx(v11) )
        return;
      FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(&v13);
      _bittestandreset64((signed __int64 *)&v13, FirstSetRightGroupMask);
      v7 = *(_QWORD *)(v12 + 8LL * FirstSetRightGroupMask + 32);
      v8 = *(_QWORD *)(v7 + 128);
      v9 = *(unsigned __int16 *)(v7 + 136);
      v10 = __popcnt(v8);
      if ( a2 )
      {
        if ( *a2 <= (unsigned __int16)v9 )
        {
          if ( a2[1] <= (unsigned __int16)v9 )
            goto LABEL_11;
          *a2 = v9 + 1;
        }
        *(_QWORD *)&a2[4 * v9 + 4] |= v8;
      }
LABEL_11:
      if ( a3 )
        *a3 += v10;
    }
  }
}
