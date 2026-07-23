/*
 * XREFs of SmProcessRegistrationRequest @ 0x1407985CC
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmGetRegistrationInfo @ 0x140797554 (SmGetRegistrationInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 ProcessPartition; // rax
  KPROCESSOR_MODE v9; // r9
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v7 = a1;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 15) = *(_BYTE *)(v7 + 15);
  }
  v10 = *(_OWORD *)a1;
  if ( (_BYTE)v10 != 2 || (v10 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  result = SmGetRegistrationInfo(ProcessPartition, v9, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a1 = v10;
    *a3 = 16;
  }
  return result;
}
