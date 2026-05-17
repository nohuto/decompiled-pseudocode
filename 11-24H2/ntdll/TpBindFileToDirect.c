/*
 * XREFs of TpBindFileToDirect @ 0x1800BF8D0
 * Callers:
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     RtlpTpIoLookup @ 0x1800BEF1C (RtlpTpIoLookup.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x180162170 (ZwSetInformationFile.c)
 */

__int64 __fastcall TpBindFileToDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( a1 && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 16LL, 30);
    if ( (int)result >= 0 )
    {
      TpAdjustBindingCount(a3, 1LL);
      return 0LL;
    }
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  return result;
}
