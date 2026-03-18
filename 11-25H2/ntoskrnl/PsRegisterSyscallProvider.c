/*
 * XREFs of PsRegisterSyscallProvider @ 0x140761520
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1405D8998 (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x1405D89FC (PspDereferenceSyscallProvider.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1405D8B4C (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x140704194 (VslRevokeSyscallProviderServiceTables.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x140761A7C (PspLookupSyscallProviderByIdNoLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRegisterSyscallProvider(__int64 *Object, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  _QWORD *Pool2; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // r14d
  _QWORD *v14; // rax
  int v15; // ebx
  volatile signed __int64 *v16; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-B0h]
  int v19; // [rsp+40h] [rbp-A8h]

  v3 = 0;
  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  if ( *(_BYTE *)a2 != 1 )
    return 3221225561LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v10 = *(_QWORD *)(a2 + 24);
  memset_0(Pool2, 0, 0x60uLL);
  v11 = *(_OWORD *)(a2 + 4);
  v9[4] = Object;
  *((_OWORD *)v9 + 1) = v11;
  ObfReferenceObjectWithTag(Object, 0x63537350u);
  v9[5] = v10;
  v9[6] = 1LL;
  v9[7] = 0LL;
  v9[8] = 0LL;
  v9[10] = v9 + 9;
  v9[9] = v9 + 9;
  *((_DWORD *)v9 + 23) = -1;
  *((_DWORD *)v9 + 22) = 0;
  memset_0(v17, 0, 0x68uLL);
  v18 = Object[3];
  v12 = VslpEnterIumSecureMode(2u, 0x5Au, 0, (__int64)v17);
  if ( v12 < 0 )
  {
    v3 = v12;
LABEL_20:
    ObfDereferenceObjectWithTag((PVOID)v9[4], 0x63537350u);
    ExFreePoolWithTag(v9, 0x63537350u);
    return v3;
  }
  v13 = v19;
  *((_DWORD *)v9 + 23) = v19;
  v16 = 0LL;
  PspAcquireSyscallProviderRegistrationLockExclusive();
  if ( (unsigned int)PspLookupSyscallProviderByIdNoLock(v9 + 2, &v16) == -1073741275 )
  {
    v14 = off_140FD72D8;
    if ( *off_140FD72D8 != (_UNKNOWN *)&PspSyscallProviders )
      __fastfail(3u);
    *v9 = &PspSyscallProviders;
    v15 = 0;
    v9[1] = v14;
    *v14 = v9;
    off_140FD72D8 = (_UNKNOWN **)v9;
  }
  else
  {
    v15 = -1073741771;
  }
  PspReleaseSyscallProviderRegistrationLockExclusive();
  if ( v16 )
    PspDereferenceSyscallProvider(v16);
  if ( v15 < 0 )
  {
    v3 = v15;
    if ( v13 != -1 )
      VslRevokeSyscallProviderServiceTables(Object[3]);
    goto LABEL_20;
  }
  *a3 = v9;
  return v3;
}
