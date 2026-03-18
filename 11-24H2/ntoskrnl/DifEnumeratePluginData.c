/*
 * XREFs of DifEnumeratePluginData @ 0x140610580
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403EA300 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403F1260 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403F12C4 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403F1490 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifEnumeratePluginData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 i; // rbx
  __int64 v11; // rdi
  BOOLEAN j; // dl
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 result; // rax
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  v7 = 0;
  VfAvlInitializeLockContext((__int64)&v19, 0);
  if ( !v8 || !a5 )
    return 3221225485LL;
  ViAvlRaiseIrqlSafe((__int64)&v19);
  for ( i = 0LL; (unsigned int)i < dword_140F045B8; i = (unsigned int)(i + 1) )
  {
    v11 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140F045B0, (__int64)&v19);
    for ( j = 1; ; j = 0 )
    {
      v16 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v11 + qword_140F045B0), j);
      if ( !v16 || v7 >= a2 )
        break;
      v13 = (_QWORD *)v16[8];
      if ( v13 )
      {
        v14 = (_QWORD *)v13[12];
        if ( v14 != v13 + 12 )
        {
          v15 = *(v14 - 1);
          v18 = *(_OWORD *)(*v13 + 40LL);
          guard_dispatch_icall_no_overrides(v7++, &v18, v15, a4);
        }
      }
    }
    ViAvlReleaseTableLockFromDpcLevel(v11 + qword_140F045B0, (__int64)&v19);
  }
  VfAvlCleanupLockContext((__int64)&v19, v9);
  result = 0LL;
  *a5 = v7;
  return result;
}
