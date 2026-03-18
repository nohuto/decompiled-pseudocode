/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x1409CE6C0
 * Callers:
 *     NtReplyWaitReplyPort @ 0x1407356B0 (NtReplyWaitReplyPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140914AA0 (AlpcpProcessConnectionRequest.c)
 *     NtRequestWaitReplyPort @ 0x1409CDE90 (NtRequestWaitReplyPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  if ( (a2 & 0xC0000000) != 0x80000000 )
  {
    if ( (a1 & 3) == 0 )
    {
      v2 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v2 = a1;
      *(_BYTE *)v2 = *(_BYTE *)v2;
      result = *(unsigned __int8 *)(v2 + 39);
      *(_BYTE *)(v2 + 39) = result;
      return result;
    }
LABEL_6:
    ExRaiseDatatypeMisalignment();
  }
  if ( (a1 & 3) != 0 )
    goto LABEL_6;
  v4 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v4 = a1;
  *(_BYTE *)v4 = *(_BYTE *)v4;
  result = *(unsigned __int8 *)(v4 + 23);
  *(_BYTE *)(v4 + 23) = result;
  return result;
}
