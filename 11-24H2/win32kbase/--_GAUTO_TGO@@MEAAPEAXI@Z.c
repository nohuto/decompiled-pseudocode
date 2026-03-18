/*
 * XREFs of ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1401C66F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14008D914 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::`scalar deleting destructor'(AUTO_TGO *this, char a2)
{
  AUTO_TGO::~AUTO_TGO(this);
  if ( (a2 & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
  }
  return this;
}
