/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003DD1C
 * Callers:
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x14009C9F4 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     ??0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400A0DFC (--0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400B9ED0 (-Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
