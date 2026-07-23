/*
 * XREFs of ObGetObjectSecurity @ 0x1408A4D30
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x140629EF0 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408A4FB0 (ObpReferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  ULONG_PTR v6; // rsi
  void *Pool2; // rax
  __int64 (__fastcall *v9)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char); // rax
  UNICODE_STRING *v10; // r9
  NTSTATUS SetSecurityObject; // eax
  NTSTATUS v12; // r15d
  ULONG v13; // eax
  void *v14; // rax
  char *v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  ULONG Length; // [rsp+90h] [rbp+8h] BYREF
  DWORD v19; // [rsp+A8h] [rbp+20h] BYREF

  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v6 + 152) == SeDefaultObjectMethod )
  {
    *SecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor((char *)Object - 48);
    *MemoryAllocated = 0;
    if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
      goto LABEL_13;
    return 0;
  }
  v19 = 447;
  Length = ObpDefaultSecurityDescriptorLength;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  *SecurityDescriptor = Pool2;
  if ( !Pool2 )
    return -1073741670;
  *MemoryAllocated = 1;
  v9 = *(__int64 (__fastcall **)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char))(v6 + 152);
  v10 = (UNICODE_STRING *)*SecurityDescriptor;
  v17 = v6 + 76;
  v16 = *(_DWORD *)(v6 + 100);
  v15 = (char *)Object - 8;
  if ( (char *)v9 == (char *)CmpSecurityMethod )
  {
    SetSecurityObject = CmpSecurityMethod((ULONG_PTR *)Object, 1, &v19, v10, &Length, (__int64)v15, v16, v17);
  }
  else if ( v9 == IopGetSetSecurityObject )
  {
    SetSecurityObject = IopGetSetSecurityObject((__int64)Object, 1, &v19, v10, &Length, (int)v15, v16, v17, 0);
  }
  else
  {
    SetSecurityObject = guard_dispatch_icall_no_overrides(Object);
  }
  v12 = SetSecurityObject;
  if ( SetSecurityObject == -1073741789 )
  {
    ExFreePoolWithTag(*SecurityDescriptor, 0);
    v13 = Length;
    *MemoryAllocated = 0;
    ObpDefaultSecurityDescriptorLength = v13;
    v14 = (void *)ExAllocatePool2(0x100uLL);
    *SecurityDescriptor = v14;
    if ( !v14 )
      return -1073741670;
    *MemoryAllocated = 1;
    v12 = guard_dispatch_icall_no_overrides(Object);
  }
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(*SecurityDescriptor, 0);
    *SecurityDescriptor = 0LL;
    *MemoryAllocated = 0;
    return v12;
  }
  else
  {
    if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
LABEL_13:
      KeBugCheckEx(0x189u, (ULONG_PTR)Object - 48, v6, 1uLL, 0LL);
    return v12;
  }
}
