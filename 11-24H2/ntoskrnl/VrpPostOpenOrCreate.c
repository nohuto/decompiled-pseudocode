/*
 * XREFs of VrpPostOpenOrCreate @ 0x140AE85D0
 * Callers:
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     VrpBuildKeyPath @ 0x140928C80 (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x140929F20 (VrpCountPathComponents.c)
 *     CmSetCallbackObjectContext @ 0x14098AF60 (CmSetCallbackObjectContext.c)
 *     CmpFindExtraParameterInBlock @ 0x1409DF500 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1409E41A0 (CmpFreeExtraParameter.c)
 *     CmRetrieveExtraParameter @ 0x1409F6D24 (CmRetrieveExtraParameter.c)
 *     VrpFreeKeyContext @ 0x1409F6FD8 (VrpFreeKeyContext.c)
 *     VrpAllocateKeyContext @ 0x1409FE79C (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x1409FF6D0 (VrpFreeCallbackContext.c)
 *     CmAllocateExtraParameter @ 0x140A23404 (CmAllocateExtraParameter.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  UNICODE_STRING *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  NTSTATUS v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rax
  UNICODE_STRING *ExtraParameter; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int ExtraParameterInBlock; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r11
  _QWORD *v24; // rax
  const UNICODE_STRING *v25; // r14
  UNICODE_STRING *KeyContext; // rax
  int Buffer; // eax
  UNICODE_STRING *v28; // rax
  __int64 *v29; // rcx
  int v30; // edx
  void *v31; // rcx
  __int64 v32; // rsi
  int v33; // eax
  void *v34; // rcx
  __int64 *v35; // rcx
  int v36; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v39; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v42; // [rsp+70h] [rbp-19h]
  __int64 v43; // [rsp+78h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-9h]
  int v45; // [rsp+88h] [rbp-1h] BYREF
  int v46; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  __int64 v48; // [rsp+98h] [rbp+Fh]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  OldContext = 0LL;
  v7 = 0LL;
  v8 = a1[1];
  v39 = v5;
  v9 = *(_QWORD *)(v5 + 32);
  v10 = *(_QWORD *)(v5 + 16);
  if ( *(int *)(v5 + 8) < 0 )
    goto LABEL_2;
  CmRetrieveExtraParameter(*(_QWORD **)(v8 + 16), v4, &OldContext);
  if ( (_DWORD)v13 == 260 )
  {
    if ( !OldContext )
    {
LABEL_2:
      v11 = 0;
      goto LABEL_37;
    }
    v14 = (char *)OldContext - 48;
    v15 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v14 + 8LL) == v14 )
    {
      v16 = (__int64 *)v14[1];
      if ( (_QWORD *)*v16 == v14 )
      {
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *v14 = 0LL;
        v14[1] = 0LL;
        CmpFreeExtraParameter(v14, v15, v12, v13);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( (_DWORD)v13 == 872 )
  {
    if ( OldContext )
      goto LABEL_2;
    if ( !v9 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter();
    v7 = ExtraParameter;
    if ( ExtraParameter )
    {
      v11 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v9 + 48), ExtraParameter + 1);
      if ( v11 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x67655256u);
        *(_QWORD *)&v7->Length = *(_QWORD *)(v9 + 8);
        LODWORD(v7->Buffer) = *(_DWORD *)(v9 + 64);
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD **)(v8 + 16), &v7[-2].Length, &OldContext);
        v11 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v24 = *(_QWORD **)(v22 + 8);
            if ( *v24 == v22 )
            {
              *v23 = v22;
              v11 = 0;
              v23[1] = v24;
              *v24 = v23;
              *(_QWORD *)(v22 + 8) = v23;
LABEL_38:
              v31 = *(void **)(v10 + 8);
              if ( v31 )
                ObfDereferenceObject(v31);
              v32 = v39;
              *(_QWORD *)(v10 + 8) = *(_QWORD *)v9;
              *(_QWORD *)v9 = 0LL;
              v33 = *(_DWORD *)(v32 + 8);
              if ( v33 == 260 || v33 == 872 )
              {
                if ( (unsigned int)dword_140E0A5B0 > 5 )
                {
                  v35 = &EmptyUnicodeString;
                  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
                    v35 = *(__int64 **)v10;
                  v36 = *(unsigned __int16 *)v35;
                  v44 = v35[1];
                  p_OldContext = &OldContext;
                  v42 = &v45;
                  v45 = v36;
                  v43 = 2LL;
                  v46 = 0;
                  LODWORD(OldContext) = v11;
                  v48 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E0A5B0,
                    (unsigned __int8 *)word_140058CEA,
                    &ActivityId,
                    0LL,
                    5u,
                    v41);
                }
              }
              else
              {
                v34 = *(void **)(*(_QWORD *)v10 + 8LL);
                if ( v34 )
                  ExFreePoolWithTag(v34, 0);
                *(_OWORD *)*(_QWORD *)v10 = *(_OWORD *)(v9 + 16);
                *(_OWORD *)*(_QWORD *)(v10 + 112) = *(_OWORD *)(v9 + 32);
                *(_QWORD *)(v9 + 24) = 0LL;
                *(_QWORD *)(v9 + 40) = 0LL;
              }
              VrpFreeCallbackContext((_QWORD *)v9);
              goto LABEL_51;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v11 = -1073741771;
        }
      }
      goto LABEL_29;
    }
    goto LABEL_13;
  }
  v25 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
    v6 = KeyContext;
    if ( KeyContext )
    {
      v11 = VrpBuildKeyPath(0LL, v25 + 1, KeyContext + 1);
      if ( v11 < 0 )
        goto LABEL_29;
      Buffer = (int)v25->Buffer;
LABEL_28:
      *(_DWORD *)(&v6[2].MaximumLength + 1) = Buffer;
      v6[2].Length = VrpCountPathComponents(&v6[1].Length);
      v11 = CmSetCallbackObjectContext(**(PVOID **)(v10 + 72), &VrpCallbackCookie, v6, &OldContext);
      if ( v11 >= 0 )
        goto LABEL_37;
      goto LABEL_29;
    }
  }
  else
  {
    v28 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v6 = v28;
    if ( v28 )
    {
      v11 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v9 + 48), v28 + 1);
      if ( v11 < 0 )
        goto LABEL_29;
      Buffer = *(_DWORD *)(v9 + 64);
      goto LABEL_28;
    }
  }
LABEL_13:
  v11 = -1073741670;
LABEL_29:
  if ( (unsigned int)dword_140E0A5B0 > 2 )
  {
    v29 = &EmptyUnicodeString;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
      v29 = *(__int64 **)v10;
    v30 = *(unsigned __int16 *)v29;
    v44 = v29[1];
    p_OldContext = &OldContext;
    v42 = &v45;
    v45 = v30;
    v43 = 2LL;
    v46 = 0;
    LODWORD(OldContext) = v11;
    v48 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5B0,
      (unsigned __int8 *)byte_140058ED7,
      &ActivityId,
      0LL,
      5u,
      v41);
  }
  if ( v6 )
    VrpFreeKeyContext((PVOID *)v6);
  if ( v7 )
    CmpFreeExtraParameter(&v7[-3].Length, v18, v19, v20);
LABEL_37:
  if ( v9 )
    goto LABEL_38;
  v32 = v39;
LABEL_51:
  if ( v11 < 0 )
  {
    *(_DWORD *)(v32 + 24) = v11;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v11;
}
