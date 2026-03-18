/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x14091735C
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x1406F8094 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140915BA8 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1409172C0 (CmpCheckSecurityCellAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x1408A64E0 (SeCreateAccessStateEx.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409174CC (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *v9; // rbx
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 v11; // rdx
  signed int AccessState; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  ACCESS_MASK v21; // [rsp+74h] [rbp-8Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v23[28]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset_0(v19, 0, 0xA0uLL);
  memset_0(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  v9 = (_DWORD *)CmKeyObjectType + 19;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx((__int64)CurrentThread, (__int64)CurrentThreadProcess, v19, v23, a3, v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v19, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
      {
LABEL_8:
        SeDeleteAccessState((__int64)v19, v13, v14, v15);
        return (unsigned int)AccessState;
      }
      if ( !v20 )
      {
        AccessState = 0;
        goto LABEL_8;
      }
      GrantedAccess = v21;
    }
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &SubjectSecurityContext,
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
    goto LABEL_8;
  }
  return (unsigned int)AccessState;
}
