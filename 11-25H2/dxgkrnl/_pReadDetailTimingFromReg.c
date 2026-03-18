/*
 * XREFs of _pReadDetailTimingFromReg @ 0x14026E584
 * Callers:
 *     _pLoadAdditinalMode @ 0x1402C8CEC (_pLoadAdditinalMode.c)
 * Callees:
 *     ?IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z @ 0x140090734 (-IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _pVerifyDetailTiming @ 0x14026E6F0 (_pVerifyDetailTiming.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  NTSTATUS v9; // eax
  int valid; // ebx
  unsigned int v11; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-60h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Ch]
  int v16; // [rsp+40h] [rbp-58h]
  unsigned int v17; // [rsp+44h] [rbp-54h]

  ResultLength = 0;
  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  while ( (unsigned int)v5 < 6 )
  {
    v9 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&unk_1400A62A0 + (unsigned int)v5,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    valid = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry4(3LL, v7, v6, (unsigned int)v5, v9);
      WdLogGlobalForLineNumber = 466;
      return (unsigned int)valid;
    }
    if ( v15 != 4 || v16 != 4 )
    {
      WdLogSingleEntry4(3LL, v7, v6, (unsigned int)v5, v9);
      WdLogGlobalForLineNumber = 423;
      return (unsigned int)-1073741811;
    }
    v11 = v17;
    if ( (_DWORD)v5 )
    {
      a4[v5 + 1] = v17;
    }
    else
    {
      *a4 = HIBYTE(v17);
      a4[1] = v11 & 0xFFFFFF;
      valid = IsValidVideoStandardType((enum _D3DKMDT_VIDEO_SIGNAL_STANDARD)HIBYTE(v11));
      if ( valid < 0 )
      {
        WdLogSingleEntry2(3LL, v6, v7);
        WdLogGlobalForLineNumber = 450;
        return (unsigned int)valid;
      }
    }
    v5 = (unsigned int)(v5 + 1);
  }
  return (unsigned int)pVerifyDetailTiming(a4 + 2);
}
