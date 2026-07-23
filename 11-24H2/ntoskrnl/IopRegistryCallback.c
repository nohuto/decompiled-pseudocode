/*
 * XREFs of IopRegistryCallback @ 0x140A78E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140A78FB4 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  wchar_t **v4; // rsi
  _QWORD *v5; // rbp
  HANDLE *v6; // rbx
  ULONG *v7; // r14
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r12
  __int64 v9; // rdx
  bool v10; // zf
  NTSTATUS result; // eax
  UNICODE_STRING v12[4]; // [rsp+50h] [rbp-48h] BYREF
  char v13; // [rsp+A0h] [rbp+8h] BYREF
  void *v14; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v14 = 0LL;
  v2 = 14LL * a1;
  v12[0] = 0LL;
  v13 = 0;
  RtlInitUnicodeString(v12, (&IopRegistryRegisteredCallbacks)[v2]);
  v4 = &(&IopRegistryRegisteredCallbacks)[v2];
  v4[8] = 0LL;
  v4[10] = (wchar_t *)IopRegistryCallback;
  v4[11] = v1;
  v5 = (wchar_t **)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 24);
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(*v5, v3);
    v7 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    v6 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
    result = ZwNotifyChangeKey(*v6, 0LL, (PIO_APC_ROUTINE)(v4 + 8), (PVOID)1, IoStatusBlock, *v7, 1u, 0LL, 0, 1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    v6 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    v7 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
  }
  if ( (int)IopRegistryOpenDeepestPath(v12, &v14, &v13) < 0 )
    goto LABEL_8;
  ZwClose(*v6);
  v10 = v13 == 1;
  *v6 = v14;
  if ( v10 )
  {
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
    guard_dispatch_icall_no_overrides(*v5, v9);
  }
  result = ZwNotifyChangeKey(*v6, 0LL, (PIO_APC_ROUTINE)(v4 + 8), (PVOID)1, IoStatusBlock, *v7, 1u, 0LL, 0, 1u);
  if ( result < 0 )
  {
LABEL_8:
    result = ZwClose(*v6);
    *v7 = 0;
  }
  return result;
}
