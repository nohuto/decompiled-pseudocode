/*
 * XREFs of HUBID_BuildClassCompatibleID @ 0x14001E360
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x14001E7B4 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14000F93C (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x14001E2B0 (HUBID_AssignIDString.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030164 (HUBMISC_GenerateControllerSuffix.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildClassCompatibleID(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // r14
  __int64 v10; // rax
  int result; // eax
  _BYTE *v12; // r8
  int v13; // r13d
  unsigned int v14; // r14d
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-E0h]
  _QWORD *v17; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+84h] [rbp-7Ch]
  _QWORD v21[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v22; // [rsp+98h] [rbp-68h] BYREF
  char v23; // [rsp+A8h] [rbp-58h] BYREF
  char v24; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v24;
  if ( a3 )
    *a3 = 0LL;
  v6 = *(unsigned __int8 **)(a1 + 2008);
  if ( v6 )
  {
    v7 = v6[6];
    v8 = v6[5];
    v9 = v6[7];
    v20 = v6[6];
  }
  else
  {
    v9 = 0;
    v20 = 0;
    v7 = 0;
    v8 = 0;
  }
  v19 = *(_WORD *)(a1 + 1996);
  if ( (*(_DWORD *)(a1 + 2464) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 2496);
    if ( *(_BYTE *)(v10 + 12) )
    {
      if ( *(_BYTE *)(v10 + 4) )
      {
        result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S");
        if ( result < 0 )
          return result;
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result < 0 )
          return result;
      }
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2496) + 4LL);
  }
  else
  {
    v12 = *(_BYTE **)(a1 + 2104);
    if ( !v12 )
      goto LABEL_20;
    if ( v12[26] )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S", v12 + 18);
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2104) + 18LL);
  }
  if ( *v12 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S");
    if ( result < 0 )
      return result;
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result < 0 )
      return result;
  }
LABEL_20:
  if ( v8 == 1 && (v9 & 0xFFDF) == 0 && (*(_DWORD *)(a1 + 1644) & 0x1000000) != 0 )
  {
    v21[0] = 0x100000LL;
    v21[1] = &v23;
    v22 = 0LL;
    HUBMISC_GenerateControllerSuffix(a1, v21, v12);
    if ( !LOWORD(v21[0]) )
    {
LABEL_27:
      if ( v22.Buffer )
        ExFreePoolWithTag(v22.Buffer, 0x64334855u);
      goto LABEL_29;
    }
    v22.Buffer = (wchar_t *)ExAllocatePool2(64LL, 192LL, 1681082453LL);
    if ( v22.Buffer )
    {
      v17 = v21;
      v22.MaximumLength = 192;
      if ( RtlUnicodeStringPrintf(
             &v22,
             L"USB\\Class_%02X&Subclass_%02X&Prot_%02X&%wZ%cUSB\\Class_%02X&Subclass_%02X&%wZ%cUSB\\Class_%02X&%wZ") >= 0 )
        HUBID_AssignIDString((const void **)&v22, 2, a2, (__int64)a3);
      goto LABEL_27;
    }
  }
LABEL_29:
  v13 = v9;
  v14 = v19;
  LODWORD(v17) = v13;
  result = RtlUnicodeStringPrintf(
             &DestinationString,
             L"USB\\COMPAT_VID_%04X&Class_%02X&SubClass_%02X&Prot_%02X",
             v19,
             v8,
             v7,
             v17);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      LODWORD(v15) = v7;
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"USB\\COMPAT_VID_%04X&Class_%02X&SubClass_%02X",
                 v14,
                 v8,
                 v15);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\COMPAT_VID_%04X&Class_%02X", v14, v8);
          if ( result >= 0 )
          {
            result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
            if ( result >= 0 )
            {
              LODWORD(v16) = v13;
              result = RtlUnicodeStringPrintf(
                         &DestinationString,
                         L"USB\\Class_%02X&SubClass_%02X&Prot_%02X",
                         v8,
                         v7,
                         v16);
              if ( result >= 0 )
              {
                result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                if ( result >= 0 )
                {
                  result = RtlUnicodeStringPrintf(
                             &DestinationString,
                             L"USB\\Class_%02X&SubClass_%02X",
                             v8,
                             (unsigned __int16)v20);
                  if ( result >= 0 )
                  {
                    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                    if ( result >= 0 )
                    {
                      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X", v8);
                      if ( result >= 0 )
                        return HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
