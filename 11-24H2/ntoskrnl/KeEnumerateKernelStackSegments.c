/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x14021F4D8
 * Callers:
 *     MmOutPageKernelStack @ 0x14021EDF0 (MmOutPageKernelStack.c)
 *     PspReaper @ 0x14021F340 (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057BBB8 (DbgkpLkmdSnapKernelStack.c)
 *     IoAddProcessThreadsToDump @ 0x14059CFE4 (IoAddProcessThreadsToDump.c)
 *     PsDereferenceKernelStack @ 0x140A879F0 (PsDereferenceKernelStack.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     PspDeleteKernelStack @ 0x14021F670 (PspDeleteKernelStack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        void (__fastcall *a2)(__int64 a1, _QWORD *a2, __int64 a3),
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r10
  __int128 v11; // [rsp+20h] [rbp-59h] BYREF
  __int128 v12; // [rsp+30h] [rbp-49h]
  __int128 v13; // [rsp+40h] [rbp-39h]
  __int128 v14; // [rsp+50h] [rbp-29h]
  _OWORD v15[4]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v11 + 1) = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v12 = v7;
  v13 = *(_OWORD *)(a1 + 1048);
  v14 = *(_OWORD *)(a1 + 1032);
  for ( *((_QWORD *)&v12 + 1) = v8; ; v8 = *((_QWORD *)&v12 + 1) )
  {
    v15[0] = v11;
    v15[1] = v12;
    v15[2] = v13;
    v15[3] = v14;
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
    {
      v11 = *(_OWORD *)(v8 + 16);
      v12 = *(_OWORD *)(v8 + 32);
      v13 = *(_OWORD *)(v8 + 48);
      v14 = *(_OWORD *)(v8 + 64);
    }
    if ( (char *)a2 == (char *)PspDeleteKernelStack )
    {
      PspDeleteKernelStack(a1, v15, a3);
    }
    else if ( a2 == MiOutPageSingleKernelStack )
    {
      MiOutPageSingleKernelStack(a1, v15, a3);
    }
    else
    {
      guard_dispatch_icall_no_overrides(a1, v15, a3, a4);
    }
    if ( !v9 )
      break;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    v13 = 0uLL;
    v14 = 0uLL;
    *((_QWORD *)&v11 + 1) = v10 + (unsigned int)KeDecoupledStateSaveAreaLength - (unsigned int)KeXStateStackSize;
    *(_QWORD *)&v11 = v10 + (unsigned int)KeDecoupledStateSaveAreaLength;
    *(_QWORD *)&v12 = v10;
    *((_QWORD *)&v12 + 1) = v11;
    guard_dispatch_icall_no_overrides(a1, &v11, a3, v11);
  }
}
