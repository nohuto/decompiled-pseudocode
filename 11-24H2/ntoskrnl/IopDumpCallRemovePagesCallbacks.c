/*
 * XREFs of IopDumpCallRemovePagesCallbacks @ 0x140590C18
 * Callers:
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059CE74 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     IoSetBugCheckProgressFlag @ 0x14058F2E0 (IoSetBugCheckProgressFlag.c)
 *     IopRemovePageDumpRange @ 0x140591F7C (IopRemovePageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AF8E0 (KeValidateBugCheckCallbackRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopDumpCallRemovePagesCallbacks(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int128 v6; // [rsp+40h] [rbp-58h] BYREF
  __int128 v7; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v9; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+20h]

  v1 = &retaddr;
  v6 = 0LL;
  v7 = 0LL;
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v11 = v3;
    if ( (__int64 *)v3 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    LOBYTE(v1) = KeValidateBugCheckCallbackRecord(v3, 6LL, &v10);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&v6 = 0LL;
      HIDWORD(v6) = a1;
      v4 = 0;
      do
      {
        v7 = 0uLL;
        DWORD2(v6) = 0;
        v9 = 0;
        guard_dispatch_icall_no_overrides(6LL, v3);
        if ( v4 >= 0 && *((_QWORD *)&v7 + 1) )
          v4 = IopRemovePageDumpRange(&v6, &v9);
      }
      while ( v9 );
      if ( v4 < 0 )
      {
        *(_BYTE *)(v3 + 45) = 4;
        LOBYTE(v1) = 4;
      }
      else
      {
        LOBYTE(v1) = 3;
      }
      *(_BYTE *)(v3 + 44) = (_BYTE)v1;
    }
    else if ( !v10 )
    {
      return (char)v1;
    }
    v3 = *(_QWORD *)v3;
  }
  return (char)v1;
}
