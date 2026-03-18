/*
 * XREFs of DifEnumeratePluginData @ 0x1406045C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403EB784 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifEnumeratePluginData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 i; // rbx
  __int64 v10; // rdi
  BOOLEAN j; // dl
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  v6 = 0;
  VfAvlInitializeLockContext((__int64)&v15, 0);
  if ( !v7 || !a5 )
    return 3221225485LL;
  ViAvlRaiseIrqlSafe((__int64)&v15);
  for ( i = 0LL; (unsigned int)i < dword_140F04178; i = (unsigned int)(i + 1) )
  {
    v10 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140F04170, (__int64)&v15);
    for ( j = 1; ; j = 0 )
    {
      v13 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v10 + qword_140F04170), j);
      if ( !v13 || v6 >= a2 )
        break;
      v12 = v13[8];
      if ( v12 )
      {
        if ( *(_QWORD *)(v12 + 96) != v12 + 96 )
          guard_dispatch_icall_no_overrides(v6++);
      }
    }
    ViAvlReleaseTableLockFromDpcLevel(v10 + qword_140F04170, (__int64)&v15);
  }
  VfAvlCleanupLockContext((__int64)&v15, v8);
  result = 0LL;
  *a5 = v6;
  return result;
}
