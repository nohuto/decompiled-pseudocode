/*
 * XREFs of KeQueryNodeActiveAffinityEx @ 0x140330080
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406089B4 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     ExProcessorCounterSetCallback @ 0x1409D6EC0 (ExProcessorCounterSetCallback.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KeQueryNodeActiveAffinityEx(unsigned __int16 a1, unsigned __int16 *a2, _WORD *a3)
{
  _WORD *v3; // r12
  __int64 v4; // rbx
  __int64 v6; // rbp
  char v7; // sp
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  unsigned __int64 *v10; // rax
  __int64 v11; // r10
  int v12; // r9d
  int v13; // r14d
  int v14; // r8d
  char v15; // dl
  unsigned __int64 FirstSetRightGroupMask; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int16 v20; // cx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  char v23; // dl
  int v24; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int128 v27; // [rsp+48h] [rbp-50h] BYREF

  v3 = a3;
  v4 = a1;
  if ( a2 )
  {
    memset_0(a2 + 4, 0, 8LL * *a2);
    *a2 = 1;
  }
  v6 = 0LL;
  if ( v3 )
    *v3 = 0;
  if ( (unsigned __int16)v4 < (unsigned __int16)KeNumberNodes )
  {
    v26 = KeNodeBlock[v4];
    v27 = 0LL;
    RtlCopyVolatileMemory(&v27, (const void *)(v26 + 16), 0x10uLL);
    v8 = (v7 + 72) & 7;
    v24 = v8;
    v9 = 8 - v8;
    while ( 1 )
    {
      v10 = (unsigned __int64 *)&v27;
      v11 = 0LL;
      if ( v9 <= 4 )
      {
        v12 = 8 - v8;
        v13 = (4 - (8 - (_BYTE)v8)) & 7;
        v6 = 4LL - (unsigned int)(v13 + 8 - v8);
      }
      else
      {
        v12 = 4;
        v13 = 0;
      }
      v14 = 0;
      if ( v12 )
      {
        do
        {
          v15 = *(_BYTE *)v10;
          v10 = (unsigned __int64 *)((char *)v10 + 1);
          ++v14;
          v11 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v15);
          --v12;
        }
        while ( v12 );
        v3 = a3;
      }
      if ( v6 )
      {
        v21 = ((unsigned __int64)(v6 - 1) >> 3) + 1;
        v14 += 8 * v21;
        do
        {
          v22 = *v10++;
          v11 += (unsigned int)__popcnt(v22);
          --v21;
        }
        while ( v21 );
      }
      for ( ; v13; --v13 )
      {
        v23 = *(_BYTE *)v10;
        v10 = (unsigned __int64 *)((char *)v10 + 1);
        ++v14;
        v11 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v23);
      }
      if ( !v11 )
        return;
      FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask(&v27);
      _bittestandreset64((signed __int64 *)&v27, FirstSetRightGroupMask);
      v17 = *(_QWORD *)(v26 + 8 * FirstSetRightGroupMask + 32);
      v18 = *(_QWORD *)(v17 + 128);
      v19 = *(unsigned __int16 *)(v17 + 136);
      v20 = __popcnt(v18);
      if ( a2 )
      {
        if ( *a2 <= (unsigned __int16)v19 )
        {
          if ( a2[1] <= (unsigned __int16)v19 )
            goto LABEL_18;
          *a2 = v19 + 1;
        }
        *(_QWORD *)&a2[4 * v19 + 4] |= v18;
      }
LABEL_18:
      LODWORD(v8) = v24;
      v6 = 0LL;
      if ( v3 )
        *v3 += v20;
    }
  }
}
