/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_UNKNOWN **MiFlushStrongCodeDriverLoadFailures()
{
  _UNKNOWN **result; // rax
  struct _KTHREAD *Lock; // rdi
  const CHAR **v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // [rsp+28h] [rbp-69h]
  int v6; // [rsp+30h] [rbp-61h]
  int v7; // [rsp+48h] [rbp-49h] BYREF
  int v8; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v9; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+58h] [rbp-39h] BYREF
  char v11[16]; // [rsp+78h] [rbp-19h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp-9h]
  int v13; // [rsp+90h] [rbp-1h]
  int v14; // [rsp+94h] [rbp+3h]
  const CHAR *v15; // [rsp+98h] [rbp+7h]
  _DWORD v16[2]; // [rsp+A0h] [rbp+Fh] BYREF
  int *v17; // [rsp+A8h] [rbp+17h]
  int v18; // [rsp+B0h] [rbp+1Fh]
  int v19; // [rsp+B4h] [rbp+23h]
  int *v20; // [rsp+B8h] [rbp+27h]
  int v21; // [rsp+C0h] [rbp+2Fh]
  int v22; // [rsp+C4h] [rbp+33h]
  __int64 *v23; // [rsp+C8h] [rbp+37h]
  int v24; // [rsp+D0h] [rbp+3Fh]
  int v25; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = &retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    Lock = MiAcquireLoadLock(1);
    while ( 1 )
    {
      v2 = (const CHAR **)qword_140E2D970;
      if ( qword_140E2D970 == &qword_140E2D970 )
        break;
      if ( *((PVOID **)qword_140E2D970 + 1) != &qword_140E2D970
        || (v3 = *(_QWORD *)qword_140E2D970, *(PVOID *)(*(_QWORD *)qword_140E2D970 + 8LL) != qword_140E2D970) )
      {
        __fastfail(3u);
      }
      qword_140E2D970 = *(PVOID *)qword_140E2D970;
      *(_QWORD *)(v3 + 8) = &qword_140E2D970;
      if ( **(_DWORD **)&qword_140E37658 > 2u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000004000LL) )
      {
        tlgCreate1Sz_char((__int64)v11, v2[2]);
        v14 = 0;
        v16[1] = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v12 = v16;
        v15 = v2[4];
        v16[0] = *((unsigned __int16 *)v2 + 12);
        v7 = *((_DWORD *)v2 + 10);
        v17 = &v7;
        v8 = *((_DWORD *)v2 + 11);
        v20 = &v8;
        v23 = &v9;
        v13 = 2;
        v18 = 4;
        v21 = 4;
        v9 = 0x1000000LL;
        v24 = 8;
        tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_140056CE5, v4, 1u, v5, v6, 8u, &v10);
      }
      ExFreePoolWithTag(v2, 0);
    }
    return (_UNKNOWN **)MmReleaseLoadLock(Lock);
  }
  return result;
}
