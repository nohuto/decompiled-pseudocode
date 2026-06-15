/*
 * XREFs of ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18000D15C
 * Callers:
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18000CB6C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180015E38 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ??1?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003FC0C (--1-$forward_list@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@s.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18003FE30 (--1TSSession@@QEAA@XZ.c)
 *     _TsSessionIdAddNotify_::_1_::dtor$1 @ 0x18004BE56 (_TsSessionIdAddNotify_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)8);
}
