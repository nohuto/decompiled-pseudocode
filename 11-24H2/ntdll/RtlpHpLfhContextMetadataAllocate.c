/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x1800D6728
 * Callers:
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800D6160 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800D65B0 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800D6668 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800D6800 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  _RTL_SRWLOCK *Value; // rdi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(unsigned __int64, __int64); // rax
  unsigned __int64 v9; // rcx
  _DWORD v11[4]; // [rsp+20h] [rbp-28h]

  v2 = a2;
  v11[0] = 256;
  v11[1] = 256;
  v4 = a1[a2 + 17].Value == 0;
  v11[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v4 )
    goto LABEL_6;
  RtlpHpLfhContextLockExtension(a1);
  Value = (_RTL_SRWLOCK *)a1[v2 + 17].Value;
  if ( Value )
    a1[v2 + 17] = (_RTL_SRWLOCK)Value->0;
  RtlReleaseSRWLockExclusive(a1 + 16);
  if ( !Value )
  {
LABEL_6:
    v7 = (unsigned int)v11[v2];
    v8 = (__int64 (__fastcall *)(unsigned __int64, __int64))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[5].Value);
    v9 = a1->Value;
    if ( v8 == RtlpHpSegLfhExtendContext )
      return RtlpHpSegLfhExtendContext(v9, v7);
    else
      return v8(v9, v7);
  }
  return (__int64)Value;
}
