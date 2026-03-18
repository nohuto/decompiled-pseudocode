/*
 * XREFs of PiForEachDriverQueryRoutine @ 0x140A0D3DC
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlULongSub @ 0x140497418 (RtlULongSub.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, ULONG a3, __int64 a4, _QWORD *a5)
{
  ULONG v6; // r10d
  const WCHAR *v7; // rdi
  __int64 result; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG pulResult; // [rsp+70h] [rbp+18h] BYREF

  pulResult = a3;
  v6 = a3;
  v7 = a2;
  DestinationString = 0LL;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return guard_dispatch_icall_no_overrides(*a5, &DestinationString, a4, a5[2]);
    }
    else
    {
      v9 = a5;
      while ( *v7 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v7[v10] );
        v11 = v10 + 1;
        if ( RtlULongSub(v6, 2 * v11, &pulResult) < 0 )
          return 0LL;
        RtlInitUnicodeString(&DestinationString, v7);
        result = guard_dispatch_icall_no_overrides(*v9, &DestinationString, a4, v9[2]);
        if ( (int)result < 0 )
          return result;
        v6 = pulResult;
        if ( pulResult < 2 )
          return result;
        v7 += v11;
      }
    }
  }
  return result;
}
