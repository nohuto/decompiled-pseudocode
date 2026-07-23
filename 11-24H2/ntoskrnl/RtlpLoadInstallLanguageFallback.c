/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x14082BC48
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14082E4EC (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x1406A36F4 (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     LdrpOpenKey @ 0x140784064 (LdrpOpenKey.c)
 *     LdrpQueryValueKey @ 0x1407840B0 (LdrpQueryValueKey.c)
 *     RtlCultureNameToLCID @ 0x140A91BE0 (RtlCultureNameToLCID.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  void *v5; // rsi
  void *v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  const WCHAR *i; // rdi
  WCHAR *v10; // rcx
  WCHAR j; // ax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+48h] BYREF

  Handle = 0LL;
  Lcid = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (void *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x158uLL);
      *a2 = 0;
      v17 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v7 = LdrpOpenKey(&DestinationString, 0LL, v8, &Handle);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v13) = 344;
        v7 = LdrpQueryValueKey(Handle, &DestinationString, &v17, v5, (ULONG *)&v13);
        if ( v7 >= 0 )
        {
          if ( v17 != 1 )
            goto LABEL_9;
          for ( i = (const WCHAR *)v5; *i; ++i )
          {
            v10 = (WCHAR *)(i + 1);
            if ( *i == 44 )
            {
              *i++ = 0;
              for ( j = *v10; j == 32; j = *i )
                ++i;
              break;
            }
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            *a2 = Lcid;
            if ( *i )
            {
              RtlInitUnicodeString(&DestinationString, i);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                *a3 = Lcid;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_9:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
