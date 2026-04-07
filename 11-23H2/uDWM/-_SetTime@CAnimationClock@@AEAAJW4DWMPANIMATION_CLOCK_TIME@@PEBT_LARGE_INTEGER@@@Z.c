/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18001371C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180013818 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A9D00 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x1800137DC (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x180013978 (McTemplateU0ji_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002D098 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A9CD8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800AA09C (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 */

int __fastcall CAnimationClock::_SetTime(union _LARGE_INTEGER *a1, int a2, const union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v6; // r8
  union _LARGE_INTEGER *v7; // r14
  int Frame; // ebx
  __int64 v9; // rcx
  CAnimationClock *QuadPart; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  union _LARGE_INTEGER v16; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (__int64)abs64(CAnimationClock::s_GetElapsedMillsecondsFromTime(a3)) > 5000 )
    return -2147024809;
  if ( !a2 )
  {
    if ( ((a1[10].LowPart - 1) & 0xFFFFFFFD) == 0 )
    {
      v16.QuadPart = 0LL;
      if ( a3 )
        v6 = a1 + 11;
      else
        v6 = &v16;
      v7 = a1 + 11;
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v6);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState((__int64)a1, 2u);
        if ( !a3 )
          *v7 = v16;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0ji_EtwEventWriteTransfer(v9, &UdwmAnimationClock_Start, &a1[15], v7->QuadPart);
      }
      return Frame;
    }
    return -2147019873;
  }
  if ( a2 != 1 )
    return -2147024809;
  if ( a1[10].LowPart - 1 > 3 )
    return -2147019873;
  QuadPart = (CAnimationClock *)a1[14].QuadPart;
  if ( (unsigned __int64)QuadPart - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_21:
    Frame = CAnimationClock::_SetTimeToNextFrame(QuadPart, a3, a1 + 12);
    if ( Frame >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0ji_EtwEventWriteTransfer)(
          v13,
          &UdwmAnimationClock_Cancel,
          &a1[15],
          (union _LARGE_INTEGER)a1[12].QuadPart);
      return CAnimationClock::_SetState((__int64)a1, 5u);
    }
    return Frame;
  }
  v12 = NtDCompositionCommitSynchronizationObject();
  if ( v12 >= 0 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &a1[14],
      0LL);
    goto LABEL_21;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1E1,
           (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
           (const char *)(unsigned int)v12,
           v14);
}
