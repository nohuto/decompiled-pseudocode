/*
 * XREFs of IopRegistryCallback @ 0x140A7F6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140A7F804 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  wchar_t **v6; // rsi
  _QWORD *v7; // rbp
  HANDLE *v8; // rbx
  ULONG *v9; // r14
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  NTSTATUS result; // eax
  UNICODE_STRING v16[4]; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+A0h] [rbp+8h] BYREF
  void *v18; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v18 = 0LL;
  v2 = 14LL * a1;
  v16[0] = 0LL;
  v17 = 0;
  RtlInitUnicodeString(v16, (&IopRegistryRegisteredCallbacks)[v2]);
  v6 = &(&IopRegistryRegisteredCallbacks)[v2];
  v6[8] = 0LL;
  v6[10] = (wchar_t *)IopRegistryCallback;
  v6[11] = v1;
  v7 = (wchar_t **)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 24);
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(*v7, v3, v4, v5);
    v9 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    v8 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
    result = ZwNotifyChangeKey(*v8, 0LL, (PIO_APC_ROUTINE)(v6 + 8), (PVOID)1, IoStatusBlock, *v9, 1u, 0LL, 0, 1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    v8 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    v9 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
  }
  if ( (int)IopRegistryOpenDeepestPath(v16, &v18, &v17) < 0 )
    goto LABEL_8;
  ZwClose(*v8);
  v14 = v17 == 1;
  *v8 = v18;
  if ( v14 )
  {
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
    guard_dispatch_icall_no_overrides(*v7, v11, v12, v13);
  }
  result = ZwNotifyChangeKey(*v8, 0LL, (PIO_APC_ROUTINE)(v6 + 8), (PVOID)1, IoStatusBlock, *v9, 1u, 0LL, 0, 1u);
  if ( result < 0 )
  {
LABEL_8:
    result = ZwClose(*v8);
    *v9 = 0;
  }
  return result;
}
