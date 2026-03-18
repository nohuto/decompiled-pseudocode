/*
 * XREFs of PnprQueryReplaceFeatures @ 0x1405A7BA8
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PVOID *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v11[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v13 = 0;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (v2 & 4) != 0 )
  {
    v4 = 8;
  }
  else
  {
    v4 = 0;
    if ( (v2 & 8) != 0 )
      v4 = 16;
  }
  result = v4 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v4;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v11) >= 0 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(*((_QWORD *)&v11[0] + 1), &v13, v6, v7) >= 0 )
      {
        if ( (v13 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v13 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v13 & 4) != 0 )
          v3 |= 0x20u;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v11[0] + 1), v8, v9, v10);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
