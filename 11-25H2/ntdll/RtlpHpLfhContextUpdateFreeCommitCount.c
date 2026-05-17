/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18000A090 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18000AF44 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180011CC0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1800316D0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180031BF0 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180032300 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800333AC (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CCFA0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 * Callees:
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     EtwEventWriteTransfer @ 0x18008E770 (EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 a1, __int64 a2, signed __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // ett
  _DWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  void *v8; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]
  void *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  result = *(__int16 *)(a1 + 66);
  _InterlockedAdd64((volatile signed __int64 *)(result + a1 + 24), a3);
  if ( a3 > 0 )
  {
    v4 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6);
    if ( !*(_BYTE *)(v4 + 92) )
    {
      result = (unsigned int)qword_1801D0278;
      if ( !(_DWORD)qword_1801D0278 )
      {
        if ( qword_1801D0268 )
        {
          if ( byte_1801D4988 == (_BYTE)qword_1801D0278 )
          {
            v5 = qword_1801D0278;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&qword_1801D0278,
                                     1,
                                     qword_1801D0278);
            if ( v5 == (_DWORD)result )
            {
              result = TpSetTimerEx(qword_1801D0268, &qword_1801D0270, 0LL, 1000LL);
              if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CE670 > 5 )
              {
                v6[1] = 5;
                v8 = off_1801CE678;
                v6[0] = 184549376;
                v7 = 0LL;
                v9 = *(unsigned __int16 *)off_1801CE678;
                v11 = &unk_1801A4426;
                v10 = 2;
                v12 = 25;
                v13 = 1;
                result = EtwEventWriteTransfer(qword_1801CE690, (unsigned int)v6, 0, 0, 2, (__int64)&v8);
              }
            }
          }
        }
      }
      *(_BYTE *)(v4 + 92) = 1;
    }
  }
  return result;
}
