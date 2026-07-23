/*
 * XREFs of RtlStringCbCopyExA @ 0x1405377FC
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140437D90 (RtlStringCopyWorkerA.c)
 *     RtlStringExValidateDestA @ 0x140537B44 (RtlStringExValidateDestA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszSrc,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  int v6; // r8d
  __int64 v7; // r9
  char *v8; // r10
  size_t v10; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)ppszDestEnd;
  v6 = RtlStringExValidateDestA(pszDest, 0x100uLL, (const size_t)pszSrc, 0);
  if ( v6 < 0 )
  {
    *v8 = v7;
  }
  else
  {
    pcchNewDestLength &= v7;
    v6 = RtlStringCopyWorkerA(v8, 0x100uLL, &pcchNewDestLength, &byte_140C6A670, v10);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    {
      if ( pcbRemaining )
        *pcbRemaining = 256 - pcchNewDestLength;
    }
  }
  return v6;
}
