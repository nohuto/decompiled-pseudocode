/*
 * XREFs of VrpPostEnumerateKey @ 0x1409284D8
 * Callers:
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x14041C2C0 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x140445830 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A66D0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1406A6A50 (ZwEnumerateKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     VrpUpdateKeyInformation @ 0x140928330 (VrpUpdateKeyInformation.c)
 *     VrpUnlockJobContextShared @ 0x140928C08 (VrpUnlockJobContextShared.c)
 *     VrpOutputBufferParameter @ 0x140928C4C (VrpOutputBufferParameter.c)
 *     VrpBuildKeyPath @ 0x140928C80 (VrpBuildKeyPath.c)
 *     VrpFindExactNamespaceNode @ 0x140928D78 (VrpFindExactNamespaceNode.c)
 *     VrpLockJobContextShared @ 0x140929018 (VrpLockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  void *v5; // r14
  KPROCESSOR_MODE PreviousMode; // r8
  void *v7; // r13
  NTSTATUS v8; // edi
  __int64 Pool2; // rcx
  void *v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  void *v13; // rdx
  KPROCESSOR_MODE v14; // r13
  int v15; // eax
  bool v16; // cc
  int v17; // eax
  _WORD *v18; // r14
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 ExactNamespaceNode; // rax
  __int64 *v22; // r12
  int v24; // ecx
  __int64 v25; // rax
  const wchar_t *v26; // rcx
  unsigned __int16 v27; // ax
  _WORD *v28; // rax
  __int64 *v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  void *v32; // rcx
  int *v33; // r14
  NTSTATUS Key; // eax
  __int64 v35; // rcx
  unsigned int *v36; // r13
  int updated; // eax
  int v38; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1E8h]
  PVOID v40; // [rsp+48h] [rbp-1E0h]
  int v42; // [rsp+58h] [rbp-1D0h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-1CCh] BYREF
  NTSTATUS v44; // [rsp+60h] [rbp-1C8h] BYREF
  int v45; // [rsp+64h] [rbp-1C4h] BYREF
  PVOID v46; // [rsp+68h] [rbp-1C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-1B8h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v49; // [rsp+88h] [rbp-1A0h]
  const UNICODE_STRING *v50; // [rsp+90h] [rbp-198h]
  HANDLE KeyHandle; // [rsp+98h] [rbp-190h] BYREF
  PVOID v52; // [rsp+A0h] [rbp-188h]
  PVOID v53; // [rsp+A8h] [rbp-180h]
  PVOID P[2]; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-168h]
  __int64 v56; // [rsp+C8h] [rbp-160h]
  __int64 v57; // [rsp+D0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp-108h] BYREF
  char *v61; // [rsp+130h] [rbp-F8h]
  int v62; // [rsp+138h] [rbp-F0h]
  int v63; // [rsp+13Ch] [rbp-ECh]
  int *v64; // [rsp+140h] [rbp-E8h]
  __int64 v65; // [rsp+148h] [rbp-E0h]
  _DWORD *v66; // [rsp+150h] [rbp-D8h]
  __int64 v67; // [rsp+158h] [rbp-D0h]
  __int64 v68; // [rsp+160h] [rbp-C8h]
  _DWORD v69[2]; // [rsp+168h] [rbp-C0h] BYREF
  _DWORD *v70; // [rsp+170h] [rbp-B8h]
  __int64 v71; // [rsp+178h] [rbp-B0h]
  const wchar_t *v72; // [rsp+180h] [rbp-A8h]
  _DWORD v73[2]; // [rsp+188h] [rbp-A0h] BYREF
  NTSTATUS *v74; // [rsp+190h] [rbp-98h]
  __int64 v75; // [rsp+198h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1A0h] [rbp-88h] BYREF
  NTSTATUS *v77; // [rsp+1C0h] [rbp-68h]
  __int64 v78; // [rsp+1C8h] [rbp-60h]
  _DWORD *v79; // [rsp+1D0h] [rbp-58h]
  __int64 v80; // [rsp+1D8h] [rbp-50h]
  __int64 v81; // [rsp+1E0h] [rbp-48h]
  _DWORD v82[2]; // [rsp+1E8h] [rbp-40h] BYREF

  v49 = a1;
  v57 = a2;
  *(_OWORD *)P = 0LL;
  EventDescriptor = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v53 = 0LL;
  v42 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v50 = (const UNICODE_STRING *)v3;
  v55 = v3;
  Handle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v56 = v4;
  v5 = 0LL;
  v40 = 0LL;
  v52 = 0LL;
  PreviousMode = ExGetPreviousMode();
  AccessMode = PreviousMode;
  ResultLength = 0;
  v7 = 0LL;
  v46 = 0LL;
  v8 = *(_DWORD *)(a1 + 8);
  KeyHandle = 0LL;
  if ( (unsigned int)dword_140E0A5B0 > 5 )
  {
    v44 = *(_DWORD *)(v4 + 12);
    v77 = &v44;
    v78 = 4LL;
    v29 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v29 = &EmptyUnicodeString;
    v30 = *(unsigned __int16 *)v29;
    v31 = v29[1];
    v79 = v82;
    v80 = 2LL;
    v81 = v31;
    v82[0] = v30;
    v82[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5B0,
      (unsigned __int8 *)byte_140058E53,
      &ActivityId,
      0LL,
      5u,
      &v76);
    PreviousMode = AccessMode;
  }
  if ( v8 < 0 && v8 != -1073741789 && v8 != -2147483643 )
    goto LABEL_29;
  Pool2 = 0LL;
  v8 = 0;
  if ( PreviousMode == 1 )
  {
    if ( *(_DWORD *)(v4 + 24) && (Pool2 = ExAllocatePool2(0x100uLL)) == 0 )
    {
      v8 = -1073741670;
      v10 = 0LL;
    }
    else
    {
      v10 = (void *)Pool2;
      v40 = (PVOID)Pool2;
    }
  }
  else
  {
    v10 = *(void **)(v4 + 16);
    v40 = v10;
  }
  if ( v8 < 0 )
    goto LABEL_28;
  LOBYTE(Pool2) = AccessMode;
  v8 = VrpOutputBufferParameter(Pool2, v10, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v8 < 0 )
    goto LABEL_28;
  v12 = *(void **)(v4 + 32);
  v8 = 0;
  if ( AccessMode == 1 && (v12 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
  {
    v8 = -1073741670;
  }
  else
  {
    v46 = v12;
    v7 = v12;
  }
  if ( v8 < 0 )
    goto LABEL_28;
  v13 = v7;
  v14 = AccessMode;
  LOBYTE(v11) = AccessMode;
  v8 = VrpOutputBufferParameter(v11, v13, 4LL, v4 + 32);
  if ( v8 < 0 )
    goto LABEL_56;
  if ( AccessMode != 1 || *(int *)(v49 + 8) < 0 )
    goto LABEL_19;
  v15 = *(_DWORD *)(v4 + 12);
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_19;
    v5 = v40;
    v16 = *((_DWORD *)v40 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
  }
  else
  {
    v5 = v40;
    v16 = *((_DWORD *)v40 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
  }
  if ( !v16 )
  {
LABEL_30:
    v22 = &EmptyUnicodeString;
    goto LABEL_31;
  }
LABEL_19:
  v17 = *(_DWORD *)(v49 + 8);
  if ( v17 != -1073741789 && v17 != -2147483643 && *(_DWORD *)(v4 + 12) != 2 )
  {
    v18 = v40;
    goto LABEL_23;
  }
  v8 = ObOpenObjectByPointer(*(PVOID *)v4, 0x240u, 0LL, 0xF003Fu, (POBJECT_TYPE)CmKeyObjectType, AccessMode, &Handle);
  if ( v8 < 0 )
  {
LABEL_56:
    v5 = v40;
    goto LABEL_30;
  }
  v8 = ZwEnumerateKey(Handle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 )
    goto LABEL_28;
  v28 = (_WORD *)ExAllocatePool2(0x100uLL);
  v18 = v28;
  if ( !v28 )
    goto LABEL_79;
  v53 = v28;
  v8 = ZwEnumerateKey(Handle, *(_DWORD *)(v4 + 8), KeyBasicInformation, v28, ResultLength, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_28;
LABEL_23:
  v19 = *(_DWORD *)(v4 + 12);
  if ( !v19 || v53 )
  {
    *(_WORD *)&EventDescriptor.Version = v18[6];
    EventDescriptor.Id = *(_WORD *)&EventDescriptor.Version;
    v20 = (unsigned __int64)(v18 + 8);
  }
  else
  {
    if ( v19 != 1 )
    {
      v8 = -1073741811;
      goto LABEL_28;
    }
    *(_WORD *)&EventDescriptor.Version = v18[10];
    EventDescriptor.Id = *(_WORD *)&EventDescriptor.Version;
    v20 = (unsigned __int64)(v18 + 12);
  }
  EventDescriptor.Keyword = v20;
  v8 = VrpBuildKeyPath(v50 + 1, (PCUNICODE_STRING)&EventDescriptor, (PUNICODE_STRING)P);
  if ( v8 < 0 )
  {
LABEL_28:
    v5 = v40;
LABEL_29:
    v14 = AccessMode;
    goto LABEL_30;
  }
  VrpLockJobContextShared(a2);
  v42 = 1;
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
  v42 = 0;
  if ( *(_DWORD *)(v4 + 24) )
  {
    v32 = (void *)ExAllocatePool2(0x100uLL);
    v52 = v32;
    if ( !v32 )
    {
LABEL_79:
      v8 = -1073741670;
      goto LABEL_28;
    }
  }
  else
  {
    v32 = 0LL;
  }
  v33 = (int *)v32;
  Key = ZwQueryKey(KeyHandle, *(KEY_INFORMATION_CLASS *)(v4 + 12), v32, *(_DWORD *)(v4 + 24), (PULONG)v46);
  v8 = Key;
  if ( Key == -1073741789 )
  {
    v33 = 0LL;
    goto LABEL_90;
  }
  if ( ((Key + 0x80000000) & 0x80000000) == 0 && Key != -2147483643 )
  {
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
LABEL_90:
  v35 = *(unsigned int *)(v4 + 12);
  v36 = (unsigned int *)v46;
  if ( (_DWORD)v35 != 2 )
  {
    updated = VrpUpdateKeyInformation(v35, v33, *(_DWORD *)(v4 + 24), (unsigned int *)v46, (__m128i *)P, 0);
    v8 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_28;
  }
  if ( v8 != -2147483643 && v8 != -1073741789 )
    memmove(*(void **)(v4 + 16), v33, *v36);
  v14 = AccessMode;
  LOBYTE(v35) = AccessMode;
  v38 = VrpOutputBufferParameter(v35, *(_QWORD *)(v4 + 32), 4LL, &v46);
  v5 = v40;
  v22 = &EmptyUnicodeString;
  if ( v38 >= 0 )
  {
    *(_DWORD *)(v49 + 24) = v8;
    v8 = -1073740541;
  }
  else
  {
    v8 = v38;
  }
LABEL_31:
  if ( v42 )
    VrpUnlockJobContextShared(a2);
  if ( v8 < 0 && (unsigned int)dword_140E0A5B0 > 2 )
  {
    v45 = *(_DWORD *)(v4 + 12);
    v64 = &v45;
    v65 = 4LL;
    if ( v50[1].Buffer )
      v22 = (__int64 *)&v50[1];
    v24 = *(unsigned __int16 *)v22;
    v25 = v22[1];
    v66 = v69;
    v67 = 2LL;
    v68 = v25;
    v69[0] = v24;
    v69[1] = 0;
    v26 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v27 = (unsigned __int16)P[0];
    }
    else
    {
      v27 = 0;
      v26 = &cchOriginalDestLength;
    }
    v70 = v73;
    v71 = 2LL;
    v72 = v26;
    v73[0] = v27;
    v73[1] = 0;
    v44 = v8;
    v74 = &v44;
    v75 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 2;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E0A5B8;
    UserData.Size = (unsigned __int16)*off_140E0A5B8;
    UserData.Reserved = 2;
    v61 = &byte_140058D77;
    v62 = 116;
    v63 = 1;
    EtwWriteTransfer(qword_140E0A5D0, &EventDescriptor, &ActivityId, 0LL, 8u, &UserData);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v52 )
    ExFreePoolWithTag(v52, 0x67655256u);
  if ( v53 )
    ExFreePoolWithTag(v53, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v14 == 1 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0x67655256u);
    if ( v46 )
      ExFreePoolWithTag(v46, 0x67655256u);
  }
  return (unsigned int)v8;
}
