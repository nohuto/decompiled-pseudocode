/*
 * XREFs of NtQueryAttributesFile @ 0x1408A2300
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x1408A2610 (FsRtlpCleanupEcps.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 __fastcall NtQueryAttributesFile(__int64 a1, unsigned __int64 a2)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _DWORD v10[12]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v11; // [rsp+80h] [rbp-228h]
  int v12; // [rsp+90h] [rbp-218h]
  __int16 v13; // [rsp+96h] [rbp-212h]
  int v14; // [rsp+A8h] [rbp-200h]
  unsigned __int64 v15; // [rsp+B0h] [rbp-1F8h]
  _OWORD *v16; // [rsp+B8h] [rbp-1F0h]
  char v17; // [rsp+D9h] [rbp-1CFh]
  _BYTE *v18; // [rsp+E0h] [rbp-1C8h]
  int v19; // [rsp+E8h] [rbp-1C0h]
  __int128 v20; // [rsp+F0h] [rbp-1B8h]
  __int128 v21; // [rsp+100h] [rbp-1A8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-198h]
  _OWORD v23[3]; // [rsp+130h] [rbp-178h] BYREF
  __int64 v24; // [rsp+160h] [rbp-148h]
  _BYTE v25[272]; // [rsp+170h] [rbp-138h] BYREF

  memset_0(v25, 0, sizeof(v25));
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset_0(v10, 0, 0xE0uLL);
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v10[0] = 14680072;
  v13 = 7;
  v14 = 1;
  v12 = 2113536;
  v15 = a2;
  v16 = v23;
  v17 = 1;
  v18 = v25;
  v11 = a1;
  v19 = 32;
  v20 = 0LL;
  v21 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(v20) = 40;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (__int64)v10,
         (__int64)CurrentSilo,
         Handle);
  if ( *((_QWORD *)&v20 + 1) && (unsigned __int8)FsRtlpCleanupEcps() )
    *((_QWORD *)&v20 + 1) = 0LL;
  if ( v10[8] == -1096154543 )
    return v10[4];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], PreviousMode);
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v7;
}
