/*
 * XREFs of AlpcpProbeForWriteMessageHeader @ 0x1408A1E50
 * Callers:
 *     NtReplyWaitReplyPort @ 0x14073F600 (NtReplyWaitReplyPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     NtRequestWaitReplyPort @ 0x140A24E30 (NtRequestWaitReplyPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeForWriteMessageHeader(unsigned __int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  if ( (a2 & 0xC0000000) == 0x80000000 )
  {
    if ( (a1 & 3) != 0 )
LABEL_3:
      ExRaiseDatatypeMisalignment();
    v4 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v4 = a1;
    *(_BYTE *)v4 = *(_BYTE *)v4;
    result = *(unsigned __int8 *)(v4 + 23);
    *(_BYTE *)(v4 + 23) = result;
  }
  else
  {
    if ( (a1 & 3) != 0 )
      goto LABEL_3;
    v2 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v2 = a1;
    *(_BYTE *)v2 = *(_BYTE *)v2;
    result = *(unsigned __int8 *)(v2 + 39);
    *(_BYTE *)(v2 + 39) = result;
  }
  return result;
}
