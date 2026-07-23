/*
 * XREFs of ObGetObjectSecurity @ 0x1409A9A80
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x140634470 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  ULONG_PTR v6; // rbp
  signed __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rax
  unsigned int v10; // edx
  void *v11; // rax
  void *Pool2; // rax
  __int64 (__fastcall *v14)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char); // rax
  PSECURITY_DESCRIPTOR v15; // r9
  NTSTATUS SetSecurityObject; // eax
  NTSTATUS v17; // r15d
  ULONG v18; // eax
  ULONG_PTR v19; // rdx
  void *v20; // rax
  char *v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  ULONG Length; // [rsp+90h] [rbp+8h] BYREF
  DWORD v25; // [rsp+A8h] [rbp+20h] BYREF

  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v6 + 152) != SeDefaultObjectMethod )
  {
    v25 = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
    *SecurityDescriptor = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *MemoryAllocated = 1;
    v14 = *(__int64 (__fastcall **)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char))(v6 + 152);
    v15 = *SecurityDescriptor;
    v23 = v6 + 76;
    v22 = *(_DWORD *)(v6 + 100);
    v21 = (char *)Object - 8;
    if ( (char *)v14 == (char *)CmpSecurityMethod )
    {
      SetSecurityObject = CmpSecurityMethod((ULONG_PTR *)Object, 1, &v25, v15, &Length, (__int64)v21, v22, v23);
    }
    else if ( v14 == IopGetSetSecurityObject )
    {
      SetSecurityObject = IopGetSetSecurityObject(
                            (__int64)Object,
                            1,
                            &v25,
                            (__int16 *)v15,
                            &Length,
                            (int)v21,
                            v22,
                            v23,
                            0);
    }
    else
    {
      SetSecurityObject = guard_dispatch_icall_no_overrides(Object, 1LL);
    }
    v17 = SetSecurityObject;
    if ( SetSecurityObject == -1073741789 )
    {
      ExFreePoolWithTag(*SecurityDescriptor, 0);
      v18 = Length;
      v19 = Length;
      *MemoryAllocated = 0;
      ObpDefaultSecurityDescriptorLength = v18;
      v20 = (void *)ExAllocatePool2(0x100uLL, v19, 0x7153624Fu);
      *SecurityDescriptor = v20;
      if ( !v20 )
        return -1073741670;
      *MemoryAllocated = 1;
      v17 = guard_dispatch_icall_no_overrides(Object, 1LL);
    }
    if ( v17 < 0 )
    {
      ExFreePoolWithTag(*SecurityDescriptor, 0);
      *SecurityDescriptor = 0LL;
      *MemoryAllocated = 0;
      return v17;
    }
    else
    {
      if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
        goto LABEL_19;
      return v17;
    }
  }
  _m_prefetchw((char *)Object - 8);
  v7 = *((_QWORD *)Object - 1);
  if ( (v7 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v7 - 1, v7);
      if ( v7 == v8 )
        break;
      v7 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v9 = v7;
  v10 = v7 & 0xF;
  v11 = (void *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v10 <= 1 && v11 )
    v11 = (void *)ObpReferenceSecurityDescriptorSlow((__int64)Object - 48, v10, (unsigned __int64)v11);
  *SecurityDescriptor = v11;
  *MemoryAllocated = 0;
  if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
LABEL_19:
    KeBugCheckEx(0x189u, (ULONG_PTR)Object - 48, v6, 1uLL, 0LL);
  return 0;
}
