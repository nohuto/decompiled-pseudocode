/*
 * XREFs of ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140065180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140056670 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::`scalar deleting destructor'(CAudioDGModule *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CAudioDGModule::~CAudioDGModule(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
