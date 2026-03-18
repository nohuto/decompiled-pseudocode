/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  bool v6; // zf
  char v7; // al
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-28h]

  v4 = a2;
  v11[0] = 256;
  v11[1] = 256;
  v6 = a1[a2 + 17] == 0LL;
  v11[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v6 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v11[v4], a3, a4);
  v7 = RtlpHpLfhContextLockExtension(a1);
  v9 = (_QWORD *)a1[v4 + 17];
  if ( v9 )
    a1[v4 + 17] = *v9;
  LOBYTE(v8) = v7;
  RtlpHpLfhContextUnlockExtension(a1, v8);
  if ( !v9 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v11[v4], a3, a4);
  return (__int64)v9;
}
