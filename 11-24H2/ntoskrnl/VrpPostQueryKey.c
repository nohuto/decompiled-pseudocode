/*
 * XREFs of VrpPostQueryKey @ 0x14092A060
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x14043D9E0 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VrpUpdateKeyInformation @ 0x14092A470 (VrpUpdateKeyInformation.c)
 *     VrpOutputBufferParameter @ 0x14092AD8C (VrpOutputBufferParameter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostQueryKey(__int64 a1)
{
  __int64 v2; // r12
  void *v3; // rsi
  __int64 v4; // r13
  KPROCESSOR_MODE PreviousMode; // al
  int v6; // ebx
  void *v7; // rdi
  unsigned __int8 v8; // r15
  unsigned int v9; // eax
  __int64 *v10; // rcx
  int v11; // edx
  int v13; // eax
  __int64 v14; // rdx
  __int64 Pool2; // rax
  _DWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // rax
  unsigned int v21; // ecx
  __int64 *v22; // rax
  unsigned int v23; // ecx
  int v24; // [rsp+30h] [rbp-79h] BYREF
  int updated; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-71h] BYREF
  void *v27; // [rsp+40h] [rbp-69h] BYREF
  void *v28; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  int *v32; // [rsp+80h] [rbp-29h]
  int v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v35; // [rsp+90h] [rbp-19h]
  __int64 v36; // [rsp+98h] [rbp-11h]
  _QWORD *v37; // [rsp+A0h] [rbp-9h]
  __int64 v38; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int *v39; // [rsp+B0h] [rbp+7h]
  _QWORD v40[3]; // [rsp+B8h] [rbp+Fh] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  PreviousMode = ExGetPreviousMode();
  v6 = *(_DWORD *)(a1 + 8);
  v7 = 0LL;
  v8 = PreviousMode;
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_31;
  v9 = *(_DWORD *)(v4 + 8);
  v10 = &EmptyUnicodeString;
  if ( v9 > 8 )
    goto LABEL_4;
  v11 = 283;
  if ( !_bittest(&v11, v9) )
    goto LABEL_4;
  if ( (unsigned int)dword_140E0A620 > 5 )
  {
    v24 = *(_DWORD *)(v4 + 8);
    v35 = (__int64 *)&v24;
    v22 = (__int64 *)(v2 + 16);
    v36 = 4LL;
    if ( !*(_QWORD *)(v2 + 24) )
      v22 = &EmptyUnicodeString;
    v23 = *(unsigned __int16 *)v22;
    v39 = (unsigned int *)v22[1];
    v37 = v40;
    v40[0] = v23;
    v38 = 2LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)byte_140059B48,
      &ActivityId,
      0LL,
      5u,
      &UserData);
    v10 = &EmptyUnicodeString;
  }
  if ( (*(_DWORD *)(v2 + 36) & 0x20000000) == 0 )
  {
    v13 = *(_DWORD *)(v4 + 8);
    if ( v13 != 3 && v13 != 8 )
    {
LABEL_4:
      if ( v6 >= 0 )
        goto LABEL_5;
LABEL_32:
      if ( v6 == -1073740541 )
        goto LABEL_5;
      goto LABEL_33;
    }
  }
  v14 = v4 + 16;
  Pool2 = 0LL;
  v16 = (_DWORD *)(v4 + 24);
  if ( v8 == 1 )
  {
    if ( *v16 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)*v16, 0x67655256u);
      if ( !Pool2 )
      {
        v6 = -1073741670;
        v10 = &EmptyUnicodeString;
        goto LABEL_33;
      }
      v14 = v4 + 16;
    }
    v3 = (void *)Pool2;
  }
  else
  {
    v3 = *(void **)(v4 + 16);
  }
  v17 = (unsigned int)*v16;
  v27 = v3;
  v6 = VrpOutputBufferParameter(v8, v3, v17, v14);
  if ( v6 < 0 )
  {
LABEL_31:
    v10 = &EmptyUnicodeString;
    goto LABEL_32;
  }
  v18 = *(_QWORD *)(v4 + 32);
  if ( v8 == 1 )
  {
    v18 = ExAllocatePool2(0x100uLL, 4uLL, 0x67655256u);
    if ( !v18 )
    {
      v6 = -1073741670;
      v10 = &EmptyUnicodeString;
LABEL_33:
      if ( (unsigned int)dword_140E0A620 > 2 )
      {
        if ( *(_QWORD *)(v2 + 24) )
          v10 = (__int64 *)(v2 + 16);
        v36 = 2LL;
        v35 = &v38;
        v37 = (_QWORD *)v10[1];
        v38 = *(unsigned __int16 *)v10;
        v39 = &v26;
        v26 = v6;
        v40[0] = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E0A620,
          (unsigned __int8 *)&dword_140059764,
          &ActivityId,
          0LL,
          5u,
          &UserData);
      }
      goto LABEL_5;
    }
  }
  v28 = (void *)v18;
  v7 = (void *)v18;
  v6 = VrpOutputBufferParameter(v8, v18, 4LL, v4 + 32);
  if ( v6 < 0 )
    goto LABEL_31;
  updated = VrpUpdateKeyInformation(
              *(_DWORD *)(v4 + 8),
              (_DWORD)v3,
              *(_DWORD *)(v4 + 24),
              (_DWORD)v7,
              v2 + 16,
              *(_DWORD *)(v2 + 36));
  v6 = updated;
  if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
    goto LABEL_31;
  v19 = VrpOutputBufferParameter(v8, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v27);
  if ( v19 < 0 || (v19 = VrpOutputBufferParameter(v8, *(_QWORD *)(v4 + 32), 4LL, &v28), v19 < 0) )
  {
    v6 = v19;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 24) = v6;
  v6 = -1073740541;
  if ( (unsigned int)dword_140E0A620 > 5 )
  {
    v20 = (__int64 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v20 = &EmptyUnicodeString;
    v21 = *(unsigned __int16 *)v20;
    v37 = (_QWORD *)v20[1];
    v24 = *(_DWORD *)(v4 + 8);
    v39 = (unsigned int *)&v24;
    v40[1] = &updated;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E0A628;
    v38 = v21;
    v35 = &v38;
    v36 = 2LL;
    v40[0] = 4LL;
    v40[2] = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_140E0A628;
    v32 = &dword_14005982C;
    UserData.Reserved = 2;
    v33 = 83;
    v34 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E0A640, &EventDescriptor, &ActivityId, 0LL, 6u, &UserData);
    v3 = v27;
    v7 = v28;
  }
LABEL_5:
  if ( v8 == 1 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0x67655256u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x67655256u);
  }
  return (unsigned int)v6;
}
