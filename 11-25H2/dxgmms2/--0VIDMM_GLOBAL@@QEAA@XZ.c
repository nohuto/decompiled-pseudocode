/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1400920D0
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x14009817C (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     ??0DXGK_LOG@@QEAA@XZ @ 0x140055FDC (--0DXGK_LOG@@QEAA@XZ.c)
 *     memset @ 0x140056780 (memset.c)
 *     ??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x14009A0F0 (--0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  VIDMM_GLOBAL *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 470) = 0LL;
  *((_QWORD *)this + 471) = 0LL;
  *((_DWORD *)this + 944) = 0;
  *((_DWORD *)this + 945) = 13;
  *((_QWORD *)this + 569) = 0LL;
  *((_QWORD *)this + 570) = 0LL;
  *((_BYTE *)this + 4568) = 0;
  memset((char *)this + 4569, 0, 0x40uLL);
  memset((char *)this + 6432, 0, 0x200uLL);
  *((_DWORD *)this + 1737) = 0;
  *((_QWORD *)this + 869) = 0LL;
  *((_QWORD *)this + 870) = 0LL;
  *((_QWORD *)this + 871) = 0LL;
  *((_WORD *)this + 3508) = 0;
  *((_QWORD *)this + 978) = 0LL;
  *((_DWORD *)this + 1958) = 0;
  *((_QWORD *)this + 4982) = 0LL;
  *((_QWORD *)this + 4983) = 0LL;
  *((_DWORD *)this + 9968) = 0;
  *((_DWORD *)this + 9969) = 75;
  *((_DWORD *)this + 9970) = 71;
  *((_QWORD *)this + 4988) = 0LL;
  *((_QWORD *)this + 4989) = 0LL;
  *((_DWORD *)this + 9980) = 0;
  *((_DWORD *)this + 9981) = 75;
  *((_DWORD *)this + 9982) = 46;
  *((_DWORD *)this + 10002) = -1;
  *((_QWORD *)this + 4998) = 0LL;
  *((_QWORD *)this + 4999) = 0LL;
  *((_DWORD *)this + 10000) = 0;
  *((_DWORD *)this + 10001) = 1;
  *((_DWORD *)this + 10024) = 0;
  *(_DWORD *)((char *)this + 40105) = 257;
  *((_BYTE *)this + 40109) = 0;
  *((_QWORD *)this + 5016) = 0LL;
  *((_QWORD *)this + 5017) = 0LL;
  *((_DWORD *)this + 10036) = 0;
  *((_DWORD *)this + 10037) = 12;
  *((_BYTE *)this + 40152) = 0;
  *((_DWORD *)this + 10048) = -1;
  *((_QWORD *)this + 5025) = 0LL;
  *((_QWORD *)this + 5026) = 0LL;
  *((_QWORD *)this + 5027) = 0LL;
  *((_QWORD *)this + 5028) = 0LL;
  memset((char *)this + 40384, 0, 0x220uLL);
  *((_BYTE *)this + 40936) &= 0x9Du;
  *((_BYTE *)this + 40937) &= 0xF2u;
  *((_BYTE *)this + 40938) &= ~1u;
  *((_DWORD *)this + 10232) = 0;
  *(_WORD *)((char *)this + 40939) = 0;
  *((_BYTE *)this + 40943) = 0;
  *((_QWORD *)this + 5124) = 0LL;
  *((_DWORD *)this + 10250) = 0;
  *((_QWORD *)this + 5126) = 0LL;
  *((_QWORD *)this + 5127) = 0LL;
  *((_DWORD *)this + 10256) = 0;
  *((_DWORD *)this + 10257) = 1;
  DXGK_LOG::DXGK_LOG((VIDMM_GLOBAL *)((char *)this + 41032));
  *((_QWORD *)this + 5133) = 0LL;
  *((_DWORD *)this + 10268) = 0;
  *((_QWORD *)this + 5135) = 0LL;
  *((_QWORD *)this + 5136) = 0LL;
  *((_DWORD *)this + 10274) = 0;
  *((_DWORD *)this + 10275) = 19;
  *((_DWORD *)this + 10276) = 66;
  *((_QWORD *)this + 5140) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5139);
  *((_QWORD *)this + 5143) = 0LL;
  *((_QWORD *)this + 5144) = 0LL;
  *((_DWORD *)this + 10290) = 0;
  *((_DWORD *)this + 10291) = 1;
  *((_DWORD *)this + 10296) = 0;
  *((_DWORD *)this + 10312) = 1;
  *((_QWORD *)this + 5147) = (char *)this + 41168;
  *((_QWORD *)this + 5146) = (char *)this + 41168;
  *((_QWORD *)this + 5154) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5155) = (char *)this + 41144;
  *((_QWORD *)this + 5152) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 41192), NotificationEvent, 1u);
  VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY((VIDMM_GLOBAL *)((char *)this + 41256), this);
  *((_DWORD *)this + 11104) = 0;
  *((_QWORD *)this + 5555) = 0LL;
  *((_QWORD *)this + 5556) = 0LL;
  *((_QWORD *)this + 5557) = 0LL;
  *((_DWORD *)this + 11116) = 0;
  *((_DWORD *)this + 11117) = 1;
  *((_DWORD *)this + 11124) = 0;
  KeInitializeEvent((PRKEVENT)this + 1853, NotificationEvent, 1u);
  *((_QWORD *)this + 5564) = 0LL;
  *((_QWORD *)this + 5565) = 0LL;
  *((_QWORD *)this + 5566) = 0LL;
  *((_QWORD *)this + 5567) = 0LL;
  *((_QWORD *)this + 5568) = 0LL;
  *((_QWORD *)this + 5569) = 0LL;
  *((_QWORD *)this + 5570) = 0LL;
  *((_DWORD *)this + 11142) = 0;
  *((_DWORD *)this + 11143) = 7;
  *((_DWORD *)this + 11144) = 60;
  *((_QWORD *)this + 5583) = 0LL;
  *((_QWORD *)this + 5584) = 0LL;
  *((_QWORD *)this + 5585) = 0LL;
  *((_QWORD *)this + 5586) = 0LL;
  *((_QWORD *)this + 5587) = 0LL;
  *((_BYTE *)this + 44704) = 0;
  *((_DWORD *)this + 11184) = -1;
  *((_QWORD *)this + 5589) = 0LL;
  *((_QWORD *)this + 5590) = 0LL;
  *((_DWORD *)this + 11182) = 0;
  *((_DWORD *)this + 11183) = 75;
  *((_BYTE *)this + 44744) = 0;
  *((_DWORD *)this + 11187) = -1;
  *((_BYTE *)this + 44768) = 0;
  *((_QWORD *)this + 5597) = 0LL;
  *((_QWORD *)this + 5598) = 0LL;
  *((_DWORD *)this + 11218) = 0;
  *((_QWORD *)this + 5618) = 0LL;
  *((_QWORD *)this + 465) = (char *)this + 3712;
  *((_QWORD *)this + 464) = (char *)this + 3712;
  *((_QWORD *)this + 5551) = (char *)this + 44400;
  *((_QWORD *)this + 5550) = (char *)this + 44400;
  *((_QWORD *)this + 5142) = (char *)this + 41128;
  *((_QWORD *)this + 5141) = (char *)this + 41128;
  *((_QWORD *)this + 467) = (char *)this + 3728;
  *((_QWORD *)this + 466) = (char *)this + 3728;
  *((_QWORD *)this + 469) = (char *)this + 3744;
  *((_QWORD *)this + 468) = (char *)this + 3744;
  v2 = 4LL;
  *((_QWORD *)this + 4997) = (char *)this + 39968;
  *((_QWORD *)this + 4996) = (char *)this + 39968;
  *((_QWORD *)this + 4993) = (char *)this + 39936;
  *((_QWORD *)this + 4992) = (char *)this + 39936;
  *((_QWORD *)this + 4987) = (char *)this + 39888;
  *((_QWORD *)this + 4986) = (char *)this + 39888;
  *((_QWORD *)this + 4995) = (char *)this + 39952;
  *((_QWORD *)this + 4994) = (char *)this + 39952;
  *((_QWORD *)this + 5582) = (char *)this + 44648;
  *((_QWORD *)this + 5581) = (char *)this + 44648;
  *((_QWORD *)this + 5595) = (char *)this + 44752;
  *((_QWORD *)this + 5594) = (char *)this + 44752;
  *((_QWORD *)this + 5015) = (char *)this + 40112;
  *((_QWORD *)this + 5014) = (char *)this + 40112;
  v3 = (_QWORD *)((char *)this + 44584);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 7032, 0, 0x50uLL);
  *((_QWORD *)this + 878) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5549);
  *(_OWORD *)((char *)this + 7800) = 0LL;
  *((_QWORD *)this + 977) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3784, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x100uLL);
  memset((char *)this + 1912, 0, 0x100uLL);
  memset((char *)this + 2168, 0, 0x100uLL);
  memset((char *)this + 2424, 0, 0x100uLL);
  memset((char *)this + 2680, 0, 0x200uLL);
  memset((char *)this + 3192, 0, 0x200uLL);
  memset((char *)this + 4040, 0, 0x100uLL);
  memset((char *)this + 4296, 0, 0x100uLL);
  memset((char *)this + 4636, 0, 0x100uLL);
  memset((char *)this + 4896, 0, 0x200uLL);
  memset((char *)this + 5920, 0, 0x200uLL);
  memset((char *)this + 5408, 0, 0x200uLL);
  *(_OWORD *)((char *)this + 6984) = 0LL;
  *(_OWORD *)((char *)this + 7000) = 0LL;
  *((_DWORD *)this + 1736) = 1;
  memset((char *)this + 7112, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256), 0LL, 0LL, 0, 0x20uLL, 0x61356956u, 0);
  *((_QWORD *)this + 5599) = 0LL;
  *((_QWORD *)this + 5022) = VidMmUpgrade64KBWork;
  result = this;
  *((_QWORD *)this + 5020) = 0LL;
  *((_QWORD *)this + 5023) = this;
  return result;
}
