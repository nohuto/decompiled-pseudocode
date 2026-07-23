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

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  _RTL_SRWLOCK *Value; // rdi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)($2F38BEDF952D5DA5F266621B11247D04, __int64); // rax
  _RTL_SRWLOCK v9; // rcx
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
    v8 = (__int64 (__fastcall *)($2F38BEDF952D5DA5F266621B11247D04, __int64))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[5].Value);
    v9.0 = ($2F38BEDF952D5DA5F266621B11247D04)a1->Value;
    if ( (char *)v8 == (char *)RtlpHpSegLfhExtendContext )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpHpSegLfhExtendContext)(v9.0, v7);
    else
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(v9.0, v7);
  }
  return (__int64)Value;
}
