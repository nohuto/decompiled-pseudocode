/*
 * XREFs of ExpPoolTypeToPoolFlags @ 0x140B761C0
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x1404877E0 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithQuota @ 0x140652560 (ExAllocatePoolWithQuota.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPoolTypeToPoolFlags(int a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx

  v3 = 256LL;
  if ( (a1 & 1) == 0 )
  {
    v3 = 128LL;
    if ( (a1 & 0x200) != 0 )
      v3 = 64LL;
  }
  if ( a1 < 0 )
    v3 = 64LL;
  v4 = v3 | 4;
  if ( (a1 & 0x20) == 0 )
    v4 = v3;
  v5 = v4 | 2;
  if ( (a1 & 0x400) != 0 )
    v5 = v4;
  if ( a2 )
  {
    v5 |= 1uLL;
    if ( (a1 & 8) == 0 )
      v5 |= 0x20uLL;
  }
  if ( (a1 & 0xDE) == 0 )
    return v5;
  v6 = v5 | 8;
  if ( (a1 & 4) == 0 )
    v6 = v5;
  v7 = v6 | 0x200;
  if ( (a1 & 0x80u) == 0 )
    v7 = v6;
  v8 = v7 | 0x400;
  if ( (a1 & 0x40) == 0 )
    v8 = v7;
  if ( !a2 && (a1 & 0x10) != 0 )
    return v8 | 0x20;
  return v8;
}
