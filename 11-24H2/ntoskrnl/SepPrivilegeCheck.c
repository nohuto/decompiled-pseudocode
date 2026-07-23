/*
 * XREFs of SepPrivilegeCheck @ 0x1403FE430
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     SeSinglePrivilegeCheckEx @ 0x14084FF60 (SeSinglePrivilegeCheckEx.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObpAdjustCreatorAccessState @ 0x14087EBB0 (ObpAdjustCreatorAccessState.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408AA2E0 (IopCheckBackupRestorePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     NtPrivilegeCheck @ 0x140984C80 (NtPrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A803A8 (PiAuDoesClientHavePrivilege.c)
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
