/*
 * XREFs of ??1?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAA@XZ @ 0x18013A408
 * Callers:
 *     ??1CDrawListCache@@EEAA@XZ @ 0x1801106D8 (--1CDrawListCache@@EEAA@XZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18013A290 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

int __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::~pointer_buffer_impl<CDrawListEntry *>(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *a1 & 3LL;
  if ( v1 == 1 )
  {
    LODWORD(v1) = 0;
    v2 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v3 = (void *)(v2 - 16);
    if ( v2 != 16 )
    {
      ProcessHeap = GetProcessHeap();
      LODWORD(v1) = HeapFree(ProcessHeap, 0, v3);
    }
  }
  return v1;
}
