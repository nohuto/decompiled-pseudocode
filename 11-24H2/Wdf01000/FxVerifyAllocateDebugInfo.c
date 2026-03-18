/*
 * XREFs of FxVerifyAllocateDebugInfo @ 0x140096728
 * Callers:
 *     FxVerifierReadObjectDebugInfo @ 0x1400965E4 (FxVerifierReadObjectDebugInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxVerifyAllocateDebugInfo(
        FxObjectDebugInfo **Info,
        wchar_t *HandleNameList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfoFlags a4)
{
  __int64 Pool2; // rbx
  FxObjectDebugInfo **v6; // r14
  unsigned int v8; // edi
  wchar_t v9; // r12
  const char *v10; // rax
  const wchar_t *v11; // rsi
  _UNICODE_STRING objectName; // [rsp+20h] [rbp-79h] BYREF
  FxObjectDebugInfo **v13; // [rsp+30h] [rbp-69h]
  _UNICODE_STRING handleName; // [rsp+38h] [rbp-61h] BYREF
  _STRING string; // [rsp+48h] [rbp-51h] BYREF
  wchar_t ubuffer[40]; // [rsp+60h] [rbp-39h] BYREF

  Pool2 = (__int64)*Info;
  v6 = Info;
  v13 = Info;
  if ( !*HandleNameList )
    return 3221225485LL;
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(64LL, 4 * FxObjectsInfoCount, FxDriverGlobals->Tag);
    if ( !Pool2 )
      return 3221225632LL;
  }
  v8 = 0;
  v9 = *HandleNameList;
  if ( FxObjectsInfoCount )
  {
    do
    {
      objectName = 0LL;
      *(_WORD *)(Pool2 + 4LL * v8) = FxObjectsInfo[v8].ObjectType;
      v10 = FxObjectsInfo[v8].HandleName;
      string = 0LL;
      if ( v10 )
      {
        if ( v9 == 42 )
        {
          *(_WORD *)(Pool2 + 4LL * v8 + 2) |= 1u;
        }
        else
        {
          RtlInitAnsiString(&string, v10);
          memset(ubuffer, 0, sizeof(ubuffer));
          *(_DWORD *)&objectName.Length = 5242880;
          objectName.Buffer = ubuffer;
          if ( RtlAnsiStringToUnicodeString(&objectName, &string, 0) >= 0 )
          {
            v11 = HandleNameList;
            while ( *v11 )
            {
              handleName = 0LL;
              RtlInitUnicodeString(&handleName, v11);
              v11 += ((unsigned __int64)handleName.Length >> 1) + 1;
              if ( !RtlCompareUnicodeString(&handleName, &objectName, 1u) )
              {
                *(_WORD *)(Pool2 + 4LL * v8 + 2) |= 1u;
                break;
              }
            }
          }
        }
      }
      ++v8;
    }
    while ( v8 < FxObjectsInfoCount );
    v6 = v13;
  }
  if ( !*v6 )
    *v6 = (FxObjectDebugInfo *)Pool2;
  return 0LL;
}
