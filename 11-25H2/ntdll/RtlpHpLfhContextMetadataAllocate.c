/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x180009AA4
 * Callers:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180009B7C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800B810C (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x180009A88 (RtlpHpLfhContextLockExtension.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegLfhExtendContext @ 0x1800B7D20 (RtlpHpSegLfhExtendContext.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(__int64 a1, int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  _QWORD *v5; // rdi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rcx
  _DWORD v11[4]; // [rsp+20h] [rbp-28h]

  v2 = a2;
  v11[0] = 256;
  v11[1] = 256;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 136) == 0LL;
  v11[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v4 )
    goto LABEL_6;
  RtlpHpLfhContextLockExtension(a1);
  v5 = *(_QWORD **)(a1 + 8 * v2 + 136);
  if ( v5 )
    *(_QWORD *)(a1 + 8 * v2 + 136) = *v5;
  RtlReleaseSRWLockExclusive(a1 + 128);
  if ( !v5 )
  {
LABEL_6:
    v7 = (unsigned int)v11[v2];
    v8 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40));
    v9 = *(_QWORD *)a1;
    if ( v8 == RtlpHpSegLfhExtendContext )
      return RtlpHpSegLfhExtendContext(v9, v7);
    else
      return v8(v9, v7);
  }
  return (__int64)v5;
}
