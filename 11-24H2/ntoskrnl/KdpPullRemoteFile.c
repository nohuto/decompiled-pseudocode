/*
 * XREFs of KdpPullRemoteFile @ 0x140B76B48
 * Callers:
 *     KdPullRemoteFile @ 0x140B76618 (KdPullRemoteFile.c)
 *     KdPullRemoteFileEx @ 0x140B76680 (KdPullRemoteFileEx.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x140B766D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B76920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B76D18 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdpPullRemoteFile(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *Pool2; // r14
  int RemoteFile; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rdi
  int v17; // r9d
  __int64 v18; // r15
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-20h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x2000uLL, 0x6F49644BuLL);
  if ( !Pool2 )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v19, (__int64 *)&v20, a1);
  if ( RemoteFile >= 0
    && (memmove(Pool2, *((const void **)a1 + 1), *a1),
        *((_WORD *)Pool2 + ((unsigned __int64)*a1 >> 1)) = 0,
        v13 = v20,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)Pool2,
          v20),
        RemoteFile = guard_dispatch_icall_no_overrides(a6, a2, v13, v14),
        RemoteFile >= 0)
    && (v15 = 0LL, v13) )
  {
    v16 = v19;
    do
    {
      LODWORD(v19) = 0;
      v17 = v13;
      if ( v13 > 0x2000 )
        v17 = 0x2000;
      RemoteFile = KdpReadRemoteFile(v16, v15, (_DWORD)Pool2, v17, (__int64)&v19);
      if ( RemoteFile < 0 )
        break;
      v18 = (unsigned int)v19;
      if ( !(_DWORD)v19 )
        break;
      RemoteFile = guard_dispatch_icall_no_overrides(a6, v15, Pool2, (unsigned int)v19);
      if ( RemoteFile < 0 )
        break;
      v15 += v18;
      v13 -= v18;
    }
    while ( v13 );
  }
  else
  {
    v16 = v19;
  }
  if ( v16 )
    KdpCloseRemoteFile(v16);
  guard_dispatch_icall_no_overrides(a6, (unsigned int)RemoteFile, v11, v12);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)RemoteFile;
}
