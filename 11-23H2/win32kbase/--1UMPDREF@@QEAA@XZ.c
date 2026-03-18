/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C015F9B0
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C015FA30 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UMPDREF::~UMPDREF(char **this)
{
  char *v2; // rcx
  char *v3; // rdi
  int v4; // eax

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((int *)v2, 0LL);
    v3 = *this;
    if ( qword_1C0294DE8 )
    {
      if ( (int)qword_1C0294DE8() >= 0 )
      {
        v4 = (int)qword_1C0294DF0;
        if ( qword_1C0294DF0 )
          v4 = qword_1C0294DF0(v3);
        if ( v4 )
        {
          if ( *this )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *this);
        }
      }
    }
  }
}
