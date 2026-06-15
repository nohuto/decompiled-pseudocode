/*
 * XREFs of ??_GCRTThreadManager@@UEAAPEAXI@Z @ 0x14006DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRTThreadManager@@UEAA@XZ @ 0x14006DB94 (--1CRTThreadManager@@UEAA@XZ.c)
 */

CRTThreadManager *__fastcall CRTThreadManager::`scalar deleting destructor'(CRTThreadManager *this, char a2)
{
  CRTThreadManager::~CRTThreadManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
