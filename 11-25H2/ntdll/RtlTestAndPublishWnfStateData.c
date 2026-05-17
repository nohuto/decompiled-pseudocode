/*
 * XREFs of RtlTestAndPublishWnfStateData @ 0x1800F2E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpWnfETWEventPublish @ 0x1800F2FC8 (RtlpWnfETWEventPublish.c)
 *     ZwUpdateWnfStateData @ 0x180166E30 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlTestAndPublishWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  int updated; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = a1;
  updated = ZwUpdateWnfStateData(&v10, a3, a4, a2, a5, a6, 1);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486LL;
  if ( *(_BYTE *)v8 && updated >= 0 )
    RtlpWnfETWEventPublish(v10, a4);
  return (unsigned int)updated;
}
