/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x1404B4594
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  char v5; // al
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _DWORD v9[4]; // [rsp+20h] [rbp-28h]

  v2 = a2;
  v9[0] = 256;
  v9[1] = 256;
  v4 = a1[a2 + 17] == 0LL;
  v9[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v4 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v9[v2]);
  v5 = RtlpHpLfhContextLockExtension(a1);
  v7 = (_QWORD *)a1[v2 + 17];
  if ( v7 )
    a1[v2 + 17] = *v7;
  LOBYTE(v6) = v5;
  RtlpHpLfhContextUnlockExtension(a1, v6);
  if ( !v7 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v9[v2]);
  return (__int64)v7;
}
