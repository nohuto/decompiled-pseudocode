/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x14097C3C0
 * Callers:
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  int *v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v6[0] = a2 - 4;
  v9 = -16843010;
  v2 = 0;
  v6[1] = 0;
  v7 = &v9;
  v8 = 4;
  if ( (int)guard_dispatch_icall_no_overrides(a1, 0LL, v6, 1LL) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0LL) < 0 )
      return (unsigned int)-1073741491;
    return v2;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
