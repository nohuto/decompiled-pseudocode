/*
 * XREFs of ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x1C020B8F0
 * Callers:
 *     ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020BDB0 (--_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CGenericPropertyList::~CGenericPropertyList(char ***this)
{
  char **v1; // rbx
  __int64 v3; // rsi

  v1 = *this;
  v3 = (__int64)&(*this)[(_QWORD)this[1]];
  while ( v1 != (char **)v3 )
  {
    if ( *v1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v1);
    ++v1;
  }
  if ( *this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)*this);
}
