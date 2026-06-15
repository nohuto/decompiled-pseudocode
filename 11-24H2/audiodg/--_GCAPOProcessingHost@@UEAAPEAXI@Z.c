/*
 * XREFs of ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x140061EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOProcessingHost@@UEAA@XZ @ 0x140061AFC (--1CAPOProcessingHost@@UEAA@XZ.c)
 */

CAPOProcessingHost *__fastcall CAPOProcessingHost::`scalar deleting destructor'(CAPOProcessingHost *this, char a2)
{
  CAPOProcessingHost::~CAPOProcessingHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
