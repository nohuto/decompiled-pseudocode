/*
 * XREFs of PoStoreRequester @ 0x140425FC4
 * Callers:
 *     PoStoreDiagnosticContext @ 0x1404259A0 (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140425F08 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A3277C (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x1404200F0 (RtlStringCbCopyUnicodeString.c)
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7; // r14
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // r13
  char *v11; // r15
  char v12; // di
  unsigned __int16 *v13; // r14
  __int64 v14; // rcx
  char *v15; // rdx
  char *i; // rax
  char *v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v22; // rbp
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v25; // ecx
  __int64 v26; // rcx
  unsigned __int16 *DeviceNode; // rcx
  __int64 v28; // rax
  char v29; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 *v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v4 = *a3;
  v5 = a2;
  v7 = a1;
  v8 = 0LL;
  v9 = 40LL;
  ResultLength = 0;
  LOBYTE(a2) = 0;
  v29 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( v5 && v4 >= 0x28 )
  {
    v11 = (char *)(v5 + 40);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)a1;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v12 )
    {
      if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, 0LL) )
        a1 = *(unsigned int *)(v7 + 32);
      else
        a1 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 464LL);
      *(_DWORD *)(v5 + 24) = a1;
      *(_DWORD *)(v5 + 28) = *(_DWORD *)(v7 + 40);
    }
    if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, v8) )
      v13 = (unsigned __int16 *)(v7 + 16);
    else
      v13 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 8) + 848LL);
    v14 = *v13;
    v15 = (char *)*((_QWORD *)v13 + 1);
    ResultLength = *v13;
    if ( a4 )
    {
      for ( i = &v15[2 * ((unsigned __int64)(unsigned int)v14 >> 1)]; i != v15 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v15 )
      {
        v17 = i + 2;
        v14 = (unsigned int)((_DWORD)v15 - (_DWORD)v17 + v14);
        v15 = v17;
        ResultLength = v14;
      }
    }
    v18 = (unsigned int)v14;
    v9 = v14 + 42;
    if ( !v12 || v4 < v9 )
    {
      *v31 = v9;
      return 3221225507LL;
    }
    v12 = 1;
    memmove(v11, v15, (unsigned int)v14);
    *(_WORD *)&v11[2 * (v18 >> 1)] = 0;
    *(_QWORD *)(v5 + 16) = &v11[-v5];
    goto LABEL_24;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 )
  {
    DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v20, 0x67446F50u);
    v22 = DeviceAttachmentBaseRefWithTag;
    if ( !DeviceAttachmentBaseRefWithTag )
    {
LABEL_24:
      LOBYTE(a2) = 0;
      goto LABEL_25;
    }
    if ( !DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
      goto LABEL_36;
    if ( v12 )
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceAttachmentBaseRefWithTag,
                         DevicePropertyDeviceDescription,
                         v4 - 40,
                         v11,
                         &ResultLength);
    }
    else
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceAttachmentBaseRefWithTag,
                         DevicePropertyDeviceDescription,
                         0,
                         0LL,
                         &ResultLength);
      if ( DeviceProperty == -1073741789 )
        DeviceProperty = 0;
    }
    if ( DeviceProperty < 0 )
    {
LABEL_36:
      p_DriverName = &v22->DriverObject->DriverName;
      v25 = p_DriverName->Length + 2;
      ResultLength = v25;
      if ( v12 && v4 >= (unsigned __int64)v25 + 40 )
      {
        v12 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, v25, p_DriverName);
      }
      else
      {
        v12 = 0;
      }
    }
    v26 = ResultLength;
    v9 = ResultLength + 40LL;
    if ( v12 )
    {
      v29 = 1;
      *(_QWORD *)(v5 + 16) = &v11[-v5];
      v11 += v26;
    }
    DeviceNode = (unsigned __int16 *)v22->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      v10 = DeviceNode + 20;
      v28 = (unsigned int)DeviceNode[20] + 2;
      v9 += v28;
      ResultLength = DeviceNode[20] + 2;
      if ( v12 && v4 >= v9 )
      {
        v12 = 1;
        RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, (unsigned int)v28, (PCUNICODE_STRING)(DeviceNode + 20));
        *(_QWORD *)(v5 + 24) = &v11[-v5];
      }
      else
      {
        v12 = 0;
      }
    }
    ObfDereferenceObjectWithTag(v22, 0x67446F50u);
    LOBYTE(a2) = v29;
  }
LABEL_25:
  *v31 = v9;
  if ( !v12 )
    return 3221225507LL;
  if ( !*(_DWORD *)(v5 + 8) )
  {
    if ( !(_BYTE)a2 )
      *(_QWORD *)(v5 + 16) = 0LL;
    if ( !v10 )
      *(_QWORD *)(v5 + 24) = 0LL;
  }
  return 0LL;
}
