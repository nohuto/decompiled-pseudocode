/*
 * XREFs of AdtpBuildIPv4Strings @ 0x140A157AC
 * Callers:
 *     AdtpBuildSockAddrString @ 0x140A15720 (AdtpBuildSockAddrString.c)
 * Callees:
 *     RtlIpv4AddressToStringW @ 0x140453820 (RtlIpv4AddressToStringW.c)
 *     StringCchPrintfW @ 0x14046A284 (StringCchPrintfW.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildIPv4Strings(_WORD *a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 Pool2; // rax

  if ( *a1 == 2 )
  {
    if ( a2 && a3 )
    {
      *(_WORD *)(a2 + 2) = 32;
      Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x6B416553u);
      *(_QWORD *)(a2 + 8) = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741801;
        goto LABEL_20;
      }
      *a3 = 1;
      *(_WORD *)a2 = 2
                   * ((__int64)((unsigned int)RtlIpv4AddressToStringW(
                                                (const struct in_addr *)(a1 + 2),
                                                *(PWSTR *)(a2 + 8))
                              - *(_DWORD *)(a2 + 8)) >> 1);
    }
    if ( !a4 || !a5 )
      return 0;
    *(_WORD *)(a4 + 2) = 16;
    v9 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x6B416553u);
    *(_QWORD *)(a4 + 8) = v9;
    if ( v9 )
    {
      *a5 = 1;
      if ( StringCchPrintfW(*(STRSAFE_LPWSTR *)(a4 + 8), 8uLL, L"%d", (unsigned __int16)(a1[1] << 8) | HIBYTE(a1[1])) >= 0 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * v10) );
        *(_WORD *)a4 = 2 * v10;
        return 0;
      }
      v11 = -1073741811;
    }
    else
    {
      v11 = -1073741801;
    }
  }
  else
  {
    v11 = -1073741503;
  }
  if ( a3 )
  {
LABEL_20:
    if ( *a3 )
    {
      *a3 = 0;
      ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
    }
  }
  if ( a5 && *a5 )
  {
    *a5 = 0;
    ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0);
  }
  return v11;
}
