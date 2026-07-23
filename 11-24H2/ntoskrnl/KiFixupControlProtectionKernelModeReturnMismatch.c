/*
 * XREFs of KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405C41B8
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14043466C (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiDecrementKernelShadowStack @ 0x1406AC400 (KiDecrementKernelShadowStack.c)
 */

__int64 __fastcall KiFixupControlProtectionKernelModeReturnMismatch(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v8; // rbp
  bool v10; // r13
  unsigned int v11; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett

  _RBX = a4;
  _R12 = a3;
  v8 = (-(__int64)(a5 != 0) & 0x10) + 8;
  __asm { rdsspq  rdi }
  if ( (unsigned __int64)_RDI - v8 < a1 || (unsigned __int64)(a2 - (_QWORD)_RDI + 24) >= 0x80 )
    return 2147483653LL;
  v10 = KeDisableInterrupts();
  v11 = 0;
  do
  {
    KiDecrementKernelShadowStack();
    ++v11;
  }
  while ( v11 < v8 >> 3 );
  while ( (unsigned __int64)_RDI < a2 + 24 )
  {
    _RCX = *_RDI;
    _RAX = (char *)_RDI++ - v8;
    __asm { wrssq   qword ptr [rax], rcx }
  }
  _RSI = a2 - v8;
  if ( !_RBX )
    _RBX = _RSI + 24;
  if ( a5 )
  {
    _RAX = _RBX + 24;
    __asm { wrssq   qword ptr [rbx], rax }
    _RAX = 16LL;
    __asm
    {
      wrssq   qword ptr [rbx+8], r12
      wrssq   qword ptr [rbx+10h], rax
    }
  }
  else
  {
    __asm { wrssq   qword ptr [rbx], r12 }
  }
  __asm { wrssq   qword ptr [rsi], rbx }
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v19 = *SchedulerAssist;
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return 0LL;
}
