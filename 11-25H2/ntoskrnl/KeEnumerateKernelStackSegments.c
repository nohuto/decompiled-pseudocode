/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x140228B88
 * Callers:
 *     PspReaper @ 0x1402289F0 (PspReaper.c)
 *     MmOutPageKernelStack @ 0x1402D2FE4 (MmOutPageKernelStack.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057B408 (DbgkpLkmdSnapKernelStack.c)
 *     IoAddProcessThreadsToDump @ 0x14059C8DC (IoAddProcessThreadsToDump.c)
 *     PsDereferenceKernelStack @ 0x140A871B0 (PsDereferenceKernelStack.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 * Callees:
 *     PspDeleteKernelStack @ 0x140228D10 (PspDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // r10
  __int128 v11; // [rsp+20h] [rbp-59h] BYREF
  __int128 v12; // [rsp+30h] [rbp-49h]
  __int128 v13; // [rsp+40h] [rbp-39h]
  __int128 v14; // [rsp+50h] [rbp-29h]
  _OWORD v15[4]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v11 + 1) = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v12 = v6;
  v13 = *(_OWORD *)(a1 + 1048);
  v14 = *(_OWORD *)(a1 + 1032);
  for ( *((_QWORD *)&v12 + 1) = v7; ; v7 = *((_QWORD *)&v12 + 1) )
  {
    v15[0] = v11;
    v15[1] = v12;
    v15[2] = v13;
    v15[3] = v14;
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
    {
      v11 = *(_OWORD *)(v7 + 16);
      v12 = *(_OWORD *)(v7 + 32);
      v13 = *(_OWORD *)(v7 + 48);
      v14 = *(_OWORD *)(v7 + 64);
    }
    if ( a2 == PspDeleteKernelStack )
      result = PspDeleteKernelStack(a1, v15, a3);
    else
      result = a2 == MiOutPageSingleKernelStack
             ? MiOutPageSingleKernelStack(a1, v15, a3)
             : guard_dispatch_icall_no_overrides(a1, v15);
    if ( !v8 )
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
    return guard_dispatch_icall_no_overrides(a1, &v11);
  }
  return result;
}
