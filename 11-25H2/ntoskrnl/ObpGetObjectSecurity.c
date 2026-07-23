/*
 * XREFs of ObpGetObjectSecurity @ 0x1409160F0
 * Callers:
 *     PspCheckJobAccessState @ 0x140767B94 (PspCheckJobAccessState.c)
 *     MiAllowImageMap @ 0x140903D34 (MiAllowImageMap.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB0CB8 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140862984 (ObpReferenceSecurityDescriptorSlow.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGetObjectSecurity(ULONG_PTR *BugCheckParameter2, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v8; // rbp
  signed __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  __int64 (__fastcall *v16)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char); // rax
  UNICODE_STRING *v17; // r9
  int SetSecurityObject; // eax
  int v19; // r12d
  ULONG v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  DWORD v25[4]; // [rsp+50h] [rbp-38h] BYREF
  ULONG Length; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)BugCheckParameter2 - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, unsigned __int64, ULONG *, __int64 *, int, __int64))(v8 + 152) != SeDefaultObjectMethod )
  {
    v25[0] = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *a3 = 1;
    v16 = *(__int64 (__fastcall **)(__int64, int, DWORD *, UNICODE_STRING *, PULONG, int, int, __int64, char))(v8 + 152);
    v17 = (UNICODE_STRING *)*a2;
    v24 = v8 + 76;
    v23 = *(_DWORD *)(v8 + 100);
    v22 = (__int64)(BugCheckParameter2 - 1);
    if ( (char *)v16 == (char *)CmpSecurityMethod )
    {
      SetSecurityObject = CmpSecurityMethod(BugCheckParameter2, 1, v25, v17, &Length, v22, v23, v24);
    }
    else if ( v16 == IopGetSetSecurityObject )
    {
      SetSecurityObject = IopGetSetSecurityObject((__int64)BugCheckParameter2, 1, v25, v17, &Length, v22, v23, v24, a4);
    }
    else
    {
      SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2);
    }
    v19 = SetSecurityObject;
    if ( SetSecurityObject == -1073741789 )
    {
      ExFreePoolWithTag(*a2, 0);
      v20 = Length;
      *a3 = 0;
      ObpDefaultSecurityDescriptorLength = v20;
      v21 = ExAllocatePool2(0x100uLL);
      *a2 = (PVOID)v21;
      if ( !v21 )
        return 3221225626LL;
      *a3 = 1;
      v19 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
    }
    if ( v19 < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
      *a3 = 0;
      return (unsigned int)v19;
    }
    else
    {
      if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
        goto LABEL_19;
      return (unsigned int)v19;
    }
  }
  _m_prefetchw(BugCheckParameter2 - 1);
  v9 = *(BugCheckParameter2 - 1);
  if ( (v9 & 0xF) != 0 )
  {
    do
    {
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2 - 1, v9 - 1, v9);
      if ( v9 == v10 )
        break;
      v9 = v10;
    }
    while ( (v10 & 0xF) != 0 );
  }
  v11 = v9;
  v12 = v9 & 0xF;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v12 <= 1 && v13 )
    v13 = ObpReferenceSecurityDescriptorSlow((__int64)(BugCheckParameter2 - 6), v12, v13);
  *a2 = (PVOID)v13;
  *a3 = 0;
  if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
LABEL_19:
    KeBugCheckEx(0x189u, (ULONG_PTR)(BugCheckParameter2 - 6), v8, 1uLL, 0LL);
  return 0LL;
}
