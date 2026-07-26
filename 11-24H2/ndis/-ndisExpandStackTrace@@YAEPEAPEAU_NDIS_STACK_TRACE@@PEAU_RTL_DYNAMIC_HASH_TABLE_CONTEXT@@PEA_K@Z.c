/*
 * XREFs of ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1400746C0
 * Callers:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140039330 (-ndisCaptureStackTrace@@YAKK@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

unsigned __int8 __fastcall ndisExpandStackTrace(
        _RTL_DYNAMIC_HASH_TABLE_ENTRY **a1,
        struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT *a2,
        unsigned __int64 *a3)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1

  v3 = *a1;
  v7 = (LODWORD((*a1)[1].Linkage.Flink) >> 30) + 1;
  if ( LODWORD((*a1)[1].Linkage.Flink) >> 30 == 3
    || (Pool2 = ExAllocatePool2(64LL, 32 * ((LODWORD((*a1)[1].Linkage.Flink) >> 30) + 4), 1802716238LL),
        (v9 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Pool2) == 0LL) )
  {
    *((_BYTE *)&WPP_MAIN_CB.Reserved + 10) = 1;
    return 0;
  }
  else
  {
    v10 = *(_OWORD *)a3;
    v11 = *((_OWORD *)a3 + 1);
    *(_DWORD *)(Pool2 + 24) = (__int64)v3[1].Linkage.Flink & 0x3FFFFFFF ^ (((__int64)v3[1].Linkage.Flink & 0xC0000000)
                                                                         + 0x40000000);
    *(_OWORD *)(Pool2 + 32) = v10;
    *(_OWORD *)(Pool2 + 48) = v11;
    memmove((void *)(Pool2 + 64), &v3[1].Linkage.Blink, 32LL * v7);
    RtlRemoveEntryHashTable(&HashTable, v3, a2);
    RtlInsertEntryHashTable(&HashTable, v9, v3->Signature, a2);
    *a1 = v9;
    ExFreePoolWithTag(v3, 0);
    return 1;
  }
}
