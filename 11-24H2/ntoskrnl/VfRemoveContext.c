/*
 * XREFs of VfRemoveContext @ 0x140610980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViFreeContextTable @ 0x140B848D8 (ViFreeContextTable.c)
 *     ViGetContextPointer @ 0x140B848F8 (ViGetContextPointer.c)
 *     ViIsContextIdValid @ 0x140B84944 (ViIsContextIdValid.c)
 *     ViLockContextPointer @ 0x140B84964 (ViLockContextPointer.c)
 *     ViUnlockContextPointer @ 0x140B84A0C (ViUnlockContextPointer.c)
 */

__int64 __fastcall VfRemoveContext(unsigned __int16 *a1)
{
  int v2; // r14d
  unsigned int v4; // r8d
  __int64 ContextPointer; // rax
  volatile __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = -1073741275;
  if ( !ViVerifierEnabled )
    return 3221225473LL;
  if ( !(unsigned __int8)ViIsContextIdValid(*a1, a1[1]) )
    return 3221225485LL;
  ContextPointer = ViGetContextPointer(*((_QWORD *)a1 + 1), v4);
  v6 = (volatile __int64 *)ContextPointer;
  if ( !ContextPointer )
    return 3221225659LL;
  if ( !(unsigned __int8)ViLockContextPointer(ContextPointer) )
    return (unsigned int)v2;
  v9 = (volatile signed __int32 *)*v6;
  v10 = a1[1];
  if ( *(unsigned __int16 **)(*v6 + 8 * v10 + 8) != a1
    || (*(_QWORD *)&v9[2 * v10 + 2] = 0LL, v2 = 0, _InterlockedExchangeAdd(v9 + 1, 0xFFFFFFFF) != 1) )
  {
    ViUnlockContextPointer(v6);
    if ( v2 >= 0 && !((_DWORD)v11 + _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, v11)) )
      guard_dispatch_icall_no_overrides(a1, v11, v12, v13);
    return (unsigned int)v2;
  }
  _InterlockedExchange64(v6, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
    guard_dispatch_icall_no_overrides(a1, 0xFFFFFFFFLL, v7, v8);
  ViFreeContextTable((PVOID)v9);
  return 0LL;
}
