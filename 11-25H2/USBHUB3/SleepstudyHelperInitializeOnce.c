/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x140093850
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  size_t v3; // rdi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  _DWORD *OutputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp+20h] BYREF

  v3 = 272LL;
  v4 = 0;
  OutputBuffer = 0LL;
  memset(&SleepstudyHelperRoutineBlock, 0, 0x110uLL);
  InputBuffer = 63LL;
  v5 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, &OutputBuffer, 8u);
  if ( v5 == -1073741637 )
    return 1;
  if ( v5 >= 0 )
  {
    if ( *OutputBuffer == 1 )
      v3 = 264LL;
    memmove(&SleepstudyHelperRoutineBlock, OutputBuffer, v3);
    return 1;
  }
  return v4;
}
