/*
 * XREFs of SepPrivilegeCheck @ 0x140400B10
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     IopCheckBackupRestorePrivilege @ 0x140861600 (IopCheckBackupRestorePrivilege.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheckEx @ 0x14089FA50 (SeSinglePrivilegeCheckEx.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x14092D41C (SeCheckAuditPrivilege.c)
 *     NtPrivilegeCheck @ 0x140933900 (NtPrivilegeCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
 *     SePrivilegeCheck @ 0x1409C2C50 (SePrivilegeCheck.c)
 * Callees:
 *     <none>
 */

char __fastcall SepPrivilegeCheck(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // eax
  __int64 v7; // r9
  _DWORD *v8; // rdx
  __int64 v9; // rbx
  int v10; // r10d
  unsigned __int8 v11; // cf
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h] BYREF

  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return 1;
  _InterlockedExchange64(&v14, *(_QWORD *)(a1 + 72));
  _InterlockedExchange64(&v13, *(_QWORD *)(a1 + 64));
  v7 = v14 & v13;
  _InterlockedOr((volatile signed __int32 *)&v13, 0);
  if ( a3 )
  {
    v8 = (_DWORD *)(a2 + 8);
    v9 = a3;
    do
    {
      v10 = *v8 & 0x7FFFFFFF;
      v11 = _bittest64(&v7, (unsigned int)*(v8 - 2));
      *v8 = v10;
      if ( v11 )
      {
        *v8 = v10 | 0x80000000;
        ++v5;
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  if ( (a4 & 1) != 0 )
    return v5 == a3;
  return v5 != 0;
}
