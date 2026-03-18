/*
 * XREFs of ??1DXGCOPYPROTECTION@@QEAA@XZ @ 0x1401B6980
 * Callers:
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1400675B8 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
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
