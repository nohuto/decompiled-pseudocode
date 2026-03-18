/*
 * XREFs of ??1?$CQueue@PEAVCResource@@@@QEAA@XZ @ 0x180200DD4
 * Callers:
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x1801F26AC (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x1802B6A70 (--1CManipulationManager@@MEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1802DFD00 (_dynamic_atexit_destructor_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CQueue<CResource *>::~CQueue<CResource *>(_DWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 6);
  do
  {
    v3 = 0LL;
    EnterCriticalSection(v2);
    v4 = *(_QWORD **)a1;
    if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(v5 + 8) = a1;
    if ( v4 != (_QWORD *)a1 )
    {
      v3 = v4[2];
      operator delete(v4, 0x18uLL);
      --a1[4];
    }
    LeaveCriticalSection(v2);
  }
  while ( v3 );
  DeleteCriticalSection(v2);
}
