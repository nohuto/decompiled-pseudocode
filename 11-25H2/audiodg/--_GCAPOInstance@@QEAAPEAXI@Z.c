/*
 * XREFs of ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x1400377A8
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x14003776C (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x1400581E8 (--1-$unique_ptr@VCAPOInstance@@U-$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ.c)
 * Callees:
 *     ??1CAPOInstance@@QEAA@XZ @ 0x1400377D4 (--1CAPOInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOInstance *__fastcall CAPOInstance::`scalar deleting destructor'(CAPOInstance *this)
{
  CAPOInstance::~CAPOInstance(this);
  operator delete(this);
  return this;
}
