/*
 * XREFs of ??_ECAPOProcessingHostObject@@UEAAPEAXI@Z @ 0x140039100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x14003913C (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOProcessingHostObject *__fastcall CAPOProcessingHostObject::`vector deleting destructor'(
        CAPOProcessingHostObject *this,
        char a2)
{
  CAPOProcessingHostObject::~CAPOProcessingHostObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
