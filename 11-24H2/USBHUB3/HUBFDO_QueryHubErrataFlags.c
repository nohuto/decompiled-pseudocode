/*
 * XREFs of HUBFDO_QueryHubErrataFlags @ 0x14007F314
 * Callers:
 *     HUBHSM_QueryingForHubHackFlags @ 0x140009A60 (HUBHSM_QueryingForHubHackFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002474 (RtlStringCchPrintfA.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x14002EFDC (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140088B7C (HUBREG_QueryHubErrataFlags.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x140089248 (HUBREG_QueryUsbHardwareVerifierValue.c)
 */

__int64 __fastcall HUBFDO_QueryHubErrataFlags(__int64 a1)
{
  int v2; // ecx
  int v3; // edi
  char v5[4]; // [rsp+40h] [rbp-20h] BYREF
  char v6; // [rsp+44h] [rbp-1Ch]
  char v7[4]; // [rsp+48h] [rbp-18h] BYREF
  char v8; // [rsp+4Ch] [rbp-14h]
  char pszDest[4]; // [rsp+50h] [rbp-10h] BYREF
  char v10; // [rsp+54h] [rbp-Ch]

  if ( *(_BYTE *)(a1 + 240) )
  {
    v3 = a1 + 2472;
    HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 2472), pszDest, v7, v5);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 168) - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        *(_DWORD *)pszDest = *(_DWORD *)(a1 + 176);
        v10 = *(_BYTE *)(a1 + 180);
        *(_DWORD *)v7 = *(_DWORD *)(a1 + 181);
        v8 = *(_BYTE *)(a1 + 185);
        *(_DWORD *)v5 = *(_DWORD *)(a1 + 186);
        v6 = *(_BYTE *)(a1 + 190);
      }
      else
      {
        RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v7, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v5, 5uLL, "%04X", 0);
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(_DWORD *)(a1 + 176));
      RtlStringCchPrintfA(v7, 5uLL, "%04X", *(_DWORD *)(a1 + 180));
      RtlStringCchPrintfA(v5, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 184));
    }
    v3 = a1 + 2472;
  }
  HUBREG_QueryUsbHardwareVerifierValue(
    v3,
    (unsigned int)pszDest,
    (unsigned int)v7,
    (unsigned int)v5,
    (__int64)&g_HwVerifierHubName,
    *(_QWORD *)(a1 + 2536),
    a1 + 2608);
  return (((int)HUBREG_QueryHubErrataFlags(a1, pszDest, v7, v5) >> 31) & 0xFFFFFFF8) + 2053;
}
