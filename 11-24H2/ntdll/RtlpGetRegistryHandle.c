/*
 * XREFs of RtlpGetRegistryHandle @ 0x1800B6868
 * Callers:
 *     RtlpGetTimeZoneInfoHandle @ 0x1800B5AFC (RtlpGetTimeZoneInfoHandle.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800B5BF0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800B5EA4 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x1800B6100 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1800B71F0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1800B73A0 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x18013EAF0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x180162030 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const wchar_t *a2, char a3, const wchar_t **a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  int appended; // ebx
  int v10; // eax
  _DWORD v11[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 Atom; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  __int128 v14; // [rsp+68h] [rbp+17h] BYREF
  __int128 v15; // [rsp+78h] [rbp+27h]
  __int128 v16; // [rsp+88h] [rbp+37h]

  result = 0LL;
  *(_QWORD *)&v16 = 0LL;
  DWORD2(v16) = 0;
  v11[1] = 0;
  v14 = 0LL;
  v15 = 0LL;
  UnicodeString = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      Atom = RtlpAllocateAtom(524LL);
      if ( Atom )
      {
        v11[0] = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_7;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)v11, (const void **)&UnicodeString);
          if ( UnicodeString.Buffer )
            RtlpSysVolFree((__int64)UnicodeString.Buffer);
        }
        else
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, *((const wchar_t **)&RtlpRegistryPaths + v8));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_7:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)v11, a2);
            if ( appended >= 0 )
            {
              LODWORD(v14) = 48;
              *(_QWORD *)&v15 = v11;
              *((_QWORD *)&v14 + 1) = 0LL;
              DWORD2(v15) = 576;
              v16 = 0LL;
              if ( a3 )
                v10 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v10 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v10;
            }
          }
        }
        RtlpSysVolFree(Atom);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
