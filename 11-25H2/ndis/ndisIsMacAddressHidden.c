/*
 * XREFs of ndisIsMacAddressHidden @ 0x14015CAC0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

char __fastcall ndisIsMacAddressHidden(struct _KPROCESS *a1)
{
  int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  __int64 v4; // rdi
  wchar_t *v5; // rax
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  WCHAR *i; // r15
  __int64 v11; // rax
  int v13; // esp
  int v14; // ebx
  BOOLEAN Packaged[8]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v18; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+160h] [rbp+60h] BYREF

  PackageSize = 256LL;
  String1.MaximumLength = 130;
  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  String1.Buffer = (wchar_t *)&v20;
  v18.Buffer = L"windows.immersivecontrolpanel_cw5n1h2txyewy";
  Packaged[0] = 0;
  *(_DWORD *)&v18.Length = 5767254;
  if ( !ndisForceUWPWlanMacAddressBlock && !ndisCtaPolicyEnabled )
    return 0;
  v1 = 0;
  v2 = PsReferencePrimaryToken(a1);
  v3 = RtlQueryPackageIdentity(v2, PackageFullName, &PackageSize, 0LL, 0LL, Packaged);
  PsDereferencePrimaryToken(v2);
  if ( v3 < 0 || !Packaged[0] )
    return 0;
  v4 = (unsigned int)PackageSize;
  v5 = wcschr((const wchar_t *)PackageFullName, 0x5Fu);
  v6 = (int)v5;
  if ( !v5 )
  {
    v11 = -1LL;
    while ( PackageFullName[++v11] != 0 )
      ;
    v14 = v13 + 96;
    v6 = v14 + 2 * v11;
  }
  v7 = 0;
  v8 = v6 - (unsigned int)PackageFullName;
  for ( i = (WCHAR *)((char *)&v18.Buffer + v4 + 6); *i != 95; v7 += 2 )
  {
    if ( i == PackageFullName )
      break;
    --i;
  }
  if ( (unsigned __int64)(v7 + v8) + 2 > String1.MaximumLength )
    return 0;
  memmove(String1.Buffer, PackageFullName, v8);
  memmove((char *)String1.Buffer + v8, i, v7 + 2LL);
  String1.Length = v7 + v8;
  while ( !v1 )
  {
    if ( !RtlCompareUnicodeString(&String1, &v18, 1u) )
      return 0;
    v1 = 1;
  }
  return 1;
}
