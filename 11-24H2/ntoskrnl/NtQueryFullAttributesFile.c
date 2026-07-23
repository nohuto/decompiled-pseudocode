/*
 * XREFs of NtQueryFullAttributesFile @ 0x1408AA720
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408AABE0 (IopCleanupExtraCreateParameters.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // si
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-258h] BYREF
  NTSTATUS v11; // [rsp+60h] [rbp-248h]
  int v12; // [rsp+70h] [rbp-238h]
  POBJECT_ATTRIBUTES v13; // [rsp+80h] [rbp-228h]
  int v14; // [rsp+90h] [rbp-218h]
  __int16 v15; // [rsp+96h] [rbp-212h]
  int v16; // [rsp+A8h] [rbp-200h]
  PFILE_NETWORK_OPEN_INFORMATION v17; // [rsp+B8h] [rbp-1F0h]
  char v18; // [rsp+D9h] [rbp-1CFh]
  char v19; // [rsp+DBh] [rbp-1CDh]
  _BYTE *v20; // [rsp+E0h] [rbp-1C8h]
  int v21; // [rsp+E8h] [rbp-1C0h]
  __int128 v22; // [rsp+F0h] [rbp-1B8h]
  __int128 v23; // [rsp+100h] [rbp-1A8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-198h]
  __int128 v25; // [rsp+130h] [rbp-178h] BYREF
  __int128 v26; // [rsp+140h] [rbp-168h]
  __int128 v27; // [rsp+150h] [rbp-158h]
  __int64 v28; // [rsp+160h] [rbp-148h]
  _BYTE v29[272]; // [rsp+170h] [rbp-138h] BYREF

  memset_0(v29, 0, sizeof(v29));
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
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset_0(v10, 0, 0xE0uLL);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v10[0] = 14680072;
  v15 = 7;
  v16 = 1;
  v14 = 2113536;
  v18 = 1;
  v19 = 1;
  v20 = v29;
  v13 = ObjectAttributes;
  v21 = 32;
  if ( PreviousMode )
    v17 = (PFILE_NETWORK_OPEN_INFORMATION)&v25;
  else
    v17 = FileInformation;
  v22 = 0LL;
  v23 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(v22) = 40;
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
  IopCleanupExtraCreateParameters(v10);
  if ( v12 == -1096154543 )
  {
    result = v11;
    if ( v11 >= 0 && PreviousMode )
    {
      *(_OWORD *)&FileInformation->CreationTime.LowPart = v25;
      *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v26;
      *(_OWORD *)&FileInformation->AllocationSize.LowPart = v27;
      *(_QWORD *)&FileInformation->FileAttributes = v28;
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
