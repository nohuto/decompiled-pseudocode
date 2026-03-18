/*
 * XREFs of _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C01F55C8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00C9854 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(__int64 a1, __int64 a2, __int64 *a3)
{
  char v3; // bl
  char v5; // di
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v10 = 0;
  v5 = a2;
  if ( qword_1C0296468 && (int)qword_1C0296468() >= 0 && qword_1C0296470 )
    qword_1C0296470(&v10);
  if ( !v10 )
    return 1;
  if ( v5 )
    return 1;
  v6 = *((_DWORD *)a3 + 2);
  v8 = *a3;
  v9 = v6;
  if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v8, a2, 0) )
    return 1;
  return v3;
}
