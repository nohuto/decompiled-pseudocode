/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x14072B158
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x140A72F18 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     PnpValidateRegistryString @ 0x1404ACEE0 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryDword @ 0x1404C71B4 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x1406A6670 (ZwEnumerateValueKey.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // edi
  void *v5; // r15
  NTSTATUS RegistryValue; // ebx
  unsigned int *v9; // rcx
  int Length; // ebx
  unsigned int *Pool2; // rsi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  NTSTATUS v16; // eax
  unsigned int v17; // r14d
  ULONG v19; // [rsp+30h] [rbp-39h]
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-11h]
  __int128 v24; // [rsp+60h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+80h] [rbp+17h]

  v3 = 0;
  v23 = a3;
  KeyHandle = 0LL;
  v26 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v4 = 0;
  v5 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue < 0 )
  {
    Pool2 = 0LL;
LABEL_35:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    goto LABEL_37;
  }
  if ( PnpValidateRegistryDword(0LL) )
    v4 = *(unsigned int *)((char *)v9 + v9[2]);
  ExFreePoolWithTag(v9, 0);
  if ( v4 != 1 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, a2);
  RegistryValue = IopOpenRegistryKeyEx(&KeyHandle, a1, &DestinationString, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, (__int64)&ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !DWORD1(v25) )
      {
LABEL_5:
        RegistryValue = -1073741275;
        goto LABEL_37;
      }
      Length = HIDWORD(v25) + 2 * (DWORD2(v25) + 12);
      v19 = Length;
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        goto LABEL_10;
      v12 = DWORD1(v25) * HIDWORD(v25) + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(0x100uLL);
        if ( v5 )
        {
          v13 = v12 >> 1;
          v14 = 0;
          v15 = 0;
          while ( 1 )
          {
            v16 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, Pool2, Length, &ResultLength);
            RegistryValue = v16;
            if ( v16 == -2147483622 )
              break;
            if ( v16 == -2147483643 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Length = ResultLength;
              v19 = ResultLength;
              Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
              {
                RegistryValue = -1073741670;
LABEL_33:
                ExFreePoolWithTag(v5, 0);
                goto LABEL_35;
              }
              --v3;
            }
            else
            {
              if ( v16 < 0 )
                goto LABEL_33;
              if ( PnpValidateRegistryString(Pool2) )
              {
                RegistryValue = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)((char *)Pool2 + Pool2[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_33;
                v14 += DestinationString.MaximumLength >> 1;
                if ( v13 > v14 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v15, v13 - v15, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v15 += DestinationString.MaximumLength >> 1;
                }
              }
              Length = v19;
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( !v14 )
          {
            RegistryValue = -1073741275;
            goto LABEL_33;
          }
          v17 = v14 + 1;
          if ( v13 < v17 )
          {
            Length = v19;
            v12 = 2 * v17;
            continue;
          }
          *((_WORD *)v5 + v15) = 0;
          *v23 = v5;
        }
        else
        {
LABEL_10:
          RegistryValue = -1073741670;
        }
        goto LABEL_35;
      }
    }
  }
LABEL_37:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
