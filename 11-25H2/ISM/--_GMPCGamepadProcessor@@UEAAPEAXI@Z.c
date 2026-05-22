/*
 * XREFs of ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1801B71AC
 * Callers:
 *     ??_EMPCGamepadProcessor@@W7EAAPEAXI@Z @ 0x1801B7150 (--_EMPCGamepadProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801B6F3C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::`scalar deleting destructor'(MPCGamepadProcessor *this, char a2)
{
  MPCGamepadProcessor::~MPCGamepadProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10E8);
  return this;
}
