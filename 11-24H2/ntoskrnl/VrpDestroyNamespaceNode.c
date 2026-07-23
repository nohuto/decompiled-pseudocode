/*
 * XREFs of VrpDestroyNamespaceNode @ 0x14092B1C0
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     VrpDestroyNamespaceNodeList @ 0x14092B320 (VrpDestroyNamespaceNodeList.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VrpFindExactNamespaceNode @ 0x14092AEB8 (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(size_t *a1, __int64 a2)
{
  unsigned int v2; // r12d
  ULONGLONG v5; // rsi
  ULONGLONG v6; // rcx
  unsigned __int64 v7; // r9
  ULONGLONG v8; // rax
  unsigned __int64 v9; // r8
  char *v10; // r14
  int v11; // eax
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  size_t v17; // rsi
  unsigned __int64 v18; // kr00_8
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  ULONGLONG v21; // rdx
  ULONGLONG v22; // rcx
  ULONGLONG v23; // r15
  size_t v24; // r14
  void *v25; // r13
  PVOID PoolWithTag; // rax
  void *v27; // rsi
  size_t v28; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+50h] BYREF

  NumberOfBytes = 0LL;
  v2 = 0;
  if ( VrpFindExactNamespaceNode((int)a1, a2, (int)&NumberOfBytes) != a2 )
    goto LABEL_5;
  v5 = a1[6];
  v2 = 1;
  v6 = NumberOfBytes;
  if ( NumberOfBytes >= v5 )
    goto LABEL_5;
  v7 = a1[5];
  v8 = v7 * NumberOfBytes;
  NumberOfBytes = 0LL;
  if ( !is_mul_ok(v7, v6) )
    goto LABEL_5;
  v9 = a1[9];
  v10 = (char *)(v9 + v8);
  if ( v9 + v8 < v9 )
    goto LABEL_5;
  v17 = v5 - v6 - 1;
  if ( v17 )
  {
    NumberOfBytes = 0LL;
    v18 = v17;
    v17 *= v7;
    if ( !is_mul_ok(v18, v7) )
      goto LABEL_5;
    NumberOfBytes = 0LL;
    v19 = v7 * (v6 + 1);
    if ( !is_mul_ok(v7, v6 + 1) || v9 + v19 < v9 )
      goto LABEL_5;
    memmove(v10, (const void *)(v9 + v19), v17);
  }
  memset_0(&v10[v17], 0, a1[5]);
  v20 = a1[6] - 1;
  a1[6] = v20;
  if ( v20 <= 0x10 )
    goto LABEL_5;
  v21 = a1[5];
  v22 = a1[7];
  if ( v22 * v21 < 0x400 )
    goto LABEL_5;
  if ( v20 >= v22 >> 2 )
    goto LABEL_5;
  pullResult = 0LL;
  v23 = v22 >> 1;
  NumberOfBytes = 0LL;
  if ( ULongLongMult(v22, v21, &pullResult) < 0 || ULongLongMult(v23, a1[5], &NumberOfBytes) < 0 )
    goto LABEL_5;
  v24 = NumberOfBytes;
  v25 = (void *)a1[9];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
  v27 = PoolWithTag;
  if ( v25 )
  {
    if ( !PoolWithTag )
      goto LABEL_5;
    memset_0(PoolWithTag, 0, v24);
    v28 = pullResult;
    if ( pullResult >= v24 )
      v28 = v24;
    memmove(v27, v25, v28);
    ExFreePoolWithTag(v25, 0x72615452u);
    goto LABEL_34;
  }
  if ( PoolWithTag )
    memset_0(PoolWithTag, 0, v24);
  if ( v27 )
  {
LABEL_34:
    a1[9] = (size_t)v27;
    a1[7] = v23;
  }
LABEL_5:
  v11 = *(_DWORD *)(a2 + 56);
  if ( (v11 & 0x40000000) != 0 && v11 < 0 )
  {
    NumberOfBytes = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 40);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&NumberOfBytes, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey((HANDLE)NumberOfBytes);
      ZwClose((HANDLE)NumberOfBytes);
    }
  }
  v12 = *(void **)(a2 + 16);
  if ( v12 )
    ObDereferenceObjectDeferDeleteWithTag(v12, 0x67655256u);
  v13 = *(void **)(a2 + 8);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x67655256u);
  v14 = *(void **)(a2 + 32);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x67655256u);
  v15 = *(void **)(a2 + 48);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v2;
}
