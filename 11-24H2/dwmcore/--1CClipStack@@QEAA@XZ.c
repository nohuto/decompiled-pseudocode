/*
 * XREFs of ??1CClipStack@@QEAA@XZ @ 0x1801E5D64
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CClipStack::~CClipStack(void **this)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *this;
  if ( *this )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
