/*
 * XREFs of WmipCreateGuidObject @ 0x1409CBCD8
 * Callers:
 *     WmipOpenGuidObject @ 0x1409CD4EC (WmipOpenGuidObject.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409CBEF4 (WmipGetGuidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int128 *a1, int a2, _OWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  int GuidSecurityDescriptor; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID v12; // rdi
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rsi
  __int64 v20; // [rsp+28h] [rbp-E0h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  char *DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  PVOID v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  struct _ACCESS_STATE v30; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v31[28]; // [rsp+148h] [rbp+40h] BYREF

  P = 0LL;
  DestinationString_8 = 0LL;
  memset_0(&v30, 0, sizeof(v30));
  memset_0(v31, 0, sizeof(v31));
  v8 = *((_QWORD *)a1 + 2);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString_8, (PCWSTR)(*(_QWORD *)(v8 + 8) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString_8, &P);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v10 = a1[1];
    v24 = *a1;
    v11 = a1[2];
    v12 = P;
    v27 = HIDWORD(v10);
    v25 = 0LL;
    v29 = *((_QWORD *)&v11 + 1);
    v28 = P;
    v26 = 640;
    GuidSecurityDescriptor = SeCreateAccessState(&v30, v31, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v13 = *(_OWORD *)&v30.SubjectSecurityContext.ClientToken;
      v14 = *(_OWORD *)&v30.SubjectSecurityContext.PrimaryToken;
      v30.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObjectEx(
                                 0,
                                 WmipGuidObjectType,
                                 (int)&v24,
                                 0,
                                 v20,
                                 168,
                                 0,
                                 0,
                                 &DestinationString,
                                 0LL);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v18 = DestinationString;
        memset_0(DestinationString, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v18, NotificationEvent, 0);
        *((_DWORD *)v18 + 28) = 4096;
        *((_DWORD *)v18 + 36) = 4096;
        *(_OWORD *)(v18 + 24) = *a3;
        GuidSecurityDescriptor = ObInsertObjectEx((struct _FILE_OBJECT *)v18, &v30, a2, 0, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v18;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&v30.SubjectSecurityContext.ClientToken = v13;
      *(_OWORD *)&v30.SubjectSecurityContext.PrimaryToken = v14;
      SeDeleteAccessState((__int64)&v30, v15, v16, v17);
    }
    if ( v12 && v12 != (PVOID)WmipDefaultAccessSd )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
