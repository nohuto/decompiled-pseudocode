/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180058E88
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180058C14 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Initialize(CAnimationClock *this, struct _GUID *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rax

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *((_QWORD *)this + 15) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v7 )
    v7 = *((_QWORD *)this + 16) - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = -2147023649;
  }
  else
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v10 && (unsigned int)(a3 - 10001) > 0xFFFFD8ED )
    {
      *(struct _GUID *)((char *)this + 120) = *a2;
      *((_DWORD *)this + 34) = a3;
      v8 = CAnimationClock::_SetState((__int64)this, 1u);
    }
    else
    {
      v8 = -2147024809;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
