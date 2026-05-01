/*
 * XREFs of ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z @ 0x180089B4C
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800103E8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180052FA0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005AD60 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180062A40 (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070B04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpPartitionRevokeAllSets(struct _RM_PARTITION *a1)
{
  struct _RM_OBJECT_TABLE *v2; // rcx
  __int64 v3; // rdx
  struct _RM_OBJECT_HEADER *Next; // rax
  char *v5; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL);
  memset(v6, 0, 32);
  RmpObjectTableEnumerationBegin(v2, (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v6);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v6);
    v5 = (char *)Next;
    if ( !Next )
      break;
    if ( *((struct _RM_PARTITION **)Next + 7) == a1 )
      RmpActivityHostRevokeResourceSets((__int64)Next, 2, 14);
    RmpObjectRelease(v5, v3);
  }
  RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v6);
}
