/*
 * XREFs of KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B3B28
 * Callers:
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405B3C24 (KiConfigureCooperativeIdleSearchTargets.c)
 * Callees:
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     KiAddSubNodeToIdleSearchContextTargets @ 0x1405B2B70 (KiAddSubNodeToIdleSearchContextTargets.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiConfigureCooperativeIdleSearchContextTargets(__int64 a1, int a2, __int64 a3)
{
  size_t v5; // r8
  size_t v7; // rbx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v11[2]; // [rsp+28h] [rbp-40h] BYREF

  v5 = 16LL * *(unsigned __int16 *)(a3 + 1056);
  v10 = 0LL;
  v11[0] = 0LL;
  v7 = v5 + a3;
  *(_WORD *)(a3 + 1058) = 0;
  v11[1] = 0LL;
  memset_0((void *)(v5 + a3 + 1064), 0, v5);
  memset_0((void *)(v7 + 1064), 255, 2LL * *(unsigned __int16 *)(a3 + 1056));
  v8 = *(_QWORD *)(a1 + 192);
  if ( !a2 )
    return KiAddSubNodeToIdleSearchContextTargets(a3, v8);
  KiInitializeSystemSubNodeEnumerationContext((__int64)v11, *(_WORD *)(v8 + 138));
  while ( 1 )
  {
    result = KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v11, &v10);
    if ( (_DWORD)result )
      break;
    if ( v10 != *(_QWORD *)(a1 + 192) )
      KiAddSubNodeToIdleSearchContextTargets(a3, v10);
  }
  return result;
}
