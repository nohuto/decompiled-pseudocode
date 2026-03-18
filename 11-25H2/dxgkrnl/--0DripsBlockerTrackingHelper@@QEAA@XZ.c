/*
 * XREFs of ??0DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1400725FC
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1401CCD80 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

DripsBlockerTrackingHelper *__fastcall DripsBlockerTrackingHelper::DripsBlockerTrackingHelper(
        DripsBlockerTrackingHelper *this)
{
  memset(this, 0, 0x49C00uLL);
  `vector constructor iterator'(
    (char *)this,
    4720LL,
    64LL,
    (void (__fastcall *)(char *))DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_);
  *((_BYTE *)this + 302080) = 0;
  *((_QWORD *)this + 37761) = 0LL;
  *((_QWORD *)this + 37762) = 0LL;
  *((_BYTE *)this + 302104) = 0;
  *((_QWORD *)this + 37764) = 0LL;
  *((_QWORD *)this + 37765) = 0LL;
  *((_WORD *)this + 151064) = 0;
  *((_QWORD *)this + 37767) = 0LL;
  *((_QWORD *)this + 37768) = 0LL;
  *((_WORD *)this + 151076) = 0;
  `vector constructor iterator'(
    (char *)this + 302160,
    64LL,
    6LL,
    (void (__fastcall *)(char *))DripsBlockerTrackingHelper::_unnamed_type_VidMmEvictionDataPerAdapter_::_unnamed_type_VidMmEvictionDataPerAdapter_);
  return this;
}
