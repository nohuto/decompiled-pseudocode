/*
 * XREFs of PpmEventIdleStateChange @ 0x1404920F8
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x140492000 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventIdleStateChange(int a1, int a2)
{
  unsigned __int64 GroupSetMember; // rcx
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-30h]
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v4[0] = a1;
    v4[1] = a2;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v6 = v4;
    v8 = 0;
    v5 = GroupSetMember;
    v7 = 16;
    return EtwTraceKernelEvent((int)&v6, 1, 0x80008000, 4661, 1538);
  }
  return result;
}
