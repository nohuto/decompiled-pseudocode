/*
 * XREFs of RtlDispatchAPC @ 0x18008C740
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlDispatchAPC(void (__fastcall *a1)(__int64), __int64 a2, _ACTIVATION_CONTEXT *a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+30h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v6[0] = 72LL;
  v6[1] = 1LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a3 == (_ACTIVATION_CONTEXT *)-1LL )
  {
    a1(a2);
  }
  else
  {
    RtlActivateActivationContextUnsafeFast(v6, a3);
    a1(a2);
    RtlDeactivateActivationContextUnsafeFast((__int64)v6);
    RtlReleaseActivationContext(a3);
  }
}
