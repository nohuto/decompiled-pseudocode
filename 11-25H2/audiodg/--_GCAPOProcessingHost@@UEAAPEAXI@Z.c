/*
 * XREFs of ??_GCAPOProcessingHost@@UEAAPEAXI@Z @ 0x140061FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOProcessingHost@@UEAA@XZ @ 0x140061BEC (--1CAPOProcessingHost@@UEAA@XZ.c)
 */

CAPOProcessingHost *__fastcall CAPOProcessingHost::`scalar deleting destructor'(CAPOProcessingHost *this, char a2)
{
  CAPOProcessingHost::~CAPOProcessingHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
