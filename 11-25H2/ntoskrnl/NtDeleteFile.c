/*
 * XREFs of NtDeleteFile @ 0x140A7D9A0
 * Callers:
 *     DifNtDeleteFileWrapper @ 0x140629650 (DifNtDeleteFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408EF8F0 (IopCleanupExtraCreateParameters.c)
 */

NTSTATUS __cdecl NtDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v7[12]; // [rsp+58h] [rbp-B0h] BYREF
  POBJECT_ATTRIBUTES v8; // [rsp+88h] [rbp-80h]
  int v9; // [rsp+98h] [rbp-70h]
  __int16 v10; // [rsp+9Eh] [rbp-6Ah]
  int v11; // [rsp+B0h] [rbp-58h]
  char v12; // [rsp+E2h] [rbp-26h]
  _BYTE *v13; // [rsp+E8h] [rbp-20h]
  int v14; // [rsp+F0h] [rbp-18h]
  __int128 v15; // [rsp+F8h] [rbp-10h]
  __int128 v16; // [rsp+108h] [rbp+0h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+118h] [rbp+10h]
  _BYTE v18[272]; // [rsp+138h] [rbp+30h] BYREF

  memset_0(v18, 0, sizeof(v18));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(v7, 0, 0xE0uLL);
  v7[0] = 14680072;
  v9 = 4096;
  v10 = 7;
  v13 = v18;
  CurrentSilo = 0LL;
  v15 = 0LL;
  LOWORD(v15) = 40;
  v11 = 1;
  v12 = 1;
  v8 = ObjectAttributes;
  v14 = 32;
  v16 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v4 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000,
         (int)v7,
         (__int64)CurrentSilo,
         &v6);
  IopCleanupExtraCreateParameters((__int64)v7);
  result = v7[4];
  if ( v7[8] != -1096154543 )
    return v4;
  return result;
}
