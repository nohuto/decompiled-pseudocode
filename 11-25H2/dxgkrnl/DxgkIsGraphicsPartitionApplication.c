/*
 * XREFs of DxgkIsGraphicsPartitionApplication @ 0x1401E6690
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

char __fastcall DxgkIsGraphicsPartitionApplication(PEPROCESS Process)
{
  char v2; // si
  PACCESS_TOKEN v3; // rdi
  NTSTATUS v4; // eax
  int v5; // ebx
  char v6; // r12
  int v7; // r15d
  PACCESS_TOKEN v9; // rdi
  int v10; // ebx
  __int16 v11; // ax
  _WORD *v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  _WORD *i; // rdi
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  _WORD v22[2]; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+8Ch] [rbp-7Ch]
  _BYTE *v24; // [rsp+90h] [rbp-78h]
  _QWORD v25[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v26[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v27[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-10h] BYREF
  _WORD Src[128]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v31[144]; // [rsp+208h] [rbp+100h] BYREF

  v2 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1428;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ExGetPreviousMode() == UserMode",
      1428LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  TokenInformation = 0LL;
  v3 = PsReferencePrimaryToken(Process);
  v4 = SeQueryInformationToken(v3, TokenIsAppContainer, &TokenInformation);
  v25[0] = 1441812LL;
  v5 = v4;
  v25[1] = L"WIN://BGKD";
  v6 = SeSecurityAttributePresent(v3, v25);
  v18 = 0LL;
  RtlQueryPackageClaims(v3, 0LL, 0LL, 0LL, 0LL, 0LL, &v18, 0LL);
  v7 = v18 & 5;
  PsDereferencePrimaryToken(v3);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, Process);
    WdLogGlobalForLineNumber = 1452;
    return 0;
  }
  if ( !TokenInformation && v7 != 5 || v6 == 1 )
    return 0;
  v26[0] = 1703960LL;
  v26[1] = L"hevcPlayback";
  v27[1] = L"expandedResources";
  v27[0] = 2359330LL;
  LOWORD(v16) = 0;
  if ( v7 != 5 )
  {
    if ( (int)RtlCapabilityCheck(0LL, v26, &v16) < 0 )
      LOBYTE(v16) = 0;
    if ( (int)RtlCapabilityCheck(0LL, v27, (char *)&v16 + 1) < 0 )
      BYTE1(v16) = 0;
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
  {
    if ( (_BYTE)v16 )
      goto LABEL_33;
    if ( BYTE1(v16) )
      return 0;
    *(_WORD *)((char *)&v16 + 1) = 0;
    v20 = 256LL;
    v9 = PsReferencePrimaryToken(Process);
    v10 = RtlQueryPackageIdentity(v9, Src, &v20, 0LL, 0LL, (char *)&v16 + 2);
    PsDereferencePrimaryToken(v9);
    if ( v10 >= 0 && BYTE2(v16) )
    {
      v23 = 0;
      v24 = v31;
      v11 = Src[0];
      v12 = Src;
      *(&ObjectAttributes.Length + 1) = 0;
      v13 = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      v22[1] = 130;
      while ( v11 != 95 && v11 )
      {
        v13 += 2;
        v11 = *++v12;
      }
      v14 = 0;
      for ( i = (_WORD *)((char *)&DestinationString.Buffer + v20 + 6); *i != 95 && i != Src; --i )
        v14 += 2;
      if ( (unsigned __int64)(v14 + v13) + 2 <= 0x82 )
      {
        KeyHandle = 0LL;
        DestinationString = 0LL;
        memmove(v31, Src, v13);
        memmove(&v24[v13], i, v14 + 2LL);
        v22[0] = v14 + v13;
        RtlInitUnicodeString(
          &DestinationString,
          L"\\REGISTRY\\MACHINE\\OSDATA\\Software\\Microsoft\\Durango\\LiveSettings\\HevcOverride");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          ObjectAttributes.RootDirectory = KeyHandle;
          Handle = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            LOBYTE(v16) = 1;
            ZwClose(Handle);
          }
          ZwClose(KeyHandle);
        }
      }
    }
  }
  if ( !(_BYTE)v16 )
    return 0;
LABEL_33:
  if ( BYTE1(v16) )
    return 0;
  return v2;
}
