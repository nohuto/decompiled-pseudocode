/*
 * XREFs of ??1CBufferRealization@@MEAA@XZ @ 0x1400106C8
 * Callers:
 *     ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x140010690 (--_ECBufferRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CBufferRealization::~CBufferRealization(CBufferRealization *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CBufferRealization::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
  if ( v2 )
    (**v2)(v2);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
