/*
 * XREFs of VrpPostEnumerateKey @ 0x14092A618
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x14043D9E0 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     VrpUpdateKeyInformation @ 0x14092A470 (VrpUpdateKeyInformation.c)
 *     VrpUnlockJobContextShared @ 0x14092AD48 (VrpUnlockJobContextShared.c)
 *     VrpOutputBufferParameter @ 0x14092AD8C (VrpOutputBufferParameter.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     VrpFindExactNamespaceNode @ 0x14092AEB8 (VrpFindExactNamespaceNode.c)
 *     VrpLockJobContextShared @ 0x14092B158 (VrpLockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  void *v5; // r14
  KPROCESSOR_MODE PreviousMode; // r8
  void *v7; // r13
  NTSTATUS v8; // edi
  unsigned int v9; // eax
  __int64 Pool2; // rcx
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  void *v14; // rdx
  KPROCESSOR_MODE v15; // r13
  int v16; // eax
  bool v17; // cc
  int v18; // eax
  _WORD *v19; // r14
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 ExactNamespaceNode; // rax
  __int64 *v23; // r12
  int v25; // ecx
  __int64 v26; // rax
  const wchar_t *v27; // rcx
  unsigned __int16 v28; // ax
  _WORD *v29; // rax
  __int64 *v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  unsigned int v33; // eax
  void *v34; // rcx
  int *v35; // r14
  NTSTATUS Key; // eax
  __int64 v37; // rcx
  unsigned int *v38; // r13
  int updated; // eax
  int v40; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1E8h]
  PVOID v42; // [rsp+48h] [rbp-1E0h]
  int v44; // [rsp+58h] [rbp-1D0h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-1CCh] BYREF
  NTSTATUS v46; // [rsp+60h] [rbp-1C8h] BYREF
  int v47; // [rsp+64h] [rbp-1C4h] BYREF
  PVOID v48; // [rsp+68h] [rbp-1C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-1B8h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+88h] [rbp-1A0h]
  const UNICODE_STRING *v52; // [rsp+90h] [rbp-198h]
  HANDLE KeyHandle; // [rsp+98h] [rbp-190h] BYREF
  PVOID v54; // [rsp+A0h] [rbp-188h]
  PVOID v55; // [rsp+A8h] [rbp-180h]
  PVOID P[2]; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-168h]
  __int64 v58; // [rsp+C8h] [rbp-160h]
  __int64 v59; // [rsp+D0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp-108h] BYREF
  char *v63; // [rsp+130h] [rbp-F8h]
  int v64; // [rsp+138h] [rbp-F0h]
  int v65; // [rsp+13Ch] [rbp-ECh]
  int *v66; // [rsp+140h] [rbp-E8h]
  __int64 v67; // [rsp+148h] [rbp-E0h]
  _DWORD *v68; // [rsp+150h] [rbp-D8h]
  __int64 v69; // [rsp+158h] [rbp-D0h]
  __int64 v70; // [rsp+160h] [rbp-C8h]
  _DWORD v71[2]; // [rsp+168h] [rbp-C0h] BYREF
  _DWORD *v72; // [rsp+170h] [rbp-B8h]
  __int64 v73; // [rsp+178h] [rbp-B0h]
  const wchar_t *v74; // [rsp+180h] [rbp-A8h]
  _DWORD v75[2]; // [rsp+188h] [rbp-A0h] BYREF
  NTSTATUS *v76; // [rsp+190h] [rbp-98h]
  __int64 v77; // [rsp+198h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1A0h] [rbp-88h] BYREF
  NTSTATUS *v79; // [rsp+1C0h] [rbp-68h]
  __int64 v80; // [rsp+1C8h] [rbp-60h]
  _DWORD *v81; // [rsp+1D0h] [rbp-58h]
  __int64 v82; // [rsp+1D8h] [rbp-50h]
  __int64 v83; // [rsp+1E0h] [rbp-48h]
  _DWORD v84[2]; // [rsp+1E8h] [rbp-40h] BYREF

  v51 = a1;
  v59 = a2;
  *(_OWORD *)P = 0LL;
  EventDescriptor = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v55 = 0LL;
  v44 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v52 = (const UNICODE_STRING *)v3;
  v57 = v3;
  Handle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v58 = v4;
  v5 = 0LL;
  v42 = 0LL;
  v54 = 0LL;
  PreviousMode = ExGetPreviousMode();
  AccessMode = PreviousMode;
  ResultLength = 0;
  v7 = 0LL;
  v48 = 0LL;
  v8 = *(_DWORD *)(a1 + 8);
  KeyHandle = 0LL;
  if ( (unsigned int)dword_140E0A620 > 5 )
  {
    v46 = *(_DWORD *)(v4 + 12);
    v79 = &v46;
    v80 = 4LL;
    v30 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v30 = &EmptyUnicodeString;
    v31 = *(unsigned __int16 *)v30;
    v32 = v30[1];
    v81 = v84;
    v82 = 2LL;
    v83 = v32;
    v84[0] = v31;
    v84[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)byte_140059965,
      &ActivityId,
      0LL,
      5u,
      &v78);
    PreviousMode = AccessMode;
  }
  if ( v8 < 0 && v8 != -1073741789 && v8 != -2147483643 )
    goto LABEL_29;
  v9 = *(_DWORD *)(v4 + 24);
  Pool2 = 0LL;
  v8 = 0;
  if ( PreviousMode == 1 )
  {
    if ( v9 && (Pool2 = ExAllocatePool2(0x100uLL, v9, 0x67655256u)) == 0 )
    {
      v8 = -1073741670;
      v11 = 0LL;
    }
    else
    {
      v11 = (void *)Pool2;
      v42 = (PVOID)Pool2;
    }
  }
  else
  {
    v11 = *(void **)(v4 + 16);
    v42 = v11;
  }
  if ( v8 < 0 )
    goto LABEL_28;
  LOBYTE(Pool2) = AccessMode;
  v8 = VrpOutputBufferParameter(Pool2, v11, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v8 < 0 )
    goto LABEL_28;
  v13 = *(void **)(v4 + 32);
  v8 = 0;
  if ( AccessMode == 1 && (v13 = (void *)ExAllocatePool2(0x100uLL, 4uLL, 0x67655256u)) == 0LL )
  {
    v8 = -1073741670;
  }
  else
  {
    v48 = v13;
    v7 = v13;
  }
  if ( v8 < 0 )
    goto LABEL_28;
  v14 = v7;
  v15 = AccessMode;
  LOBYTE(v12) = AccessMode;
  v8 = VrpOutputBufferParameter(v12, v14, 4LL, v4 + 32);
  if ( v8 < 0 )
    goto LABEL_56;
  if ( AccessMode != 1 || *(int *)(v51 + 8) < 0 )
    goto LABEL_19;
  v16 = *(_DWORD *)(v4 + 12);
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_19;
    v5 = v42;
    v17 = *((_DWORD *)v42 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
  }
  else
  {
    v5 = v42;
    v17 = *((_DWORD *)v42 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
  }
  if ( !v17 )
  {
LABEL_30:
    v23 = &EmptyUnicodeString;
    goto LABEL_31;
  }
LABEL_19:
  v18 = *(_DWORD *)(v51 + 8);
  if ( v18 != -1073741789 && v18 != -2147483643 && *(_DWORD *)(v4 + 12) != 2 )
  {
    v19 = v42;
    goto LABEL_23;
  }
  v8 = ObOpenObjectByPointer(*(PVOID *)v4, 0x240u, 0LL, 0xF003Fu, (POBJECT_TYPE)CmKeyObjectType, AccessMode, &Handle);
  if ( v8 < 0 )
  {
LABEL_56:
    v5 = v42;
    goto LABEL_30;
  }
  v8 = ZwEnumerateKey(Handle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 )
    goto LABEL_28;
  v29 = (_WORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x67655256u);
  v19 = v29;
  if ( !v29 )
    goto LABEL_79;
  v55 = v29;
  v8 = ZwEnumerateKey(Handle, *(_DWORD *)(v4 + 8), KeyBasicInformation, v29, ResultLength, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_28;
LABEL_23:
  v20 = *(_DWORD *)(v4 + 12);
  if ( !v20 || v55 )
  {
    *(_WORD *)&EventDescriptor.Version = v19[6];
    EventDescriptor.Id = *(_WORD *)&EventDescriptor.Version;
    v21 = (unsigned __int64)(v19 + 8);
  }
  else
  {
    if ( v20 != 1 )
    {
      v8 = -1073741811;
      goto LABEL_28;
    }
    *(_WORD *)&EventDescriptor.Version = v19[10];
    EventDescriptor.Id = *(_WORD *)&EventDescriptor.Version;
    v21 = (unsigned __int64)(v19 + 12);
  }
  EventDescriptor.Keyword = v21;
  v8 = VrpBuildKeyPath(v52 + 1, (PCUNICODE_STRING)&EventDescriptor, (PUNICODE_STRING)P);
  if ( v8 < 0 )
  {
LABEL_28:
    v5 = v42;
LABEL_29:
    v15 = AccessMode;
    goto LABEL_30;
  }
  VrpLockJobContextShared(a2);
  v44 = 1;
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, P, 0LL);
  if ( !ExactNamespaceNode )
    goto LABEL_27;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) < 0 )
    goto LABEL_27;
  VrpUnlockJobContextShared(a2);
  v44 = 0;
  v33 = *(_DWORD *)(v4 + 24);
  if ( v33 )
  {
    v34 = (void *)ExAllocatePool2(0x100uLL, v33, 0x67655256u);
    v54 = v34;
    if ( !v34 )
    {
LABEL_79:
      v8 = -1073741670;
      goto LABEL_28;
    }
  }
  else
  {
    v34 = 0LL;
  }
  v35 = (int *)v34;
  Key = ZwQueryKey(KeyHandle, *(KEY_INFORMATION_CLASS *)(v4 + 12), v34, *(_DWORD *)(v4 + 24), (PULONG)v48);
  v8 = Key;
  if ( Key == -1073741789 )
  {
    v35 = 0LL;
    goto LABEL_90;
  }
  if ( ((Key + 0x80000000) & 0x80000000) == 0 && Key != -2147483643 )
  {
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
LABEL_90:
  v37 = *(unsigned int *)(v4 + 12);
  v38 = (unsigned int *)v48;
  if ( (_DWORD)v37 != 2 )
  {
    updated = VrpUpdateKeyInformation(v37, v35, *(_DWORD *)(v4 + 24), (unsigned int *)v48, (__m128i *)P, 0);
    v8 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_28;
  }
  if ( v8 != -2147483643 && v8 != -1073741789 )
    memmove(*(void **)(v4 + 16), v35, *v38);
  v15 = AccessMode;
  LOBYTE(v37) = AccessMode;
  v40 = VrpOutputBufferParameter(v37, *(_QWORD *)(v4 + 32), 4LL, &v48);
  v5 = v42;
  v23 = &EmptyUnicodeString;
  if ( v40 >= 0 )
  {
    *(_DWORD *)(v51 + 24) = v8;
    v8 = -1073740541;
  }
  else
  {
    v8 = v40;
  }
LABEL_31:
  if ( v44 )
    VrpUnlockJobContextShared(a2);
  if ( v8 < 0 && (unsigned int)dword_140E0A620 > 2 )
  {
    v47 = *(_DWORD *)(v4 + 12);
    v66 = &v47;
    v67 = 4LL;
    if ( v52[1].Buffer )
      v23 = (__int64 *)&v52[1];
    v25 = *(unsigned __int16 *)v23;
    v26 = v23[1];
    v68 = v71;
    v69 = 2LL;
    v70 = v26;
    v71[0] = v25;
    v71[1] = 0;
    v27 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v28 = (unsigned __int16)P[0];
    }
    else
    {
      v28 = 0;
      v27 = &cchOriginalDestLength;
    }
    v72 = v75;
    v73 = 2LL;
    v74 = v27;
    v75[0] = v28;
    v75[1] = 0;
    v46 = v8;
    v76 = &v46;
    v77 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 2;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E0A628;
    UserData.Size = *(unsigned __int16 *)off_140E0A628;
    UserData.Reserved = 2;
    v63 = &byte_140059A27;
    v64 = 116;
    v65 = 1;
    EtwWriteTransfer(qword_140E0A640, &EventDescriptor, &ActivityId, 0LL, 8u, &UserData);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v54 )
    ExFreePoolWithTag(v54, 0x67655256u);
  if ( v55 )
    ExFreePoolWithTag(v55, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v15 == 1 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0x67655256u);
    if ( v48 )
      ExFreePoolWithTag(v48, 0x67655256u);
  }
  return (unsigned int)v8;
}
