/*
 * XREFs of RtlStringCbCopyA @ 0x14044E2F8
 * Callers:
 *     EtwpLogRefSetAutoMark @ 0x1407B10E4 (EtwpLogRefSetAutoMark.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140C1F1D4 (IopStoreArcInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cbDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cbDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cbDest;
    }
    while ( cbDest );
    v6 = pszDest - 1;
    if ( cbDest )
      v6 = pszDest;
    *v6 = 0;
    return cbDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
