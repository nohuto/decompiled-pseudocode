/*
 * XREFs of RXactpCommit @ 0x180109178
 * Callers:
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180109070 (RtlApplyRXact.c)
 *     RtlApplyRXactNoFlush @ 0x180109150 (RtlApplyRXactNoFlush.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1801635C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180164D90 (NtDeleteKey.c)
 */

NTSTATUS __fastcall RXactpCommit(__int64 a1)
{
  unsigned int *v1; // r14
  void *v2; // rdx
  unsigned int v3; // r15d
  char v4; // r12
  unsigned int v5; // r13d
  unsigned int *v6; // rbx
  HANDLE v7; // rcx
  NTSTATUS result; // eax
  char v9; // si
  NTSTATUS v10; // eax
  int v11; // edi
  HANDLE v12; // rcx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+48h] BYREF
  void *v16; // [rsp+C0h] [rbp+50h]

  v1 = *(unsigned int **)(a1 + 24);
  v2 = *(void **)a1;
  v3 = 0;
  v4 = *(_BYTE *)(a1 + 16);
  KeyHandle = 0LL;
  v5 = *v1;
  v6 = v1 + 4;
  v16 = v2;
  while ( 1 )
  {
    if ( v3 >= v5 )
      return 0;
    *((_QWORD *)v6 + 2) += v1;
    *((_QWORD *)v6 + 4) += v1;
    *((_QWORD *)v6 + 7) += v1;
    if ( v6[1] != 1 )
      break;
    v12 = (HANDLE)*((_QWORD *)v6 + 5);
    if ( v12 != (HANDLE)-1LL && v4 )
    {
      KeyHandle = (HANDLE)*((_QWORD *)v6 + 5);
      v9 = 0;
      goto LABEL_22;
    }
    ObjectAttributes.RootDirectory = v2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v6 + 2);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0x10000u, &ObjectAttributes);
    if ( result >= 0 )
    {
      v12 = KeyHandle;
      v9 = 1;
LABEL_22:
      v10 = NtDeleteKey(v12);
      goto LABEL_9;
    }
    if ( result != -1073741772 )
      return result;
LABEL_12:
    v2 = v16;
    v6 = (unsigned int *)((char *)v6 + *v6);
    ++v3;
  }
  if ( v6[1] != 2 )
    return -1073741811;
  v7 = (HANDLE)*((_QWORD *)v6 + 5);
  if ( v7 == (HANDLE)-1LL || !v4 )
  {
    ObjectAttributes.RootDirectory = v2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v6 + 2);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 192LL;
    Disposition = 0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result < 0 )
      return result;
    v7 = KeyHandle;
    v9 = 1;
  }
  else
  {
    KeyHandle = (HANDLE)*((_QWORD *)v6 + 5);
    v9 = 0;
  }
  v10 = ZwSetValueKey(v7, (PUNICODE_STRING)(v6 + 6), 0, v6[12], *((PVOID *)v6 + 7), v6[13]);
LABEL_9:
  v11 = v10;
  if ( v9 )
    NtClose(KeyHandle);
  if ( v11 >= 0 )
    goto LABEL_12;
  return v11;
}
