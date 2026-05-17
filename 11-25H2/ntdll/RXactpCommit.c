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

__int64 __fastcall RXactpCommit(__int64 *a1)
{
  unsigned int *v1; // r14
  __int64 v2; // rdx
  unsigned int v3; // r15d
  char v4; // r12
  unsigned int v5; // r13d
  unsigned int *v6; // rbx
  HANDLE v7; // rcx
  __int64 result; // rax
  char v9; // si
  int v10; // eax
  int v11; // edi
  HANDLE v12; // rcx
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  unsigned int *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int128 v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+50h]

  v1 = (unsigned int *)a1[3];
  v2 = *a1;
  v3 = 0;
  v4 = *((_BYTE *)a1 + 16);
  Handle = 0LL;
  v5 = *v1;
  v6 = v1 + 4;
  v20 = v2;
  while ( 1 )
  {
    if ( v3 >= v5 )
      return 0LL;
    *((_QWORD *)v6 + 2) += v1;
    *((_QWORD *)v6 + 4) += v1;
    *((_QWORD *)v6 + 7) += v1;
    if ( v6[1] != 1 )
      break;
    v12 = (HANDLE)*((_QWORD *)v6 + 5);
    if ( v12 != (HANDLE)-1LL && v4 )
    {
      Handle = (HANDLE)*((_QWORD *)v6 + 5);
      v9 = 0;
      goto LABEL_22;
    }
    v14 = v2;
    v15 = v6 + 2;
    v13 = 48LL;
    v16 = 64LL;
    v17 = 0LL;
    result = NtOpenKey(&Handle, 0x10000LL, &v13);
    if ( (int)result >= 0 )
    {
      v12 = Handle;
      v9 = 1;
LABEL_22:
      v10 = NtDeleteKey(v12);
      goto LABEL_9;
    }
    if ( (_DWORD)result != -1073741772 )
      return result;
LABEL_12:
    v2 = v20;
    v6 = (unsigned int *)((char *)v6 + *v6);
    ++v3;
  }
  if ( v6[1] != 2 )
    return 3221225485LL;
  v7 = (HANDLE)*((_QWORD *)v6 + 5);
  if ( v7 == (HANDLE)-1LL || !v4 )
  {
    v14 = v2;
    v15 = v6 + 2;
    v13 = 48LL;
    v16 = 192LL;
    v18 = 0;
    v17 = 0LL;
    result = ZwCreateKey(&Handle, 131078LL, &v13, 0LL, 0LL, 0, &v18);
    if ( (int)result < 0 )
      return result;
    v7 = Handle;
    v9 = 1;
  }
  else
  {
    Handle = (HANDLE)*((_QWORD *)v6 + 5);
    v9 = 0;
  }
  v10 = ZwSetValueKey(v7, v6 + 6, 0LL, v6[12], *((_QWORD *)v6 + 7), v6[13]);
LABEL_9:
  v11 = v10;
  if ( v9 )
    NtClose(Handle);
  if ( v11 >= 0 )
    goto LABEL_12;
  return (unsigned int)v11;
}
