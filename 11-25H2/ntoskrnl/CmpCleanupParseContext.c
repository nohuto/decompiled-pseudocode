/*
 * XREFs of CmpCleanupParseContext @ 0x140913E90
 * Callers:
 *     CmpCreatePredefined @ 0x1407BA8EC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1407D7070 (CmpDoReOpenTransKey.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046F730 (VrpOriginalKeyNameParameterCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 result; // rax
  void (__fastcall *v6)(__int64, _QWORD *); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

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
      CmpUnlockRegistry(v8);
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
        v7 = (__int64)(v4 + 2);
        if ( v6 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v7, v4 + 6);
        else
          guard_dispatch_icall_no_overrides(v7);
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
