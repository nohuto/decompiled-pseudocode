/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x140058350
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$34 @ 0x140094973 (_PublishApoTelemetry_--_1_--dtor$34.c)
 *     _PublishApoTelemetry_::_1_::dtor$36 @ 0x140094997 (_PublishApoTelemetry_--_1_--dtor$36.c)
 *     _PublishApoTelemetry_::_1_::dtor$38 @ 0x1400949BB (_PublishApoTelemetry_--_1_--dtor$38.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::~vector<unsigned char>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
