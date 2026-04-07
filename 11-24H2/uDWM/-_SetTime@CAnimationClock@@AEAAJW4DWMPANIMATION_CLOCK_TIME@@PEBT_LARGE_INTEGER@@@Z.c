/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18005A444
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18005A270 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A68E0 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800324BC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180050900 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180059F18 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x18005A5E0 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009AB7C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A6C4C (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A6D10 (McTemplateU0ji_EtwEventWriteTransfer.c)
 */

int __fastcall CAnimationClock::_SetTime(union _LARGE_INTEGER *a1, int a2, const union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v6; // r8
  union _LARGE_INTEGER *v7; // r14
  int Frame; // ebx
  __int64 v9; // rcx
  __int64 ElapsedMillsecondsFromTime; // rax
  __int64 v12; // r9
  CAnimationClock *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  union _LARGE_INTEGER v18; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    ElapsedMillsecondsFromTime = CAnimationClock::s_GetElapsedMillsecondsFromTime(a3);
    v12 = -ElapsedMillsecondsFromTime;
    if ( ElapsedMillsecondsFromTime > 0 )
      v12 = ElapsedMillsecondsFromTime;
    if ( v12 > 5000 )
      return -2147024809;
  }
  if ( !a2 )
  {
    if ( ((a1[10].LowPart - 1) & 0xFFFFFFFD) == 0 )
    {
      v18.QuadPart = 0LL;
      if ( a3 )
        v6 = a1 + 11;
      else
        v6 = &v18;
      v7 = a1 + 11;
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v6);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState((__int64)a1, 2u);
        if ( !a3 )
          *v7 = v18;
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
  if ( !wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((union _LARGE_INTEGER *)&a1[14].QuadPart) )
  {
LABEL_23:
    Frame = CAnimationClock::_SetTimeToNextFrame(v13, a3, a1 + 12);
    if ( Frame >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji_EtwEventWriteTransfer(
          v15,
          &UdwmAnimationClock_Cancel,
          &a1[15],
          (union _LARGE_INTEGER)a1[12].QuadPart);
      return CAnimationClock::_SetState((__int64)a1, 5u);
    }
    return Frame;
  }
  v14 = ((__int64 (__fastcall *)(_QWORD))NtDCompositionCommitSynchronizationObject)((union _LARGE_INTEGER)a1[14].QuadPart);
  if ( v14 >= 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((void **)&a1[14]);
    goto LABEL_23;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1E1,
           (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
           (const char *)(unsigned int)v14,
           v16);
}
