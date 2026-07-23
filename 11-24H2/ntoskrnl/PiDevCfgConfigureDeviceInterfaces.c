/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x140417FA0 (PiDevCfgParseVariableName.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404AB8CC (PiDevCfgParseInterfaceKeyName.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409AA710 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // r14
  NTSTATUS v6; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v9; // eax
  __int64 Pool2; // r15
  ULONG i; // r13d
  const WCHAR *v12; // rdi
  wchar_t *Buffer; // rsi
  unsigned __int16 MaximumLength; // cx
  unsigned __int16 Length; // ax
  NTSTATUS v16; // eax
  wchar_t v17; // cx
  int v18; // eax
  int v19; // edx
  bool v20; // al
  __int64 v21; // rax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  __m128i v35; // [rsp+110h] [rbp+10h] BYREF
  GUID Guid; // [rsp+120h] [rbp+20h] BYREF

  v31 = a1;
  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v27.Length = 1441812LL;
  v27.Buffer = L"Interfaces";
  v29 = 0LL;
  ObjectAttributes.ObjectName = &v27;
  P = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v33 = 0LL;
  v5 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v35 = 0LL;
  Guid = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v6;
  if ( v6 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v27.Length = 262146;
  v27.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v27;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_10;
  if ( v9 < 0 )
    goto LABEL_3;
  *(_QWORD *)&v33 = Handle;
  *((_QWORD *)&v33 + 1) = a3;
  LODWORD(v34) = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(_QWORD **)&PiPnpRtlCtx,
                                          0LL,
                                          a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)&v33,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v34;
    if ( (int)v34 >= 0 )
    {
LABEL_10:
      Pool2 = ExAllocatePool2(0x100uLL, 0x26EuLL, 0x63647050u);
      if ( !Pool2 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_3;
      }
      for ( i = 0; ; ++i )
      {
        MatchingFilteredDeviceInterfaceList = ZwEnumerateKey(
                                                KeyHandle,
                                                i,
                                                KeyBasicInformation,
                                                (PVOID)Pool2,
                                                0x26Eu,
                                                &ResultLength);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
        {
          if ( MatchingFilteredDeviceInterfaceList == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( MatchingFilteredDeviceInterfaceList == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
          goto LABEL_29;
        }
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        if ( wcsicmp((const wchar_t *)(Pool2 + 16), L"*") )
          break;
LABEL_22:
        ;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(Pool2 + 16));
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_29;
      GuidString = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_29;
      LODWORD(v28) = 0;
      v12 = 0LL;
      if ( a3
        && *(_QWORD *)(a3 + 16)
        && PiDevCfgParseVariableName(DestinationString.Buffer, (UNICODE_STRING *)&v35, &v28) )
      {
        v28 = 0LL;
        v18 = PiDevCfgResolveVariable(a3, (const WCHAR *)v35.m128i_i64[1], &v28);
        MatchingFilteredDeviceInterfaceList = v18;
        if ( v18 >= 0 )
        {
          v19 = *(_DWORD *)(v28 + 32);
          if ( (unsigned int)(v19 - 1) <= 1 )
          {
            Buffer = *(wchar_t **)(v28 + 40);
            MaximumLength = *(_WORD *)(v28 + 36);
            Length = MaximumLength - 2;
LABEL_46:
            if ( v12 )
            {
              if ( *v12 )
              {
                while ( 1 )
                {
                  RtlInitUnicodeString(&v27, v12);
                  v20 = PiDevCfgParseInterfaceKeyName((__int64)&v27, &Guid, &v29);
                  v5 = v29;
                  if ( v20 )
                  {
                    MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                            v31,
                                                            (__int64)&Guid,
                                                            v29,
                                                            1,
                                                            &P,
                                                            0LL);
                    if ( MatchingFilteredDeviceInterfaceList < 0 )
                      break;
                    MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((WCHAR *)P, Handle, a3);
                    ExFreePoolWithTag(P, 0);
                    if ( MatchingFilteredDeviceInterfaceList < 0 )
                      break;
                  }
                  v21 = -1LL;
                  do
                    ++v21;
                  while ( v12[v21] );
                  v12 += v21 + 1;
                  if ( !*v12 )
                    goto LABEL_54;
                }
LABEL_29:
                ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_3:
                if ( Handle )
                  ZwClose(Handle);
                goto LABEL_5;
              }
              goto LABEL_21;
            }
            goto LABEL_18;
          }
          if ( v19 == 7 )
          {
            v12 = *(const WCHAR **)(v28 + 40);
            MaximumLength = GuidString.MaximumLength;
            Buffer = GuidString.Buffer;
            Length = GuidString.Length;
            goto LABEL_46;
          }
LABEL_21:
          ZwClose(Handle);
          Handle = 0LL;
          goto LABEL_22;
        }
        if ( v18 != -1073741772 )
          goto LABEL_21;
        Length = _mm_cvtsi128_si32(v35);
        Buffer = (wchar_t *)_mm_srli_si128(v35, 8).m128i_u64[0];
        MaximumLength = _mm_extract_epi16(v35, 1);
      }
      else
      {
        Buffer = GuidString.Buffer;
        MaximumLength = GuidString.MaximumLength;
        Length = GuidString.Length;
      }
LABEL_18:
      GuidString = 0LL;
      if ( Length < 0x4Cu )
      {
        v16 = -1073741823;
      }
      else
      {
        GuidString.MaximumLength = MaximumLength;
        GuidString.Buffer = Buffer;
        GuidString.Length = 76;
        v16 = RtlGUIDFromString(&GuidString, &Guid);
        if ( v16 >= 0 )
        {
          v17 = Buffer[38];
          if ( v17 == 35 )
          {
            v5 = (unsigned __int64)(Buffer + 39) & -(__int64)(Buffer[39] != 0);
            v29 = v5;
          }
          else if ( v17 )
          {
            v16 = -1073741823;
          }
          else
          {
            v5 = 0LL;
            v29 = 0LL;
          }
        }
      }
      if ( v16 >= 0 )
      {
        MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(v31, (__int64)&Guid, v5, 1, &P, 0LL);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_29;
        MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((WCHAR *)P, Handle, a3);
        ExFreePoolWithTag(P, 0);
LABEL_54:
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_29;
      }
      goto LABEL_21;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
