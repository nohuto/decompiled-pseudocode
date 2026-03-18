/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1401B1EA4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401B1D6C (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 *     DrvCollectDriverFailureData @ 0x1401C9950 (DrvCollectDriverFailureData.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 DrvDriverFailure(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 i; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[30]; // [rsp+90h] [rbp-70h] BYREF
  void *KeyHandle; // [rsp+190h] [rbp+90h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v15, 0, 0xE8uLL);
  LOBYTE(v15[0]) = 0;
  v15[1] = *(_QWORD *)(W32GetUserSessionState(v0) + 57008);
  LODWORD(v15[2]) = *(_DWORD *)(W32GetUserSessionState(v15[1]) + 43316);
  HIDWORD(v15[2]) = *(_DWORD *)(W32GetUserGdiSessionState(LODWORD(v15[2])) + 28);
  LODWORD(v15[3]) = *(_DWORD *)(W32GetUserSessionState(HIDWORD(v15[2])) + 19716);
  v15[4] = *(_QWORD *)(W32GetUserSessionState(LODWORD(v15[3])) + 63352);
  v15[5] = *(_QWORD *)(W32GetUserSessionState(v15[4]) + 63360);
  v15[6] = *(_QWORD *)(W32GetUserSessionState(v15[5]) + 63368);
  v15[7] = *(_QWORD *)(W32GetUserSessionState(v15[6]) + 63376);
  v15[8] = *(_QWORD *)(W32GetUserSessionState(v15[7]) + 63384);
  v15[9] = *(_QWORD *)(W32GetUserSessionState(v15[8]) + 63392);
  v15[10] = *(_QWORD *)(W32GetUserSessionState(v15[9]) + 63400);
  v15[11] = *(_QWORD *)(W32GetUserSessionState(v15[10]) + 63408);
  v15[12] = *(_QWORD *)(W32GetUserSessionState(v15[11]) + 63416);
  v15[13] = *(_QWORD *)(W32GetUserSessionState(v15[12]) + 43288);
  v15[14] = *(_QWORD *)(W32GetUserSessionState(v15[13]) + 43296);
  v15[15] = *(_QWORD *)(W32GetUserSessionState(v15[14]) + 43104);
  v15[16] = *(_QWORD *)(W32GetUserSessionState(v15[15]) + 43120);
  v15[17] = *(_QWORD *)(W32GetUserSessionState(v15[16]) + 43128);
  v15[18] = *(_QWORD *)(W32GetUserSessionState(v15[17]) + 43136);
  v15[19] = *(_QWORD *)(W32GetUserSessionState(v15[18]) + 43144);
  v15[20] = *(_QWORD *)(W32GetUserSessionState(v15[19]) + 43152);
  v15[21] = *(_QWORD *)(W32GetUserSessionState(v15[20]) + 43160);
  v15[22] = *(_QWORD *)(W32GetUserSessionState(v15[21]) + 43168);
  v15[23] = *(_QWORD *)(W32GetUserSessionState(v15[22]) + 43176);
  v15[24] = *(_QWORD *)(W32GetUserSessionState(v15[23]) + 43184);
  v15[25] = *(_QWORD *)(W32GetUserSessionState(v15[24]) + 43192);
  v15[26] = gpWin32kDriverObject;
  LODWORD(v15[27]) = *(_DWORD *)(W32GetUserSessionState(v15[25]) + 360);
  if ( *(_DWORD *)(W32GetUserSessionState(LODWORD(v15[27])) + 36460) )
  {
    v2 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v2 = 1;
      WdLogSingleEntry1(2LL, -1073741431LL);
      WdLogGlobalForLineNumber = 866;
    }
    else
    {
      v2 = 0;
      v1 = *(_QWORD *)(W32GetSessionState(v3) + 88);
      v4 = *(_QWORD *)(v1 + 1168);
      if ( v4 )
      {
        v1 = *(_QWORD *)(W32GetSessionState(v1) + 88);
        for ( i = *(_QWORD *)(v1 + 1096); i; i = *(_QWORD *)(i + 128) )
        {
          if ( v4 == i )
          {
            v2 = 2;
            break;
          }
        }
      }
    }
  }
  v6 = *(_QWORD *)(W32GetSessionState(v1) + 88);
  if ( *(_DWORD *)(v6 + 1056) )
    v2 = *(_DWORD *)(v6 + 1056);
  if ( v2 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v6) + 57008) )
    {
      UserSessionState = W32GetUserSessionState(v7);
      tagKERNELDISPLAYINFO::operator=((__int64)&v15[28], *(_QWORD *)(UserSessionState + 57008));
    }
    DrvCollectDriverFailureData(&BugCheckParameter1, v15);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v2);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
