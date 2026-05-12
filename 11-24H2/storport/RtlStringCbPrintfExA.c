/*
 * XREFs of RtlStringCbPrintfExA @ 0x1400095E8
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x14000904C (RaGetUnitPerfCounterIdString.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsA @ 0x14008EA04 (RtlStringExHandleOtherFlagsA.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

NTSTATUS RtlStringCbPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  NTSTATUS v7; // ebx
  const char *v9; // r8
  NTSTRSAFE_PSTR v10; // r13
  size_t v11; // r15
  size_t v12; // rdi
  int v13; // eax
  NTSTRSAFE_PSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-10h] BYREF
  size_t *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v18 = pcbRemaining;
  v7 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cbDest || cbDest > 0x7FFFFFFF )
      v7 = -1073741811;
  }
  else if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v9 = pszFormat;
    v10 = pszDest;
    ppszDestEnda = pszDest;
    v11 = cbDest;
    pcchRemaining[0] = cbDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v9 = (const char *)&unk_140151064;
    v7 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( cbDest )
        *pszDest = 0;
    }
    else if ( cbDest )
    {
      pcchRemaining[0] = 0LL;
      v12 = cbDest - 1;
      v13 = _vsnprintf(pszDest, cbDest - 1, v9, Args);
      if ( v13 < 0 || v13 > v12 )
      {
        pszDest[v12] = 0;
        v7 = -2147483643;
      }
      else if ( v13 == v12 )
      {
        pszDest[v12] = 0;
      }
      else
      {
        v12 = v13;
      }
      v11 = cbDest - v12;
      v10 = &pszDest[v12];
      ppszDestEnda = &pszDest[v12];
      pcchRemaining[0] = cbDest - v12;
      if ( v7 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          memset_0(v10 + 1, (unsigned __int8)dwFlags, v11 - 1);
LABEL_14:
        pcbRemaining = v18;
LABEL_15:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcbRemaining )
          *pcbRemaining = v11;
        return v7;
      }
    }
    else
    {
      if ( !*v9 )
        goto LABEL_15;
      v7 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      RtlStringExHandleOtherFlagsA(pszDest, cbDest, (size_t)v9, &ppszDestEnda, pcchRemaining, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchRemaining[0];
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      goto LABEL_14;
  }
  return v7;
}
