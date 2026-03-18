/*
 * XREFs of IopRegistryCallback @ 0x140A7C0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140A7C224 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  wchar_t **v3; // rsi
  _QWORD *v4; // rbp
  HANDLE *v5; // rbx
  ULONG *v6; // r14
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r12
  bool v8; // zf
  NTSTATUS result; // eax
  UNICODE_STRING v10[4]; // [rsp+50h] [rbp-48h] BYREF
  char v11; // [rsp+A0h] [rbp+8h] BYREF
  void *v12; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v12 = 0LL;
  v2 = 14LL * a1;
  v10[0] = 0LL;
  v11 = 0;
  RtlInitUnicodeString(v10, (&IopRegistryRegisteredCallbacks)[v2]);
  v3 = &(&IopRegistryRegisteredCallbacks)[v2];
  v3[8] = 0LL;
  v3[10] = (wchar_t *)IopRegistryCallback;
  v3[11] = v1;
  v4 = (wchar_t **)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 24);
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(*v4);
    v6 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    v5 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
    result = ZwNotifyChangeKey(*v5, 0LL, (PIO_APC_ROUTINE)(v3 + 8), (PVOID)1, IoStatusBlock, *v6, 1u, 0LL, 0, 1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    v5 = (HANDLE *)&(&IopRegistryRegisteredCallbacks)[v2 + 2];
    v6 = (ULONG *)((char *)&IopRegistryRegisteredCallbacks + v2 * 8 + 8);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
  }
  if ( (int)IopRegistryOpenDeepestPath(v10, &v12, &v11) < 0 )
    goto LABEL_8;
  ZwClose(*v5);
  v8 = v11 == 1;
  *v5 = v12;
  if ( v8 )
  {
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
    guard_dispatch_icall_no_overrides(*v4);
  }
  result = ZwNotifyChangeKey(*v5, 0LL, (PIO_APC_ROUTINE)(v3 + 8), (PVOID)1, IoStatusBlock, *v6, 1u, 0LL, 0, 1u);
  if ( result < 0 )
  {
LABEL_8:
    result = ZwClose(*v5);
    *v6 = 0;
  }
  return result;
}
