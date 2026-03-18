/*
 * XREFs of ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1402EB7CC
 * Callers:
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1402EC4B4 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 * Callees:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1402EB75C (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::CleanQueue(InteractiveControlDevice *this)
{
  InteractiveControlInput *v2; // rcx
  unsigned __int64 v3; // rbx
  InteractiveControlInput *v4; // rdi
  __int64 v5; // rax

  v2 = (InteractiveControlInput *)*((_QWORD *)this + 3);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  while ( v2 != (InteractiveControlDevice *)((char *)this + 16) )
  {
    v4 = (InteractiveControlInput *)*((_QWORD *)v2 + 1);
    if ( (unsigned int)(v3 - *((_DWORD *)v2 + 7)) < 0x1388 )
      break;
    v5 = *(_QWORD *)v2;
    if ( *(InteractiveControlInput **)(*(_QWORD *)v2 + 8LL) != v2 || *(InteractiveControlInput **)v4 != v2 )
      __fastfail(3u);
    *(_QWORD *)v4 = v5;
    *(_QWORD *)(v5 + 8) = v4;
    InteractiveControlInput::`scalar deleting destructor'(v2, 1);
    --*((_DWORD *)this + 8);
    v2 = v4;
  }
}
