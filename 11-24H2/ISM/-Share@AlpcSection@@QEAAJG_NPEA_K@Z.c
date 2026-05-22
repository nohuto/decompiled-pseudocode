/*
 * XREFs of ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180083EB0
 * Callers:
 *     ?ShareSection@AlpcPort@@UEAAJPEAX_NPEA_K@Z @ 0x1801107B0 (-ShareSection@AlpcPort@@UEAAJPEAX_NPEA_K@Z.c)
 * Callees:
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009BAC8 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?Attach@SipcFileHandle@@QEAAXPEAX@Z @ 0x18010D848 (-Attach@SipcFileHandle@@QEAAXPEAX@Z.c)
 *     ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x180110628 (-SendXvmmDisconnect@AlpcSection@@CAJ_K@Z.c)
 */

__int64 __fastcall AlpcSection::Share(AlpcSection *this, __int16 a2, char a3, unsigned __int64 *a4)
{
  __int64 v9; // rbx
  HANDLE FileW; // rax
  signed int LastError; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r14d
  HANDLE hDevice; // [rsp+40h] [rbp-C0h] BYREF
  DWORD BytesReturned; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 InBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v21; // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+62h] [rbp-9Eh]
  BOOL v23; // [rsp+63h] [rbp-9Dh]
  char v24; // [rsp+67h] [rbp-99h]
  _OWORD v25[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+1D8h] [rbp+D8h] BYREF
  int v29; // [rsp+1E0h] [rbp+E0h]
  __int64 v30; // [rsp+1E8h] [rbp+E8h]
  __int64 v31; // [rsp+1F0h] [rbp+F0h]
  __int64 v32; // [rsp+1F8h] [rbp+F8h]

  if ( a4 )
    *a4 = 0LL;
  if ( *((_DWORD *)this + 22) )
    return 2147500037LL;
  v9 = -1LL;
  hDevice = (HANDLE)-1LL;
  if ( *((_QWORD *)this + 14) )
  {
    if ( !a2 && !a3 )
      goto LABEL_17;
    FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    SipcFileHandle::Attach((SipcFileHandle *)&hDevice, FileW);
    v9 = (__int64)hDevice;
    if ( hDevice == (HANDLE)-1LL
      || (InBuffer = *((_QWORD *)this + 14),
          v24 = 0,
          v21 = a2,
          v22 = a2 != 0 ? 3 : 0,
          BytesReturned = 0,
          v23 = a3 != 0,
          !DeviceIoControl(hDevice, 0x150270u, &InBuffer, 0x10u, 0LL, 0, &BytesReturned, 0LL)) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v12 = -2147418113;
      if ( LastError < 0 )
        v12 = LastError;
      SipcFileHandle::Reset((SipcFileHandle *)&hDevice);
      return v12;
    }
  }
  if ( a2 )
  {
    v13 = *((_QWORD *)this + 14);
    goto LABEL_18;
  }
LABEL_17:
  v13 = 0LL;
LABEL_18:
  v27 = v13;
  v30 = *((_QWORD *)this + 13);
  v14 = *((_QWORD *)this + 4);
  v28 = 0x4000000000000000LL;
  v31 = v14;
  v32 = *((_QWORD *)this + 5);
  v26 = 0LL;
  v15 = *((_QWORD *)this + 12);
  memset(v25, 0, sizeof(v25));
  LODWORD(v28) = 1610612736;
  LODWORD(v25[0]) = 3145736;
  v29 = 0;
  v19 = 0LL;
  v16 = NtAlpcSendWaitReceivePort(v15, 0x10000LL, v25, &v28, 0LL, 0LL, 0LL, &v19);
  if ( v16 < 0 )
  {
    if ( v9 != -1 )
      AlpcSection::SendXvmmDisconnect(*((_QWORD *)this + 14));
    SipcFileHandle::Reset((SipcFileHandle *)&hDevice);
    return v16 | 0x10000000u;
  }
  else
  {
    if ( a4 && a3 )
      *a4 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 22) = 1;
    if ( v9 != -1 )
      CloseHandle((HANDLE)v9);
    return 0LL;
  }
}
