/*
 * XREFs of CmpCleanupParseContext @ 0x14092F5F0
 * Callers:
 *     CmpFreeParseContext @ 0x1406F30D8 (CmpFreeParseContext.c)
 *     CmpCreatePredefined @ 0x1407CA5DC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x140468510 (VrpOriginalKeyNameParameterCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 result; // rax
  void (__fastcall *v6)(__int64, _QWORD *); // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( a2 )
    {
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    }
    else
    {
      CmpLockRegistry(a1);
      CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
      CmpUnlockRegistry(v9);
    }
  }
  v3 = (_QWORD *)(a1 + 144);
  v4 = (_QWORD *)*v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_13;
  result = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 )
    goto LABEL_13;
  *v3 = result;
  *(_QWORD *)(result + 8) = v3;
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v6 = (void (__fastcall *)(__int64, _QWORD *))v4[4];
      if ( v6 )
      {
        v7 = v4 + 6;
        v8 = (__int64)(v4 + 2);
        if ( v6 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v8, v7);
        else
          guard_dispatch_icall_no_overrides(v8, v7);
      }
      CmpFreeTransientPoolWithTag(v4, 0x50454D43u);
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 )
        break;
      result = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        break;
      *v3 = result;
      *(_QWORD *)(result + 8) = v3;
      if ( v4 == v3 )
        return result;
    }
LABEL_13:
    __fastfail(3u);
  }
  return result;
}
