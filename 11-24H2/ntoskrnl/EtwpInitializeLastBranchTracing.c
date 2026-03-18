/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x1407B18F4
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInitializeLastBranchTracing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  if ( ((unsigned __int8)&EtwpLastBranchLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140E28EC0 = 0;
  dword_140E28EC4 = 0;
  EtwpLastBranchLookAsideList = 0LL;
  result = guard_dispatch_icall_no_overrides(&v5, &v6, a3, a4);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v5;
    result = v6;
    EtwpLastBranchSupportedOptions = v6;
  }
  return result;
}
