/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x140056EE0
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$33 @ 0x140094961 (_PublishApoTelemetry_--_1_--dtor$33.c)
 *     _PublishApoTelemetry_::_1_::dtor$35 @ 0x140094985 (_PublishApoTelemetry_--_1_--dtor$35.c)
 *     _PublishApoTelemetry_::_1_::dtor$37 @ 0x1400949A9 (_PublishApoTelemetry_--_1_--dtor$37.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_GUID>::~vector<_GUID>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
