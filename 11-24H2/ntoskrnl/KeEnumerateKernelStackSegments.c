/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x140269F48
 * Callers:
 *     MmOutPageKernelStack @ 0x14026962C (MmOutPageKernelStack.c)
 *     PspReaper @ 0x140269DB0 (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057E728 (DbgkpLkmdSnapKernelStack.c)
 *     IoAddProcessThreadsToDump @ 0x1405A00C0 (IoAddProcessThreadsToDump.c)
 *     PsDereferenceKernelStack @ 0x140A8B500 (PsDereferenceKernelStack.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 * Callees:
 *     PspDeleteKernelStack @ 0x14026A0E0 (PspDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r10
  __int128 v12; // [rsp+20h] [rbp-59h] BYREF
  __int128 v13; // [rsp+30h] [rbp-49h]
  __int128 v14; // [rsp+40h] [rbp-39h]
  __int128 v15; // [rsp+50h] [rbp-29h]
  _OWORD v16[4]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&v12 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v12 + 1) = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v13 = v7;
  v14 = *(_OWORD *)(a1 + 1048);
  v15 = *(_OWORD *)(a1 + 1032);
  for ( *((_QWORD *)&v13 + 1) = v8; ; v8 = *((_QWORD *)&v13 + 1) )
  {
    v16[0] = v12;
    v16[1] = v13;
    v16[2] = v14;
    v16[3] = v15;
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
    {
      v12 = *(_OWORD *)(v8 + 16);
      v13 = *(_OWORD *)(v8 + 32);
      v14 = *(_OWORD *)(v8 + 48);
      v15 = *(_OWORD *)(v8 + 64);
    }
    if ( a2 == PspDeleteKernelStack )
      result = PspDeleteKernelStack(a1, v16, a3);
    else
      result = a2 == MiOutPageSingleKernelStack
             ? MiOutPageSingleKernelStack(a1, v16, a3)
             : guard_dispatch_icall_no_overrides(a1, v16, a3, a4);
    if ( !v9 )
      break;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v14 = 0uLL;
    v15 = 0uLL;
    *((_QWORD *)&v12 + 1) = v11 + (unsigned int)KeDecoupledStateSaveAreaLength - (unsigned int)KeXStateStackSize;
    *(_QWORD *)&v12 = v11 + (unsigned int)KeDecoupledStateSaveAreaLength;
    *(_QWORD *)&v13 = v11;
    *((_QWORD *)&v13 + 1) = v12;
    return guard_dispatch_icall_no_overrides(a1, &v12, a3, v12);
  }
  return result;
}
