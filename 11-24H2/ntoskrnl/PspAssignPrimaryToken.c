/*
 * XREFs of PspAssignPrimaryToken @ 0x140777290
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     PspLockUnlockProcessExclusive @ 0x140408728 (PspLockUnlockProcessExclusive.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     ObClearProcessDeviceMap @ 0x1408FF75C (ObClearProcessDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
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
  _BYTE v14[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID v15; // [rsp+48h] [rbp-18h] BYREF
  PVOID v16; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+58h] [rbp-8h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v14[0] = 0;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v16, 0LL);
  if ( result >= 0 )
  {
    v8 = v16;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess(v16, v14);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v14[0]
        || (LOBYTE(v10) = a2,
            (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeAssignPrimaryTokenPrivilege,
                               a3,
                               512LL,
                               v10)) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(a3, 0x65537350u, (__int64)&v15, 0LL, 0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v11 = (signed __int32 *)v15;
          Object = 0LL;
          if ( _bittest((const signed __int32 *)v15 + 124, 0xFu) )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessShared((__int64)v15, a1);
            if ( _bittest(v11 + 124, 0xFu) )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v11, v8, &Object);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v11 = (signed __int32 *)v15;
                v12 = _InterlockedIncrement64(&PsNextSecurityDomain);
                v13 = v15;
                *((_QWORD *)v15 + 236) = v12;
                v13[237] = v12;
                PspSynchronizeThreadIsolationDomains((__int64)v13);
                v8 = v16;
              }
            }
            PspUnlockProcessShared((__int64)v11);
            if ( IsTokenAssignableToProcess >= 0 )
            {
              PspLockUnlockProcessExclusive((__int64)v11, a1);
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
