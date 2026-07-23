/*
 * XREFs of NtQuerySecurityObject @ 0x14086F0A0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140774824 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v8; // rcx
  PULONG v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  ACCESS_MASK v18; // edx
  NTSTATUS result; // eax
  PVOID v20; // rsi
  __int64 v21; // rax
  __int64 (__fastcall *v22)(ULONG_PTR *, int, DWORD *, void *, ULONG *, __int64, int, __int64); // r10
  NTSTATUS SetSecurityObject; // eax
  NTSTATUS v24; // ebx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v29; // [rsp+58h] [rbp-20h] BYREF
  DWORD v30; // [rsp+88h] [rbp+10h] BYREF
  ULONG Lengtha; // [rsp+98h] [rbp+20h] BYREF

  Lengtha = Length;
  v30 = SecurityInformation;
  v29 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    v9 = LengthNeeded;
    if ( (unsigned __int64)LengthNeeded < 0x7FFFFFFF0000LL )
      v8 = (__int64)LengthNeeded;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( Lengtha )
    {
      v10 = (unsigned __int64)SecurityDescriptor;
      if ( ((unsigned __int8)SecurityDescriptor & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)SecurityDescriptor + Lengtha - 1;
      if ( v11 >= 0x7FFFFFFF0000LL || (unsigned __int64)SecurityDescriptor > v11 )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
  }
  else
  {
    v9 = LengthNeeded;
  }
  v13 = 0;
  if ( (v30 & 0x10000) != 0 )
    v13 = 16908288;
  v14 = v13 | 0x20000;
  if ( (v30 & 0x17) == 0 )
    v14 = v13;
  v15 = v14 | 0x20000;
  if ( (v30 & 0x20) == 0 )
    v15 = v14;
  v16 = v15 | 0x20000;
  if ( (v30 & 0x40) == 0 )
    v16 = v15;
  v17 = v16 | 0x20000;
  if ( (v30 & 0x80u) == 0 )
    v17 = v16;
  if ( (v30 & 0x100) != 0 )
    v17 |= 0x20000u;
  Object = 0LL;
  v18 = v17 | 0x1000000;
  if ( (v30 & 8) == 0 )
    v18 = v17;
  result = ObReferenceObjectByHandle(Handle, v18, 0LL, PreviousMode, &Object, &v29);
  if ( result >= 0 )
  {
    v20 = Object;
    v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v22 = *(__int64 (__fastcall **)(ULONG_PTR *, int, DWORD *, void *, ULONG *, __int64, int, __int64))(v21 + 152);
    v27 = v21 + 76;
    v26 = *(_DWORD *)(v21 + 100);
    HandleInformation = (POBJECT_HANDLE_INFORMATION)((char *)Object - 8);
    if ( (char *)v22 == (char *)SeDefaultObjectMethod )
    {
      SetSecurityObject = SeDefaultObjectMethod(Object, 1LL, &v30, SecurityDescriptor, &Lengtha);
    }
    else if ( (char *)v22 == (char *)IopGetSetSecurityObject )
    {
      SetSecurityObject = IopGetSetSecurityObject(
                            (ULONG_PTR)Object,
                            &Lengtha,
                            (int)HandleInformation,
                            v26,
                            v27,
                            PreviousMode);
    }
    else if ( v22 == CmpSecurityMethod )
    {
      SetSecurityObject = CmpSecurityMethod(
                            (ULONG_PTR *)Object,
                            1,
                            &v30,
                            SecurityDescriptor,
                            &Lengtha,
                            (__int64)HandleInformation,
                            v26,
                            v27);
    }
    else
    {
      SetSecurityObject = guard_dispatch_icall_no_overrides(Object);
    }
    v24 = SetSecurityObject;
    *v9 = Lengtha;
    ObfDereferenceObject(v20);
    return v24;
  }
  return result;
}
