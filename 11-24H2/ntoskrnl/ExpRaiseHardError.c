/*
 * XREFs of ExpRaiseHardError @ 0x140A45514
 * Callers:
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     NtRaiseHardError @ 0x140A452A0 (NtRaiseHardError.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     ExpSystemErrorHandler @ 0x1404FA9E0 (ExpSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x140A15A5C (PsCaptureExceptionPort.c)
 *     LpcSendWaitReceivePort @ 0x140A24F40 (LpcSendWaitReceivePort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int v12; // edx
  char v13; // dl
  _KPROCESS *Process; // r10
  int v15; // r11d
  void *Blink; // rbx
  char v17; // di
  const void *v18; // r14
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax
  int v22; // eax
  int v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _QWORD v31[3]; // [rsp+68h] [rbp-310h] BYREF
  _DWORD v32[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-2C8h]
  int v34; // [rsp+B8h] [rbp-2C0h]
  unsigned int v35; // [rsp+BCh] [rbp-2BCh]
  unsigned int v36; // [rsp+C0h] [rbp-2B8h]
  unsigned int v37; // [rsp+C4h] [rbp-2B4h]
  char v38[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  v31[0] = a4;
  v31[1] = a7;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( v12 > 0x4D )
    return 3221225485LL;
  v13 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    LODWORD(CurrentServerSiloGlobals[54].Flink) = 2;
    v13 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v15 && (a1 & 0xC0000000) == 0xC0000000 && (!LODWORD(CurrentServerSiloGlobals[54].Flink) || v13) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == (_KPROCESS *)CurrentServerSiloGlobals[53].Flink )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    goto LABEL_15;
  }
  Blink = 0LL;
  v17 = 0;
  if ( !v15 && (((__int64)Process[1].AvailableCpuState & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    Blink = PsCaptureExceptionPort((__int64)Process);
    if ( Blink )
      v17 = 1;
    else
      Blink = CurrentServerSiloGlobals[53].Blink;
  }
  if ( Blink
    && ((CurrentThread = KeGetCurrentThread(), (CurrentThread->MiscFlags & 0x400) != 0)
     || CurrentThread->ApcStateIndex == 1
      ? (Teb = 0LL)
      : (Teb = CurrentThread->Teb),
        Teb) )
  {
    v26 = (Teb[5808] & 0x10) == 0;
    v22 = 0;
    if ( !v26 )
      v22 = -1073741823;
    v18 = a4;
    if ( v22 < 0 )
    {
      if ( v17 == 1 )
        ObfDereferenceObject(Blink);
      Blink = 0LL;
    }
  }
  else
  {
    v18 = a4;
  }
  if ( !Blink )
  {
LABEL_15:
    *a7 = 0;
    return 0LL;
  }
  v32[0] = 7340104;
  v32[1] = 9;
  v32[10] = a1 & 0xEFFFFFFF;
  v34 = a6;
  v37 = a3;
  v36 = a2;
  if ( v18 )
    memmove(v38, v18, 8LL * a2);
  v33 = MEMORY[0xFFFFF78000000014];
  v31[0] = 688LL;
  v23 = LpcSendWaitReceivePort((int)Blink, 0x20000, (int)v32, (__int64)v32, (__int64)v31, 0LL);
  if ( v17 == 1 )
    ObfDereferenceObject(Blink);
  if ( v23 >= 0 )
  {
    v24 = v35;
    v25 = v35;
    if ( v35 > 5 )
    {
      v24 = v35 - 6;
      v26 = v35 == 6;
    }
    else
    {
      if ( v35 == 5 )
      {
LABEL_52:
        *a7 = v25;
        return (unsigned int)v23;
      }
      v26 = v35 == 0;
    }
    if ( !v26 )
    {
      v27 = v24 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 - 1 >= 2 )
            v25 = 0;
        }
      }
    }
    goto LABEL_52;
  }
  return (unsigned int)v23;
}
