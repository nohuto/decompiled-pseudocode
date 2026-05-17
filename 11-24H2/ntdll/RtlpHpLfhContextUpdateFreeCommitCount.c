/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x180056220
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x18004CC40 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x18004D160 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x18004D870 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18004E800 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18004F304 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180056080 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800D0340 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800DFFC4 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 a1, __int64 a2, signed __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // ett
  __int128 v6; // [rsp+38h] [rbp-40h] BYREF
  void *v7; // [rsp+48h] [rbp-30h] BYREF
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  void *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  result = *(__int16 *)(a1 + 66);
  _InterlockedAdd64((volatile signed __int64 *)(result + a1 + 24), a3);
  if ( a3 > 0 )
  {
    v4 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6);
    if ( !*(_BYTE *)(v4 + 92) )
    {
      result = (unsigned int)qword_1801CE278;
      if ( !(_DWORD)qword_1801CE278 )
      {
        if ( qword_1801CE268 )
        {
          if ( byte_1801D2908 == (_BYTE)qword_1801CE278 )
          {
            v5 = qword_1801CE278;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)&qword_1801CE278,
                                     1,
                                     qword_1801CE278);
            if ( v5 == (_DWORD)result )
            {
              result = TpSetTimerEx(qword_1801CE268, &qword_1801CE270, 0LL, 1000LL);
              if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
              {
                v7 = off_1801CC678;
                v6 = 0x50B000000uLL;
                v8 = *(unsigned __int16 *)off_1801CC678;
                v10 = &unk_1801A23DE;
                v9 = 2;
                v11 = 25;
                v12 = 1;
                result = EtwEventWriteTransfer(qword_1801CC690, &v6, 0LL, 0LL, 2, (__int64)&v7);
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
