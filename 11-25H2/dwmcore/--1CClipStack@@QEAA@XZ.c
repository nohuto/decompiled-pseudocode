/*
 * XREFs of ??1CClipStack@@QEAA@XZ @ 0x1801EFA74
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
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
