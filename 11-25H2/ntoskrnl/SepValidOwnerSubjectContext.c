/*
 * XREFs of SepValidOwnerSubjectContext @ 0x14091C194
 * Callers:
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SeSinglePrivilegeCheckEx @ 0x14089FA50 (SeSinglePrivilegeCheckEx.c)
 *     SepIdAssignableAsOwner @ 0x14091C2A4 (SepIdAssignableAsOwner.c)
 */

char __fastcall SepValidOwnerSubjectContext(__int64 *a1, void *a2, char a3)
{
  bool v3; // di
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  unsigned int v9; // r15d

  v3 = 0;
  if ( !a2 )
    return 0;
  if ( a3 || (v6 = *a1) == 0 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  v9 = *(_DWORD *)(v6 + 124);
  while ( v8 < v9 )
  {
    if ( RtlEqualSid(a2, *(PSID *)(*(_QWORD *)(v6 + 152) + 16LL * v8)) )
    {
      v3 = (unsigned __int8)SepIdAssignableAsOwner(v6, v8) != 0;
      break;
    }
    ++v8;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegion();
  if ( !v3 )
    return SeSinglePrivilegeCheckEx(*(_QWORD *)&SeRestorePrivilege, (__int64)a1, 1);
  return v3;
}
