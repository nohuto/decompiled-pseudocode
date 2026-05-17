/*
 * XREFs of LdrHotPatchNotify @ 0x18015E690
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180058DA0 (LdrpGetProcedureAddress.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x1801635A0 (NtCreateThreadEx.c)
 */

__int64 __fastcall LdrHotPatchNotify(void *a1)
{
  int LoadedDllByHandle; // ebx
  int WowTebOffset; // esi
  bool v5; // al
  _OWORD v6[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v7; // [rsp+80h] [rbp+37h]
  int v8; // [rsp+88h] [rbp+3Fh]
  unsigned __int64 v9; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v11; // [rsp+C0h] [rbp+77h] BYREF

  LOBYTE(v9) = 0;
  Handle = LdrHotPatchNotify;
  if ( !LdrpIsHotPatchingEnabled )
    return 3221225659LL;
  Handle = 0LL;
  v11 = 0LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v11, 0LL);
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v5 = a1 == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  if ( LoadedDllByHandle < 0 || v5 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)a1 <= 0xFFFFFFFF )
    {
      v9 = 0LL;
      LdrpGetProcedureAddress(qword_1801EA498, "LdrHotPatchNotify", 0, &v9);
      LoadedDllByHandle = NtCreateThreadEx(&Handle, 0x1FFFFFLL, 0LL, -1LL, v9, a1, 0, 0LL, 0LL, 0LL, 0LL);
      if ( LoadedDllByHandle >= 0 )
      {
        NtWaitForSingleObject(Handle, 0, 0LL);
        LoadedDllByHandle = ZwQueryInformationThread(Handle, 0LL, v6, 48LL, 0LL);
        if ( LoadedDllByHandle >= 0 )
          LoadedDllByHandle = v6[0];
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpIsCurrentPatchLatest(a1, &v9);
    if ( LoadedDllByHandle >= 0 && (_BYTE)v9 != 1 )
      LoadedDllByHandle = LdrpLoadPatchImage((char)a1);
  }
  if ( v11 )
    LdrpDereferenceModule(v11);
  if ( Handle )
    NtClose(Handle);
  if ( WowTebOffset <= 0 && LoadedDllByHandle < 0 )
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), 0LL, 0LL, LoadedDllByHandle, 8);
  return (unsigned int)LoadedDllByHandle;
}
