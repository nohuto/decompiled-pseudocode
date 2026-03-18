/*
 * XREFs of PspAssignPrimaryToken @ 0x140777070
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     PspLockUnlockProcessExclusive @ 0x140418978 (PspLockUnlockProcessExclusive.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObClearProcessDeviceMap @ 0x1408A94FC (ObClearProcessDeviceMap.c)
 *     SeCheckPrivilegedObject @ 0x140913BF4 (SeCheckPrivilegedObject.c)
 *     SeIsTokenAssignableToProcess @ 0x140A31678 (SeIsTokenAssignableToProcess.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  int IsTokenAssignableToProcess; // ebx
  __int64 v10; // r9
  signed __int32 *v11; // rdi
  signed __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID v17; // [rsp+48h] [rbp-18h] BYREF
  PVOID v18; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+58h] [rbp-8h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v16[0] = 0;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v18, 0LL);
  if ( result >= 0 )
  {
    v8 = v18;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess(v18, v16);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v16[0]
        || (LOBYTE(v10) = a2,
            (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeAssignPrimaryTokenPrivilege,
                               a3,
                               512LL,
                               v10)) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(a3, 0x65537350u, (__int64)&v17, 0LL, 0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v11 = (signed __int32 *)v17;
          Object = 0LL;
          if ( _bittest((const signed __int32 *)v17 + 124, 0xFu) )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessShared((__int64)v17, a1);
            if ( _bittest(v11 + 124, 0xFu) )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v11, v8, &Object);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v11 = (signed __int32 *)v17;
                v12 = _InterlockedIncrement64(&PsNextSecurityDomain);
                v13 = v17;
                *((_QWORD *)v17 + 236) = v12;
                v13[237] = v12;
                PspSynchronizeThreadIsolationDomains((__int64)v13);
                v8 = v18;
              }
            }
            PspUnlockProcessShared((__int64)v11);
            if ( IsTokenAssignableToProcess >= 0 )
            {
              PspLockUnlockProcessExclusive((__int64)v11, a1, v14, v15);
              ObfDereferenceObject(Object);
              ObClearProcessDeviceMap(v11);
            }
          }
          ObfDereferenceObjectWithTag(v11, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
