/*
 * XREFs of ?SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800DA060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180067A5C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::SendBtAudioStreamContext(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  HANDLE FileW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  unsigned int LastError; // ebx
  void *v10; // [rsp+40h] [rbp-28h] BYREF
  GUID InBuffer; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp-10h]
  int v13; // [rsp+5Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD BytesReturned; // [rsp+70h] [rbp+8h] BYREF
  __int64 OutBuffer; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  if ( *(_BYTE *)(a1 + 516) && !a2 )
  {
    FileW = CreateFileW(*(LPCWSTR *)(a1 + 568), 0xC0000000, 3u, 0LL, 3u, 0x80u, 0LL);
    v10 = FileW;
    if ( (((unsigned __int64)FileW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      BytesReturned = 0;
      v12 = 1;
      InBuffer = GUID_33889d99_1226_4016_a0d5_18875cf7c5cf;
      v13 = 2;
      OutBuffer = v4;
      if ( DeviceIoControl(FileW, 0x2F0003u, &InBuffer, 0x18u, &OutBuffer, 8u, &BytesReturned, 0LL) )
      {
        *(_DWORD *)(a1 + 508) = v4;
        LastError = 0;
        goto LABEL_9;
      }
      v7 = 159LL;
    }
    else
    {
      v7 = 142LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v7,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                  v6);
LABEL_9:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
    return LastError;
  }
  return 0LL;
}
