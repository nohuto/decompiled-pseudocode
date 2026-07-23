/*
 * XREFs of VrpPostOpenOrCreate @ 0x140AEB874
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x14092C060 (VrpCountPathComponents.c)
 *     CmSetCallbackObjectContext @ 0x140975570 (CmSetCallbackObjectContext.c)
 *     CmpFindExtraParameterInBlock @ 0x1409D92B0 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1409DEC00 (CmpFreeExtraParameter.c)
 *     CmRetrieveExtraParameter @ 0x1409EAC74 (CmRetrieveExtraParameter.c)
 *     VrpFreeKeyContext @ 0x1409EACB8 (VrpFreeKeyContext.c)
 *     VrpAllocateKeyContext @ 0x1409F7A0C (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x1409F8618 (VrpFreeCallbackContext.c)
 *     CmAllocateExtraParameter @ 0x140A17814 (CmAllocateExtraParameter.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v12; // r9d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v18; // rcx
  _QWORD *v19; // r11
  _QWORD *v20; // rax
  const UNICODE_STRING *v21; // r14
  UNICODE_STRING *KeyContext; // rax
  int Buffer; // eax
  UNICODE_STRING *v24; // rax
  __int64 *v25; // rcx
  int v26; // edx
  void *v27; // rcx
  __int64 v28; // rsi
  int v29; // eax
  void *v30; // rcx
  __int64 *v31; // rcx
  int v32; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v35; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v38; // [rsp+70h] [rbp-19h]
  __int64 v39; // [rsp+78h] [rbp-11h]
  __int64 v40; // [rsp+80h] [rbp-9h]
  int v41; // [rsp+88h] [rbp-1h] BYREF
  int v42; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  __int64 v44; // [rsp+98h] [rbp+Fh]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  OldContext = 0LL;
  v7 = 0LL;
  v8 = a1[1];
  v35 = v5;
  v9 = *(_QWORD *)(v5 + 32);
  v10 = *(_QWORD *)(v5 + 16);
  if ( *(int *)(v5 + 8) < 0 )
    goto LABEL_2;
  CmRetrieveExtraParameter(*(_QWORD **)(v8 + 16), v4, &OldContext);
  if ( v12 == 260 )
  {
    if ( !OldContext )
    {
LABEL_2:
      v11 = 0;
      goto LABEL_37;
    }
    v13 = (char *)OldContext - 48;
    v14 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v13 + 8LL) == v13 )
    {
      v15 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v15 == v13 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
        v13[1] = 0LL;
        CmpFreeExtraParameter(v13);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v12 == 872 )
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
            v20 = *(_QWORD **)(v18 + 8);
            if ( *v20 == v18 )
            {
              *v19 = v18;
              v11 = 0;
              v19[1] = v20;
              *v20 = v19;
              *(_QWORD *)(v18 + 8) = v19;
LABEL_38:
              v27 = *(void **)(v10 + 8);
              if ( v27 )
                ObfDereferenceObject(v27);
              v28 = v35;
              *(_QWORD *)(v10 + 8) = *(_QWORD *)v9;
              *(_QWORD *)v9 = 0LL;
              v29 = *(_DWORD *)(v28 + 8);
              if ( v29 == 260 || v29 == 872 )
              {
                if ( (unsigned int)dword_140E0A620 > 5 )
                {
                  v31 = &EmptyUnicodeString;
                  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
                    v31 = *(__int64 **)v10;
                  v32 = *(unsigned __int16 *)v31;
                  v40 = v31[1];
                  p_OldContext = &OldContext;
                  v38 = &v41;
                  v41 = v32;
                  v39 = 2LL;
                  v42 = 0;
                  LODWORD(OldContext) = v11;
                  v44 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E0A620,
                    (unsigned __int8 *)byte_140059ADB,
                    &ActivityId,
                    0LL,
                    5u,
                    v37);
                }
              }
              else
              {
                v30 = *(void **)(*(_QWORD *)v10 + 8LL);
                if ( v30 )
                  ExFreePoolWithTag(v30, 0);
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
  v21 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
    v6 = KeyContext;
    if ( KeyContext )
    {
      v11 = VrpBuildKeyPath(0LL, v21 + 1, KeyContext + 1);
      if ( v11 < 0 )
        goto LABEL_29;
      Buffer = (int)v21->Buffer;
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
    v24 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v6 = v24;
    if ( v24 )
    {
      v11 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v9 + 48), v24 + 1);
      if ( v11 < 0 )
        goto LABEL_29;
      Buffer = *(_DWORD *)(v9 + 64);
      goto LABEL_28;
    }
  }
LABEL_13:
  v11 = -1073741670;
LABEL_29:
  if ( (unsigned int)dword_140E0A620 > 2 )
  {
    v25 = &EmptyUnicodeString;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
      v25 = *(__int64 **)v10;
    v26 = *(unsigned __int16 *)v25;
    v40 = v25[1];
    p_OldContext = &OldContext;
    v38 = &v41;
    v41 = v26;
    v39 = 2LL;
    v42 = 0;
    LODWORD(OldContext) = v11;
    v44 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)&byte_1400598F7,
      &ActivityId,
      0LL,
      5u,
      v37);
  }
  if ( v6 )
    VrpFreeKeyContext((PVOID *)v6);
  if ( v7 )
    CmpFreeExtraParameter(&v7[-3].Length);
LABEL_37:
  if ( v9 )
    goto LABEL_38;
  v28 = v35;
LABEL_51:
  if ( v11 < 0 )
  {
    *(_DWORD *)(v28 + 24) = v11;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v11;
}
