/*
 * XREFs of PnprQueryReplaceFeatures @ 0x1405A4398
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PVOID *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx
  __int64 result; // rax
  _OWORD v5[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+60h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 8);
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  if ( (v2 & 4) != 0 )
  {
    v3 = 8;
  }
  else
  {
    v3 = 0;
    if ( (v2 & 8) != 0 )
      v3 = 16;
  }
  result = v3 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v3;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v5) >= 0 )
    {
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v5[0] + 1));
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v5[0] + 1));
    }
    return 0LL;
  }
  return result;
}
