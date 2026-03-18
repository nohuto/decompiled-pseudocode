/*
 * XREFs of ??1DXGCOPYPROTECTION@@QEAA@XZ @ 0x1401B8F30
 * Callers:
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x140067178 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCOPYPROTECTION::~DXGCOPYPROTECTION(DXGCOPYPROTECTION *this)
{
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 12), *((_QWORD *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  WdLogGlobalForLineNumber = 56;
}
