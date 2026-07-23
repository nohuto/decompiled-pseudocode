/*
 * XREFs of CmpLogHiveFileInaccessible @ 0x140932734
 * Callers:
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140491960 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140932BA0 (CmpQueryFileSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLogHiveFileInaccessible(UNICODE_STRING *a1, int a2, ULONG a3, ULONG a4)
{
  int v7; // r9d
  EVENT_DESCRIPTOR *v8; // r15
  char v9; // r14
  struct _PRIVILEGE_SET *v10; // rdi
  wchar_t *v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  PACCESS_TOKEN PrimaryToken; // rcx
  char v17; // bl
  int Id_high; // eax
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[80]; // [rsp+B0h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT UserData; // [rsp+100h] [rbp+0h] BYREF
  int *v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v34[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  int *v38; // [rsp+160h] [rbp+60h] BYREF
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+170h] [rbp+70h]
  int v42; // [rsp+178h] [rbp+78h]
  int v43; // [rsp+17Ch] [rbp+7Ch]
  PVOID *p_P; // [rsp+180h] [rbp+80h]
  int v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+18Ch] [rbp+8Ch]

  v22 = a2;
  memset_0(v29, 0, 0x44uLL);
  v7 = v22;
  v8 = (EVENT_DESCRIPTOR *)SeNullSid;
  v9 = 0;
  v10 = 0LL;
  v19 = 0;
  v11 = 0LL;
  Handle = 0LL;
  Privileges = 0LL;
  P = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&UserData, 0, sizeof(UserData));
  if ( v22 == -1073741790 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = 1;
    if ( ZwOpenFile(&Handle, 0x20000u, &ObjectAttributes, &IoStatusBlock, a4, a3) >= 0 )
    {
      v10 = Privileges;
      if ( (int)CmpQueryFileSecurityDescriptor(Handle) >= 0 )
      {
        if ( (int)SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)Privileges, 1LL, 12LL, &P, &v19) >= 0 )
        {
          SeCaptureSubjectContext(&UserData);
          PrimaryToken = UserData.PrimaryToken;
          v9 = 1;
          if ( UserData.ClientToken )
            PrimaryToken = UserData.ClientToken;
          SeQueryUserSidToken((__int64)PrimaryToken, v29, 0x44u, 0LL);
          v8 = (EVENT_DESCRIPTOR *)v29;
        }
        v11 = (wchar_t *)P;
      }
    }
    if ( (unsigned int)dword_140E09F58 > 3 )
    {
      if ( (qword_140E09F68 & 0x200000000008LL) == 0 || (qword_140E09F70 & 0x200000000008LL) != qword_140E09F70 )
        v17 = 0;
      if ( v17 )
      {
        v37 = 0;
        v35 = (__int64 *)&v19;
        v19 = -1073741790;
        v36 = 4;
        tlgCreate1Sz_wchar_t((__int64)&v38, v11);
        Id_high = HIBYTE(v8->Id);
        v43 = 0;
        v46 = 0;
        p_EventDescriptor = v8;
        P = (PVOID)0x1000000;
        v42 = 4 * Id_high + 8;
        p_P = &P;
        v45 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09F58,
          (unsigned __int8 *)byte_140055E17,
          0LL,
          0LL,
          6u,
          v34);
      }
    }
    if ( v9 )
      SeReleaseSubjectContext(&UserData);
    goto LABEL_21;
  }
  v12 = dword_140E09F58;
  v13 = qword_140E09F70;
  if ( (unsigned int)dword_140E09F58 > 3 )
  {
    if ( (qword_140E09F68 & 0x200000000008LL) != 0 && (qword_140E09F70 & 0x200000000008LL) == qword_140E09F70 )
    {
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v35 = &v26;
      v38 = &v20;
      p_EventDescriptor = &EventDescriptor;
      v20 = v22;
      v26 = 1LL;
      v36 = 8;
      v39 = 4;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v42 = 8;
      tlgWriteAgg(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)&word_140055E7E,
        (unsigned int)dword_140E09F58,
        5u,
        (__int64)v34);
      v13 = qword_140E09F70;
      v12 = dword_140E09F58;
      v7 = v22;
    }
    if ( v12 > 3 && (qword_140E09F68 & 8) != 0 && (v13 & 8) == v13 )
    {
      v33 = 0;
      v31 = &v20;
      *(_DWORD *)&EventDescriptor.Level = 3;
      UserData.ClientToken = off_140E09F60;
      v20 = v7;
      v32 = 4;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.ImpersonationLevel = *(unsigned __int16 *)off_140E09F60;
      UserData.PrimaryToken = byte_140055EE1;
      *((_DWORD *)&UserData.ImpersonationLevel + 1) = 2;
      UserData.ProcessAuditId = (PVOID)0x10000002BLL;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_140E09F78, &EventDescriptor, 0LL, 0LL, 3u, (PEVENT_DATA_DESCRIPTOR)&UserData);
      v10 = Privileges;
      v11 = (wchar_t *)P;
LABEL_21:
      if ( v10 )
        CmSiFreeMemory(v10);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  if ( Handle )
    ZwClose(Handle);
}
