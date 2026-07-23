/*
 * XREFs of KiRaiseException @ 0x140263A30
 * Callers:
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KyRaiseException @ 0x140263BB0 (KyRaiseException.c)
 *     KiSetupForInstrumentationReturn @ 0x140451440 (KiSetupForInstrumentationReturn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiRaiseException(EXCEPTION_RECORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  char PreviousMode; // si
  __int64 p_NumberParameters; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  size_t v13; // r8
  EXCEPTION_RECORD *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v19; // rdx
  unsigned int v21; // [rsp+38h] [rbp-E0h]
  _BYTE v22[24]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-C0h]

  memset_0(v22, 0, 0x98uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    p_NumberParameters = (__int64)&a1->NumberParameters;
    if ( (unsigned __int64)&a1->NumberParameters >= 0x7FFFFFFF0000LL )
      p_NumberParameters = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)p_NumberParameters;
    v21 = v10;
    v11 = v10;
    if ( v10 > 0xF )
      return 3221225485LL;
    v12 = 8 * v10 + 32;
    v13 = (unsigned int)v12;
    v14 = a1;
    v15 = (unsigned __int64)a1 + v12;
    if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)a1 )
    {
      v11 = v21;
      v14 = a1;
    }
    memmove(v22, v14, v13);
    a1 = (EXCEPTION_RECORD *)v22;
    v23 = v11;
  }
  result = KyRaiseException(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    a1->ExceptionCode &= ~0x10000000u;
    KiDispatchException(a1, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(CurrentThread) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(CurrentThread);
        }
        KiSetupForInstrumentationReturn(a4);
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        }
        __writecr8(CurrentIrql);
      }
    }
    return 0LL;
  }
  return result;
}
