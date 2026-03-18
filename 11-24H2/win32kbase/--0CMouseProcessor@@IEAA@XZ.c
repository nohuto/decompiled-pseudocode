/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x140153418
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x140210D10 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CEF38 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1401566A8 (--0MousePerfSummary@@QEAA@XZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 8) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 13) = 0;
  memset((char *)this + 56, 0, 0xB80uLL);
  `vector constructor iterator'(
    (char *)this + 56,
    184LL,
    16LL,
    (void (__fastcall *)(char *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 750) = 0;
  *((_QWORD *)this + 376) = 0LL;
  *((_DWORD *)this + 754) = 1;
  memset((char *)this + 3024, 0, 0x270uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 3024));
  *((_QWORD *)this + 457) = 0LL;
  *((_DWORD *)this + 916) = 0;
  *(_QWORD *)((char *)this + 3668) = 0LL;
  *(_QWORD *)((char *)this + 3676) = 0LL;
  *((_QWORD *)this + 461) = 0LL;
  *((_BYTE *)this + 3768) = 0;
  *((_BYTE *)this + 3772) = 0;
  *((_QWORD *)this + 472) = 0LL;
  memset((char *)this + 3784, 0, 0x70uLL);
  *((_BYTE *)this + 3896) = 0;
  *((_DWORD *)this + 976) = 0;
  *((_BYTE *)this + 3920) = 0;
  *((_DWORD *)this + 981) = 0;
  *((_QWORD *)this + 491) = 0LL;
  *((_DWORD *)this + 984) = 0;
  *((_DWORD *)this + 985) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)((char *)this + 3944) = 0LL;
  *(_OWORD *)((char *)this + 3960) = 0LL;
  *(_OWORD *)((char *)this + 3976) = 0LL;
  *(_OWORD *)((char *)this + 3992) = 0LL;
  *((_QWORD *)this + 501) = 0LL;
  *((_QWORD *)this + 502) = 0LL;
  *((_QWORD *)this + 489) = 0LL;
  *((_QWORD *)this + 507) = (char *)this + 4048;
  *((_QWORD *)this + 506) = (char *)this + 4048;
  *((_WORD *)this + 2016) = 0;
  *((_QWORD *)this + 503) = 0LL;
  *((_QWORD *)this + 509) = 0LL;
  *((_BYTE *)this + 4080) = 0;
  *((_QWORD *)this + 508) = 0LL;
  memset((char *)this + 4088, 0, 0x400uLL);
  *((_WORD *)this + 2556) = 0;
  *((_QWORD *)this + 640) = (char *)this + 4088;
  *((_WORD *)this + 2564) = 0;
  *((_BYTE *)this + 5140) = 0;
  *((_QWORD *)this + 456) = 0LL;
  result = this;
  *((_QWORD *)this + 376) = 0LL;
  return result;
}
