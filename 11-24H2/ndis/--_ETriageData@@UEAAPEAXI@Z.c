/*
 * XREFs of ??_ETriageData@@UEAAPEAXI@Z @ 0x1400E4A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008CFB0 (--3@YAXPEAX@Z.c)
 *     ??1TriageData@@UEAA@XZ @ 0x1400E4A3C (--1TriageData@@UEAA@XZ.c)
 */

TriageData *__fastcall TriageData::`vector deleting destructor'(TriageData *this, char a2)
{
  TriageData::~TriageData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
