/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006BC60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CD8B0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800DB0C4 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

int __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 a1, __int64 a2, signed __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // ett
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v3 = *(__int16 *)(a1 + 66);
  _InterlockedAdd64((volatile signed __int64 *)(v3 + a1 + 24), a3);
  if ( a3 > 0 )
  {
    v4 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6);
    if ( !*(_BYTE *)(v4 + 92) )
    {
      LODWORD(v3) = qword_1801CD278;
      if ( !(_DWORD)qword_1801CD278 )
      {
        if ( Context )
        {
          if ( byte_1801D1908 == (_BYTE)qword_1801CD278 )
          {
            v5 = qword_1801CD278;
            LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, qword_1801CD278);
            if ( v5 == (_DWORD)v3 )
            {
              LODWORD(v3) = TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
              if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
              {
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (unsigned __int64)off_1801CB678;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1801CB678;
                v9 = &unk_1801A157E;
                UserData.Reserved = 2;
                v10 = 25;
                v11 = 1;
                LODWORD(v3) = EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
              }
            }
          }
        }
      }
      *(_BYTE *)(v4 + 92) = 1;
    }
  }
  return v3;
}
