/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAA@XZ @ 0x180079E6C
 * Callers:
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180079DBC (--1CVolumeStrip@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::~CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 40);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 56) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
