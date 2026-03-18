/*
 * XREFs of KseHookQueryValueKey @ 0x140741420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall KseHookQueryValueKey(__int64 a1, const UNICODE_STRING *a2, __int64 a3, _DWORD *a4)
{
  int v5; // ebx
  unsigned int v7; // ebp
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v5 = a3;
  v7 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_6:
      if ( a4[1] == 4 && a4[2] == 4 && RtlEqualUnicodeString(&KseUseVtHardware, a2, 1u) )
        a4[3] = 0;
      return v7;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v7;
      goto LABEL_6;
    }
  }
  if ( a4[1] == 4 && a4[3] == 4 && RtlEqualUnicodeString(&KseUseVtHardware, a2, 1u) )
    *(_DWORD *)((char *)a4 + (unsigned int)a4[2]) = 0;
  return v7;
}
