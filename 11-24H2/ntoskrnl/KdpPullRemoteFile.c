/*
 * XREFs of KdpPullRemoteFile @ 0x140B78B48
 * Callers:
 *     KdPullRemoteFile @ 0x140B78618 (KdPullRemoteFile.c)
 *     KdPullRemoteFileEx @ 0x140B78680 (KdPullRemoteFileEx.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KdpCloseRemoteFile @ 0x140B786D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B78920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B78D18 (KdpReadRemoteFile.c)
 */

__int64 __fastcall KdpPullRemoteFile(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *Pool2; // r14
  int RemoteFile; // ebx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // r15
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KdPitchDebugger )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x2000uLL, 0x6F49644BuLL);
  if ( !Pool2 )
    return 3221225495LL;
  RemoteFile = KdpCreateRemoteFile(&v16, (__int64 *)&v17, a1);
  if ( RemoteFile >= 0
    && (memmove(Pool2, *((const void **)a1 + 1), *a1),
        *((_WORD *)Pool2 + ((unsigned __int64)*a1 >> 1)) = 0,
        v11 = v17,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)Pool2,
          v17),
        RemoteFile = guard_dispatch_icall_no_overrides(a6, a2),
        RemoteFile >= 0)
    && (v12 = 0LL, v11) )
  {
    v13 = v16;
    do
    {
      LODWORD(v16) = 0;
      v14 = v11;
      if ( v11 > 0x2000 )
        v14 = 0x2000;
      RemoteFile = KdpReadRemoteFile(v13, v12, (_DWORD)Pool2, v14, (__int64)&v16);
      if ( RemoteFile < 0 )
        break;
      v15 = (unsigned int)v16;
      if ( !(_DWORD)v16 )
        break;
      RemoteFile = guard_dispatch_icall_no_overrides(a6, v12);
      if ( RemoteFile < 0 )
        break;
      v12 += v15;
      v11 -= v15;
    }
    while ( v11 );
  }
  else
  {
    v13 = v16;
  }
  if ( v13 )
    KdpCloseRemoteFile(v13);
  guard_dispatch_icall_no_overrides(a6, (unsigned int)RemoteFile);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)RemoteFile;
}
