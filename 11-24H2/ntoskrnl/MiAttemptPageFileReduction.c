/*
 * XREFs of MiAttemptPageFileReduction @ 0x1403EF264
 * Callers:
 *     MiHandlePageFileSizeChanges @ 0x1403EE2E4 (MiHandlePageFileSizeChanges.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiOkToShrinkPageFiles @ 0x1403EF6CC (MiOkToShrinkPageFiles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 */

int __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  KIRQL v4; // al
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 FileInformation; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+42h] [rbp-BEh]
  __int64 v14; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v17)(); // [rsp+70h] [rbp-90h]
  _BYTE *v18; // [rsp+78h] [rbp-88h]
  __int16 v19; // [rsp+90h] [rbp-70h]
  char v20; // [rsp+92h] [rbp-6Eh]
  _BYTE Object[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v22; // [rsp+A4h] [rbp-5Ch]
  _QWORD v23[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C4h] [rbp-3Ch]
  char v26; // [rsp+C8h] [rbp-38h] BYREF

  FileInformation = 0LL;
  memset_0(&v12, 0, 0x58uLL);
  memset_0(Object, 0, 0x68uLL);
  v22 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 16LL;
  v23[1] = v23;
  v23[0] = v23;
  Object[2] = 6;
  v23[2] = v2;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) != 0 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1728));
    *(_QWORD *)(a1 + 32) = 0LL;
    MiReleaseSpinLockExclusive((_DWORD *)(v2 + 1728), v4);
    LODWORD(v5) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 19264), *(_QWORD *)(v2 + 19608));
    if ( !(_DWORD)v5 )
      return v5;
    v24 = 16;
  }
  else
  {
    v24 = *(unsigned __int8 *)(a1 + 76);
    v25 = *(_DWORD *)(a1 + 40);
  }
  v6 = *(_QWORD *)(v2 + 992);
  v19 = 0;
  v16 = 0LL;
  v14 = v6;
  v12 = 18;
  v15 = xHalTimerWatchdogStop;
  v17 = MiAttemptPageFileReductionApc;
  v18 = Object;
  v13 = 88;
  v20 = 0;
  KeInsertQueueApc((__int64)&v12, (__int64)Object, 0LL, 0);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  v7 = &v26;
  v8 = (__int64 *)(v2 + 18528);
  do
  {
    v5 = *(unsigned int *)v7;
    if ( (_DWORD)v5 )
    {
      v9 = *v8;
      FileInformation = v5 << 12;
      LODWORD(v5) = IoSetInformation(*(PFILE_OBJECT *)(v9 + 24), FileAllocationInformation, 8u, &FileInformation);
    }
    ++v8;
    v7 += 4;
    --v3;
  }
  while ( v3 );
  return v5;
}
