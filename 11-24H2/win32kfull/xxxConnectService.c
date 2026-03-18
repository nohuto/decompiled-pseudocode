/*
 * XREFs of xxxConnectService @ 0x140164060
 * Callers:
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, _QWORD *a2, HANDLE *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r14
  void *v5; // rsi
  void *SecurityDescriptor; // r15
  char v7; // r12
  NTSTATUS Desktop; // edi
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  bool v19; // di
  bool v20; // r13
  __int64 v21; // rdx
  bool v22; // r13
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  HANDLE TokenHandle; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-D8h]
  __int128 v33; // [rsp+90h] [rbp-C8h]
  _QWORD *v34; // [rsp+A0h] [rbp-B8h]
  void *v35; // [rsp+A8h] [rbp-B0h]
  __int64 v36; // [rsp+B0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v38[24]; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v39[24]; // [rsp+E8h] [rbp-70h] BYREF
  _BYTE v40[88]; // [rsp+100h] [rbp-58h] BYREF
  ULONG TokenInformationLength; // [rsp+178h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  TokenInformationLength = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v7 = 1;
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(Desktop + 0x80000000) >= 0 && Desktop != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_18;
  }
  v4 = (_QWORD *)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
  v34 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_37:
    Desktop = -1073741801;
    goto LABEL_18;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v9 = *v4;
    v5 = (void *)AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v10) = 13;
      v11 = AllocAce(v5, 0LL, v10, 983247LL, v9, &TokenInformationLength);
      if ( v11 )
      {
        v5 = (void *)v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = (void *)v12;
          LOBYTE(v13) = 13;
          v14 = AllocAce(v12, 0LL, v13, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v14 )
          {
            v5 = (void *)v14;
            v36 = v14;
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v14, TokenInformationLength, 0LL);
            v35 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v40,
                v4,
                Win32FreePool,
                v15);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v39,
                v5,
                Win32FreePool,
                v16);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v38,
                SecurityDescriptor,
                Win32FreePool,
                v17);
              LODWORD(v31) = 48;
              *((_QWORD *)&v31 + 1) = 0LL;
              DWORD2(v32) = 128;
              *(_QWORD *)&v32 = a1;
              v33 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation(&v31, 0LL, 0x2000000LL, 0LL, 0, 0, 0LL, 0LL, 0, 0, -1, &Handle);
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                v19 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                   && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
                   && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
                v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18);
                  LOBYTE(v27) = v20;
                  LOBYTE(v28) = v19;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v28,
                    v27,
                    *(_QWORD *)(UserSessionState + 69416),
                    4,
                    3,
                    10,
                    (__int64)&WPP_462d993f56733f4e68c28264cc638a6e_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v31) = 48;
                *((_QWORD *)&v31 + 1) = Handle;
                DWORD2(v32) = 192;
                *(_QWORD *)&v32 = &DestinationString;
                v33 = 0LL;
                Desktop = xxxCreateDesktopEx((unsigned int)&v31, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( Desktop >= 0 )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
                    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                  {
                    v7 = 0;
                  }
                  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v23 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v21);
                    LOBYTE(v24) = v22;
                    LOBYTE(v25) = v7;
                    WPP_RECORDER_AND_TRACE_SF_(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v25,
                      v24,
                      *(_QWORD *)(v23 + 69416),
                      4,
                      3,
                      11,
                      (__int64)&WPP_462d993f56733f4e68c28264cc638a6e_Traceguids);
                  }
                  *a3 = Handle;
                }
                else
                {
                  ObCloseHandle(Handle, 1);
                  Handle = 0LL;
                }
              }
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v38);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v39);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v40);
              goto LABEL_18;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
LABEL_18:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
