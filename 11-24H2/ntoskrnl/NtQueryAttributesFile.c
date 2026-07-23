/*
 * XREFs of NtQueryAttributesFile @ 0x1408AA9A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x1408AACB0 (FsRtlpCleanupEcps.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

NTSTATUS __cdecl NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _DWORD v10[12]; // [rsp+50h] [rbp-258h] BYREF
  POBJECT_ATTRIBUTES v11; // [rsp+80h] [rbp-228h]
  int v12; // [rsp+90h] [rbp-218h]
  __int16 v13; // [rsp+96h] [rbp-212h]
  int v14; // [rsp+A8h] [rbp-200h]
  PFILE_BASIC_INFORMATION v15; // [rsp+B0h] [rbp-1F8h]
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
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)FileInformation < 0x7FFFFFFF0000LL )
      v5 = (__int64)FileInformation;
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
  v15 = FileInformation;
  v16 = v23;
  v17 = 1;
  v18 = v25;
  v11 = ObjectAttributes;
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
         (__int64)ObjectAttributes,
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
    return -1073741788;
  }
  return v7;
}
