/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x14090ADCC
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x1406F6094 (CmpCheckKcbStackAccess.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140909618 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x14090AD30 (CmpCheckSecurityCellAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14090AF3C (CmpSetAccessStateForBackupRestore.c)
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
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+70h] [rbp-90h]
  ACCESS_MASK v18; // [rsp+74h] [rbp-8Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v20[28]; // [rsp+100h] [rbp+0h] BYREF

  GrantedAccess = 0;
  AccessStatus[0] = 0;
  memset_0(v16, 0, 0xA0uLL);
  memset_0(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  v9 = (_DWORD *)CmKeyObjectType + 19;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx((__int64)CurrentThread, (__int64)CurrentThreadProcess, v16, v20, a3, v9);
  if ( AccessState >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v11) = a2;
      AccessState = CmpSetAccessStateForBackupRestore(v16, v11, SecurityDescriptor, 0LL);
      if ( AccessState < 0 )
      {
LABEL_8:
        SeDeleteAccessState((__int64)v16);
        return (unsigned int)AccessState;
      }
      if ( !v17 )
      {
        AccessState = 0;
        goto LABEL_8;
      }
      GrantedAccess = v18;
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
