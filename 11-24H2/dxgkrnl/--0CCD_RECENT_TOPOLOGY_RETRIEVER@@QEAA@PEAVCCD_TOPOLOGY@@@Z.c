/*
 * XREFs of ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1403E8814
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 */

CCD_RECENT_TOPOLOGY_RETRIEVER *__fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        struct CCD_TOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  CCD_RECENT_TOPOLOGY_RETRIEVER *result; // rax

  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 24) = 0;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 80), 8LL, 0LL, a4);
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
