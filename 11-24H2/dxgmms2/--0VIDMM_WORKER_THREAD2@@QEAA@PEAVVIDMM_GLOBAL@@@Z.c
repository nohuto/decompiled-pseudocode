/*
 * XREFs of ??0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400A0DFC
 * Callers:
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x140098BCC (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003DD1C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x140098AC0 (--0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_WORKER_THREAD2 *__fastcall VIDMM_WORKER_THREAD2::VIDMM_WORKER_THREAD2(
        VIDMM_WORKER_THREAD2 *this,
        struct VIDMM_GLOBAL *a2)
{
  VIDMM_WORKER_THREAD2 *result; // rax

  VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(this, a2);
  *((_QWORD *)this + 673) = 0LL;
  *((_QWORD *)this + 674) = 0LL;
  *((_QWORD *)this + 675) = 0LL;
  *((_DWORD *)this + 1352) = 0;
  *((_DWORD *)this + 1353) = 6;
  *((_QWORD *)this + 677) = &VIDMM_SCHCLASS_IDLE::`vftable';
  *((_QWORD *)this + 678) = 0LL;
  *((_DWORD *)this + 1358) = 0;
  *((_BYTE *)this + 5437) = 3;
  *((_QWORD *)this + 680) = &VIDMM_SCHCLASS_PAGING::`vftable';
  *((_QWORD *)this + 681) = (char *)this + 5416;
  *((_DWORD *)this + 1364) = 0;
  *((_BYTE *)this + 5461) = 2;
  *((_QWORD *)this + 683) = 0LL;
  *((_QWORD *)this + 686) = (char *)this + 5440;
  *((_QWORD *)this + 685) = &VIDMM_SCHCLASS_TIMER::`vftable';
  *((_DWORD *)this + 1374) = 0;
  *((_BYTE *)this + 5501) = 1;
  *((_QWORD *)this + 688) = 0LL;
  *((_QWORD *)this + 690) = &VIDMM_SCHCLASS_REALTIME::`vftable';
  *((_QWORD *)this + 691) = (char *)this + 5480;
  *((_DWORD *)this + 1384) = 0;
  *((_BYTE *)this + 5541) = 0;
  *((_QWORD *)this + 694) = (char *)this + 5544;
  *((_QWORD *)this + 693) = (char *)this + 5544;
  *((_QWORD *)this + 695) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 699) = 0LL;
  *((_QWORD *)this + 700) = 0LL;
  *((_QWORD *)this + 695) = &VIDMM_TASK_STATE_CHANGE::`vftable';
  *((_QWORD *)this + 701) = 0LL;
  *((_QWORD *)this + 702) = 0LL;
  *((_QWORD *)this + 703) = 0LL;
  *((_DWORD *)this + 1408) = 0;
  *((_BYTE *)this + 5636) = 3;
  *((_QWORD *)this + 705) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 709) = 0LL;
  *((_QWORD *)this + 710) = 0LL;
  *((_QWORD *)this + 705) = &VIDMM_TASK_PROCESS_TERMINATIONS::`vftable';
  *((_QWORD *)this + 711) = 0LL;
  *((_QWORD *)this + 712) = 0LL;
  *((_QWORD *)this + 713) = 0LL;
  *((_DWORD *)this + 1428) = 0;
  *((_BYTE *)this + 5716) = 4;
  *((_QWORD *)this + 715) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 719) = 0LL;
  *((_QWORD *)this + 720) = 0LL;
  *((_QWORD *)this + 721) = 0LL;
  *((_QWORD *)this + 722) = 0LL;
  *((_QWORD *)this + 723) = 0LL;
  *((_QWORD *)this + 715) = &VIDMM_TASK_IDLE::`vftable';
  *((_DWORD *)this + 1448) = 0;
  *((_BYTE *)this + 5796) = 0;
  *((_QWORD *)this + 719) = (char *)this + 5416;
  *((_DWORD *)this + 1448) = 1;
  *((_QWORD *)this + 725) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 729) = 0LL;
  *((_QWORD *)this + 730) = 0LL;
  *((_QWORD *)this + 731) = 0LL;
  *((_QWORD *)this + 732) = 0LL;
  *((_QWORD *)this + 733) = 0LL;
  *((_DWORD *)this + 1468) = 0;
  *((_BYTE *)this + 5876) = 5;
  *((_QWORD *)this + 725) = &VIDMM_TASK_PENALTY_BOX::`vftable';
  `vector constructor iterator'(
    (char *)this + 5880,
    16LL,
    4LL,
    (void (__fastcall *)(char *))DXGK_LIST_HEAD::DXGK_LIST_HEAD);
  *((_QWORD *)this + 744) = (char *)this + 5944;
  *((_QWORD *)this + 743) = (char *)this + 5944;
  result = this;
  *((_QWORD *)this + 745) = 0LL;
  *((_QWORD *)this + 746) = 0LL;
  *((_BYTE *)this + 5976) = 0;
  return result;
}
