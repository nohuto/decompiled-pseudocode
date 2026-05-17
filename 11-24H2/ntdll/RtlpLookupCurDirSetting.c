/*
 * XREFs of RtlpLookupCurDirSetting @ 0x180083BF4
 * Callers:
 *     RtlpComputeDllPath @ 0x180084520 (RtlpComputeDllPath.c)
 *     RtlpComputeSearchPath @ 0x18010B010 (RtlpComputeSearchPath.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLookupCurDirSetting(__int64 a1, unsigned __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF

  Handle = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    v6 = (HANDLE)qword_1801D2398;
    Handle = (HANDLE)qword_1801D2398;
    if ( !qword_1801D2398 )
    {
      if ( (int)NtOpenKey(&Handle, 1LL, &unk_1801739D8) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = (HANDLE)_InterlockedCompareExchange64(&qword_1801D2398, (signed __int64)Handle, 0LL);
      if ( v6 )
      {
        NtClose(Handle);
        Handle = v6;
      }
      else
      {
        v6 = Handle;
      }
    }
    if ( (int)NtQueryValueKey(v6, a1, 2LL, &v11, 16, &v10) >= 0 && v10 == 16 )
    {
      v7 = HIDWORD(v11);
      if ( HIDWORD(v11) <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
