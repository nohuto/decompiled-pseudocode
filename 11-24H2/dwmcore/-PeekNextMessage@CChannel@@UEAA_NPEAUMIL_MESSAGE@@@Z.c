/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAA_NPEAUMIL_MESSAGE@@@Z @ 0x1801D81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  char v5; // bp
  _QWORD *v6; // rax
  _QWORD **v7; // rbx
  _QWORD *v8; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v6 = (_QWORD *)((char *)this + 80);
  v7 = (_QWORD **)*((_QWORD *)this + 10);
  if ( v7 == v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 6) = 0;
  }
  else
  {
    if ( v7[1] != v6 || (v8 = *v7, (_QWORD **)(*v7)[1] != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    *(_OWORD *)a2 = *((_OWORD *)v7 + 1);
    *((_QWORD *)a2 + 2) = v7[4];
    *((_DWORD *)a2 + 6) = *((_DWORD *)v7 + 10);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    v5 = 1;
  }
  LeaveCriticalSection(v2);
  return v5;
}
