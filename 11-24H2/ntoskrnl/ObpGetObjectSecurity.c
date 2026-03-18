/*
 * XREFs of ObpGetObjectSecurity @ 0x140853850
 * Callers:
 *     PspCheckJobAccessState @ 0x140777614 (PspCheckJobAccessState.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x140867E80 (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     MiAllowImageMap @ 0x1408694B4 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     PopBootStatAccessCheck @ 0x140AA80F4 (PopBootStatAccessCheck.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB5B80 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087AEFC (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGetObjectSecurity(ULONG_PTR *BugCheckParameter2, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v8; // rbp
  signed __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 (__usercall *v16)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char); // rax
  PVOID v17; // r9
  int SetSecurityObject; // eax
  int v19; // r12d
  ULONG v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  ULONG v25[4]; // [rsp+50h] [rbp-38h] BYREF
  ULONG Length; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)BugCheckParameter2 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v8 + 152) != &SeDefaultObjectMethod )
  {
    v25[0] = 447;
    Length = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *a3 = 1;
    v16 = *(__int64 (__usercall **)@<rax>(ULONG_PTR@<rcx>, PULONG, int, int, __int64, char))(v8 + 152);
    v17 = *a2;
    v24 = v8 + 76;
    v23 = *(_DWORD *)(v8 + 100);
    v22 = (__int64)(BugCheckParameter2 - 1);
    if ( (char *)v16 == (char *)CmpSecurityMethod )
    {
      SetSecurityObject = CmpSecurityMethod(BugCheckParameter2, 1, v25, v17, &Length, v22, v23, v24);
    }
    else if ( v16 == IopGetSetSecurityObject )
    {
      SetSecurityObject = IopGetSetSecurityObject((ULONG_PTR)BugCheckParameter2, &Length, v22, v23, v24, a4);
    }
    else
    {
      SetSecurityObject = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL, v25, v17);
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
      v19 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 1LL, v25, *a2);
    }
    if ( v19 < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
      result = (unsigned int)v19;
      *a3 = 0;
    }
    else
    {
      if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
        goto LABEL_19;
      return (unsigned int)v19;
    }
    return result;
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
  if ( (unsigned int)v12 <= 1 && v13 )
    v13 = ObpReferenceSecurityDescriptorSlow(BugCheckParameter2 - 6, v12, v13);
  *a2 = (PVOID)v13;
  *a3 = 0;
  if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*((_BYTE *)BugCheckParameter2 - 22) & 2) != 0) )
LABEL_19:
    KeBugCheckEx(0x189u, (ULONG_PTR)(BugCheckParameter2 - 6), v8, 1uLL, 0LL);
  return 0LL;
}
