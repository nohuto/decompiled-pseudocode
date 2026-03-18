/*
 * XREFs of IopCsqCancelRoutine @ 0x14049D370
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCsqCancelRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  v5 = *(_QWORD *)(a2 + 144);
  if ( *(_DWORD *)v5 == 1 )
  {
    v7 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)v5 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    v7 = *(_QWORD *)(a2 + 144);
  }
  *(_QWORD *)(v7 + 56) = 0LL;
  guard_dispatch_icall_no_overrides(v7, &v15, v3, v4);
  guard_dispatch_icall_no_overrides(v7, a2, v8, v9);
  if ( v5 != v7 )
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(a2 + 144) = 0LL;
  }
  LOBYTE(v10) = v15;
  guard_dispatch_icall_no_overrides(v7, v10, v11, v12);
  return guard_dispatch_icall_no_overrides(v7, a2, v13, v14);
}
