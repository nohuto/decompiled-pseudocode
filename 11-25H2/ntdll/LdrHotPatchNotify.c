/*
 * XREFs of LdrHotPatchNotify @ 0x18015FB50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetProcedureAddress @ 0x1800149E0 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015FF2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x1801600BC (LdrpLoadPatchImage.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x180164B30 (NtCreateThreadEx.c)
 */

__int64 __fastcall LdrHotPatchNotify(PVOID Argument)
{
  int LoadedDllByHandle; // ebx
  int WowTebOffset; // esi
  bool v5; // al
  _OWORD ThreadInformation[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v7; // [rsp+80h] [rbp+37h]
  int v8; // [rsp+88h] [rbp+3Fh]
  PUSER_THREAD_START_ROUTINE StartRoutine; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE ThreadHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+77h] BYREF

  LOBYTE(StartRoutine) = 0;
  ThreadHandle = LdrHotPatchNotify;
  if ( !LdrpIsHotPatchingEnabled )
    return 3221225659LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v7 = 0LL;
  v8 = 0;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(Argument, (__int64 *)&BaseAddress, 0LL);
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v5 = Argument == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  if ( LoadedDllByHandle < 0 || v5 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)Argument <= 0xFFFFFFFF )
    {
      StartRoutine = 0LL;
      LdrpGetProcedureAddress(
        LdrSystemDllInitBlock.Wow64SharedInformation[6],
        "LdrHotPatchNotify",
        0,
        (char **)&StartRoutine);
      LoadedDllByHandle = NtCreateThreadEx(
                            &ThreadHandle,
                            0x1FFFFFu,
                            0LL,
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            StartRoutine,
                            Argument,
                            0,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
      if ( LoadedDllByHandle >= 0 )
      {
        NtWaitForSingleObject(ThreadHandle, 0, 0LL);
        LoadedDllByHandle = ZwQueryInformationThread(
                              ThreadHandle,
                              ThreadBasicInformation,
                              ThreadInformation,
                              0x30u,
                              0LL);
        if ( LoadedDllByHandle >= 0 )
          LoadedDllByHandle = ThreadInformation[0];
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpIsCurrentPatchLatest(Argument, &StartRoutine);
    if ( LoadedDllByHandle >= 0 && (_BYTE)StartRoutine != 1 )
      LoadedDllByHandle = LdrpLoadPatchImage((__int64)Argument);
  }
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  if ( WowTebOffset <= 0 && LoadedDllByHandle < 0 )
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), 0LL, 0LL, LoadedDllByHandle, 8);
  return (unsigned int)LoadedDllByHandle;
}
