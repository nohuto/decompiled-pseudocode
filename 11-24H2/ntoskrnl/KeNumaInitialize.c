/*
 * XREFs of KeNumaInitialize @ 0x140C26C54
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KeNumaInitialize()
{
  __int64 result; // rax
  __int128 v1; // [rsp+30h] [rbp-40h] BYREF
  __int128 v2; // [rsp+40h] [rbp-30h]
  __int128 v3; // [rsp+50h] [rbp-20h]
  __int64 (__fastcall *v4)(); // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v5)(); // [rsp+68h] [rbp-8h]
  int v6; // [rsp+80h] [rbp+10h] BYREF

  v6 = 0;
  v4 = 0LL;
  LOWORD(v5) = 0;
  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  result = guard_dispatch_icall_no_overrides(11LL, 64LL, &v1, &v6);
  if ( (int)result >= 0 )
  {
    KeNumberNodes = v1;
    KiNumaQueryProcessorNode = *((_QWORD *)&v1 + 1);
    KiNumaQueryNodeCapacity[0] = v4;
    KiNumaQueryNodeDistance = v5;
    KiNumaQueryProximityNode = *((_QWORD *)&v2 + 1);
    KiNumaQueryProximityId = *((_QWORD *)&v3 + 1);
    result = (__int64)KiQueryProximityNode;
    PnpQueryProximityNode = (__int64)KiQueryProximityNode;
  }
  return result;
}
