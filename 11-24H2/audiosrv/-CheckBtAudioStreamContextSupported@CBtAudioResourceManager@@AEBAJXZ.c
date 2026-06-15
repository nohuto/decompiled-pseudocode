/*
 * XREFs of ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800D9AA0
 * Callers:
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DA190 (-SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180067A5C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009C184 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::CheckBtAudioStreamContextSupported(LPCWSTR *this)
{
  unsigned int v1; // ebx
  HANDLE FileW; // rax
  const char *v3; // r9
  signed int LastError; // eax
  __int64 v5; // rdx
  wil::details *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  GUID InBuffer; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  int OutBuffer; // [rsp+90h] [rbp+10h] BYREF
  DWORD BytesReturned; // [rsp+98h] [rbp+18h] BYREF
  void *v17; // [rsp+A0h] [rbp+20h] BYREF

  v1 = 0;
  FileW = CreateFileW(this[71], 0xC0000000, 3u, 0LL, 3u, 0x80u, 0LL);
  v17 = FileW;
  if ( (((unsigned __int64)FileW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x59,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                  v3);
LABEL_5:
    v1 = LastError;
    goto LABEL_8;
  }
  v12 = 0;
  v13 = 0;
  InBuffer = GUID_33889d99_1226_4016_a0d5_18875cf7c5cf;
  v11 = 0x20000000001LL;
  OutBuffer = 0;
  BytesReturned = 0;
  if ( !DeviceIoControl(FileW, 0x2F0003u, &InBuffer, 0x20u, &OutBuffer, 4u, &BytesReturned, 0LL) )
  {
    LastError = wil::details::GetLastErrorFailHr(v6, v5, v7, v8);
    goto LABEL_5;
  }
  if ( (OutBuffer & 2) == 0 )
  {
    v1 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)0x80004002LL);
  }
LABEL_8:
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
  return v1;
}
