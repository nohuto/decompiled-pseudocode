/*
 * XREFs of _SysCtxOpenMachine @ 0x140820B44
 * Callers:
 *     _PnpCtxCreateNode @ 0x1408179EC (_PnpCtxCreateNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1406A7B30 (ZwDuplicateObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _SysCtxOpenControlSet @ 0x140820920 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SysCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HANDLE SourceHandle,
        int a6,
        _QWORD *a7)
{
  int Version; // ebx
  __int64 v10; // rcx
  _BYTE *Pool2; // rdi
  HANDLE v12; // rcx
  int v14; // r8d
  const WCHAR *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-A8h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v23; // [rsp+174h] [rbp+74h]
  unsigned __int8 v24; // [rsp+176h] [rbp+76h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  Version = 0;
  *a7 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 0x38uLL, 0x53504E50u);
  if ( !Pool2 )
  {
    Version = -1073741801;
LABEL_3:
    v12 = Handle;
    goto LABEL_4;
  }
  v14 = a6;
  if ( !a6 )
  {
    memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    Version = RtlGetVersion(&VersionInformation);
    if ( Version < 0 )
      goto LABEL_3;
    v10 = v23;
    LOWORD(v10) = v23 << 8;
    v14 = v24 | (unsigned __int16)v10 | ((LOBYTE(VersionInformation.dwMinorVersion) | (unsigned __int16)(LOBYTE(VersionInformation.dwMajorVersion) << 8)) << 16);
  }
  *(_DWORD *)Pool2 = v14;
  if ( SourceHandle )
  {
    Version = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &Handle,
                0,
                0,
                2u);
    if ( Version < 0 )
    {
      Handle = 0LL;
      goto LABEL_6;
    }
  }
  if ( a2 )
  {
    if ( a2 == -1 )
      goto LABEL_26;
    v15 = 0LL;
    v16 = a2;
  }
  else
  {
    v15 = L"SYSTEM";
    v16 = 2147483650LL;
  }
  Version = RegRtlOpenKeyTransacted(v16, v15, 0LL, 0x2000000LL, &v19, Handle);
  if ( Version )
    goto LABEL_3;
LABEL_26:
  if ( v19 )
  {
    Version = SysCtxOpenControlSet(v10, (__int64)v19, (__int64)Handle, &v21);
    if ( Version )
      goto LABEL_3;
  }
  if ( a4 )
  {
    if ( a4 == -1 )
      goto LABEL_33;
    v17 = a4;
  }
  else
  {
    v17 = 2147483651LL;
  }
  Version = RegRtlOpenKeyTransacted(v17, 0LL, 0LL, 0x2000000LL, &v20, Handle);
  if ( Version )
    goto LABEL_3;
LABEL_33:
  Pool2[16] = 1;
  v12 = 0LL;
  *((_QWORD *)Pool2 + 1) = Handle;
  *((_QWORD *)Pool2 + 3) = v19;
  *((_QWORD *)Pool2 + 4) = 0LL;
  *((_QWORD *)Pool2 + 6) = v21;
  *((_QWORD *)Pool2 + 5) = v20;
  *a7 = Pool2;
  Pool2 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
LABEL_4:
  if ( v12 )
    ZwClose(v12);
LABEL_6:
  if ( v19 )
    ZwClose(v19);
  if ( v21 )
    ZwClose(v21);
  if ( v20 )
    ZwClose(v20);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Version;
}
