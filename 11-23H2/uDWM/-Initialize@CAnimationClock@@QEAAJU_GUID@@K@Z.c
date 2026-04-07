/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x1800133EC
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180013164 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Initialize(CAnimationClock *this, struct _GUID *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  char *v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = *((_QWORD *)this + 15) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 16) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v8 = -2147023649;
  }
  else
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v7 && (unsigned int)(a3 - 10001) > 0xFFFFD8ED )
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
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v8;
}
