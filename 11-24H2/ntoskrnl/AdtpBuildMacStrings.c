/*
 * XREFs of AdtpBuildMacStrings @ 0x1408111A4
 * Callers:
 *     AdtpBuildSockAddrString @ 0x140A15720 (AdtpBuildSockAddrString.c)
 * Callees:
 *     RtlEthernetAddressToStringW @ 0x1404C35C0 (RtlEthernetAddressToStringW.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildMacStrings(__int64 a1, __int64 a2, _BYTE *a3)
{
  PVOID *v6; // rcx
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  PWSTR *v9; // rsi

  if ( *(_WORD *)a1 != 33 )
  {
    v6 = (PVOID *)(a2 + 8);
    v7 = -1073741503;
    if ( !a3 )
      return v7;
    goto LABEL_8;
  }
  if ( !a2 || !a3 )
    return 0;
  *(_WORD *)(a2 + 2) = 36;
  Pool2 = ExAllocatePool2(0x100uLL, 0x24uLL, 0x6B416553u);
  v9 = (PWSTR *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( Pool2 )
  {
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlEthernetAddressToStringW((const DL_EUI48 *)(a1 + 2), *v9) - *(_DWORD *)v9) >> 1);
    return 0;
  }
  v7 = -1073741801;
  v6 = (PVOID *)v9;
LABEL_8:
  if ( *a3 )
  {
    *a3 = 0;
    ExFreePoolWithTag(*v6, 0);
  }
  return v7;
}
