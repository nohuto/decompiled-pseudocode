/*
 * XREFs of CmpCleanupParseContext @ 0x14092D4B0
 * Callers:
 *     CmpFreeParseContext @ 0x1406F50D8 (CmpFreeParseContext.c)
 *     CmpCreatePredefined @ 0x1407CA0EC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1407E6EF4 (CmpDoReOpenTransKey.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046DC50 (VrpOriginalKeyNameParameterCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 result; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx

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
      CmpUnlockRegistry(v11);
    }
  }
  v5 = (_QWORD *)(a1 + 144);
  v6 = (_QWORD *)*v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 )
    goto LABEL_13;
  result = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 )
    goto LABEL_13;
  *v5 = result;
  *(_QWORD *)(result + 8) = v5;
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v8 = (void (__fastcall *)(__int64, _QWORD *))v6[4];
      if ( v8 )
      {
        v9 = v6 + 6;
        v10 = (__int64)(v6 + 2);
        if ( v8 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v10, v9);
        else
          guard_dispatch_icall_no_overrides(v10, v9, a3, a4);
      }
      CmpFreeTransientPoolWithTag(v6, 0x50454D43u);
      v6 = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        break;
      result = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        break;
      *v5 = result;
      *(_QWORD *)(result + 8) = v5;
      if ( v6 == v5 )
        return result;
    }
LABEL_13:
    __fastfail(3u);
  }
  return result;
}
