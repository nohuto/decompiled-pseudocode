/*
 * XREFs of ??1?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x18019C324
 * Callers:
 *     _InfoMetadata::InfoMetadata_::_1_::dtor$0 @ 0x1801CB484 (_InfoMetadata--InfoMetadata_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18009A6B0 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 */

void __fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::~vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)(392 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 392LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
