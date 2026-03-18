/*
 * XREFs of ??0CTouchProcessor@@QEAA@XZ @ 0x14014883C
 * Callers:
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x14020DC08 (--0CPTPProcessor@@AEAA@XZ.c)
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F3E0C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

CTouchProcessor *__fastcall CTouchProcessor::CTouchProcessor(CTouchProcessor *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_WORD *)this + 48) = 2;
  if ( isChildPartition((__int64)this) )
    *((_WORD *)this + 48) = 0x4000;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CEResourceLock::Initialize((CTouchProcessor *)((char *)this + 32));
  return this;
}
