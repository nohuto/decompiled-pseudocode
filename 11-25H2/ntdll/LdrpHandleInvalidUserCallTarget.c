/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x180122F30
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x180122FF0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180123040 (LdrpValidateUserCallTargetES.c)
 *     LdrpDispatchUserCallTarget @ 0x180123090 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x1801230F0 (LdrpDispatchUserCallTargetES.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 */

void __fastcall LdrpHandleInvalidUserCallTarget()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // zf

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))RtlpHandleInvalidUserCallTarget(v0);
  if ( !v6 )
    v1(v3, v2, v4, v5);
}
