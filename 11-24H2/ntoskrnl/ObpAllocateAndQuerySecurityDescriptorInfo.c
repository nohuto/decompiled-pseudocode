/*
 * XREFs of ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14087CD40 (SeQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 ObpAllocateAndQuerySecurityDescriptorInfo(__int64 BugCheckParameter2, DWORD a2, ...)
{
  __int16 **v2; // r12
  __int64 v4; // r15
  __int16 *v5; // rbx
  __int64 (__fastcall *v6)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char); // r12
  int SetSecurityObject; // eax
  int v8; // edi
  __int16 *Pool2; // rax
  int v11; // [rsp+30h] [rbp-28h]
  ULONG Length; // [rsp+A0h] [rbp+48h] BYREF
  DWORD SecurityInformation; // [rsp+A8h] [rbp+50h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+B0h] [rbp+58h] BYREF
  va_list ObjectsSecurityDescriptora; // [rsp+B0h] [rbp+58h]
  __int16 **v16; // [rsp+B8h] [rbp+60h]
  va_list va1; // [rsp+C0h] [rbp+68h] BYREF

  va_start(va1, a2);
  va_start(ObjectsSecurityDescriptora, a2);
  ObjectsSecurityDescriptor = va_arg(va1, PSECURITY_DESCRIPTOR);
  v16 = va_arg(va1, __int16 **);
  SecurityInformation = a2;
  Length = 0;
  v2 = v16;
  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)];
  if ( ObjectsSecurityDescriptor )
  {
    SeQuerySecurityDescriptorInfo(
      &SecurityInformation,
      0LL,
      &Length,
      (PSECURITY_DESCRIPTOR *)ObjectsSecurityDescriptora);
    Pool2 = (__int16 *)ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
    v5 = Pool2;
    if ( Pool2 )
    {
      v8 = SeQuerySecurityDescriptorInfo(
             &SecurityInformation,
             Pool2,
             &Length,
             (PSECURITY_DESCRIPTOR *)ObjectsSecurityDescriptora);
      goto LABEL_7;
    }
    return 3221225626LL;
  }
  Length = ObpDefaultSecurityDescriptorLength;
  v5 = (__int16 *)ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  if ( !v5 )
    return 3221225626LL;
  v6 = *(__int64 (__fastcall **)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char))(v4 + 152);
  v11 = *(_DWORD *)(v4 + 100);
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(BugCheckParameter2 - 8);
  if ( v6 == IopGetSetSecurityObject )
    SetSecurityObject = IopGetSetSecurityObject(
                          BugCheckParameter2,
                          1,
                          &SecurityInformation,
                          v5,
                          &Length,
                          (int)BugCheckParameter2 - 8,
                          v11,
                          v4 + 76,
                          0);
  else
    SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
  v8 = SetSecurityObject;
  if ( SetSecurityObject != -1073741789 )
    goto LABEL_6;
  ExFreePoolWithTag(v5, 0x7153624Fu);
  v5 = (__int16 *)ExAllocatePool2(0x100uLL, Length, 0x7153624Fu);
  if ( !v5 )
    return 3221225626LL;
  v8 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL);
LABEL_6:
  v2 = v16;
LABEL_7:
  if ( v8 < 0 )
    ExFreePoolWithTag(v5, 0x7153624Fu);
  else
    *v2 = v5;
  return (unsigned int)v8;
}
