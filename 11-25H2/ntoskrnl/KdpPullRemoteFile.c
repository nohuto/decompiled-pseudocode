/*
 * XREFs of KdpPullRemoteFile @ 0x140B66B48
 * Callers:
 *     KdPullRemoteFile @ 0x140B66618 (KdPullRemoteFile.c)
 *     KdPullRemoteFileEx @ 0x140B66680 (KdPullRemoteFileEx.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x140B666D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B66920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B66D18 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdpPullRemoteFile(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *Pool2; // r14
  int RemoteFile; // ebx
  unsigned __int64 v10; // rsi
  int v11; // ebp
  __int64 v12; // rdi
  int v13; // r9d
  __int64 v14; // r15
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x2000uLL, 0x6F49644BuLL);
  if ( !Pool2 )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v15, (__int64 *)&v16, a1);
  if ( RemoteFile >= 0
    && (memmove(Pool2, *((const void **)a1 + 1), *a1),
        *((_WORD *)Pool2 + ((unsigned __int64)*a1 >> 1)) = 0,
        v10 = v16,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)Pool2,
          v16),
        RemoteFile = guard_dispatch_icall_no_overrides(a6),
        RemoteFile >= 0)
    && (v11 = 0, v10) )
  {
    v12 = v15;
    do
    {
      LODWORD(v15) = 0;
      v13 = v10;
      if ( v10 > 0x2000 )
        v13 = 0x2000;
      RemoteFile = KdpReadRemoteFile(v12, v11, (_DWORD)Pool2, v13, (__int64)&v15);
      if ( RemoteFile < 0 )
        break;
      v14 = (unsigned int)v15;
      if ( !(_DWORD)v15 )
        break;
      RemoteFile = guard_dispatch_icall_no_overrides(a6);
      if ( RemoteFile < 0 )
        break;
      v11 += v14;
      v10 -= v14;
    }
    while ( v10 );
  }
  else
  {
    v12 = v15;
  }
  if ( v12 )
    KdpCloseRemoteFile(v12);
  guard_dispatch_icall_no_overrides(a6);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)RemoteFile;
}
