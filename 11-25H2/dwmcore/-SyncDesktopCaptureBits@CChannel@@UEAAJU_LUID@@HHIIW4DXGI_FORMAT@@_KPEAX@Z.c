/*
 * XREFs of ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x1801817A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x180181AD0 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18025AF2C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncDesktopCaptureBits(
        CChannel *this,
        struct _LUID a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8,
        HANDLE hSourceHandle)
{
  __int64 v13; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v15; // rax
  const char *v16; // r9
  HANDLE v17; // rdi
  HANDLE v18; // rax
  const char *v19; // r9
  int v20; // eax
  int v21; // edi
  int v22; // eax
  unsigned int v23; // edi
  unsigned int LastError; // ebx
  HANDLE EventW; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v28; // [rsp+4Ch] [rbp-34h]
  int v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+58h] [rbp-28h]
  unsigned int v31; // [rsp+5Ch] [rbp-24h]
  unsigned int v32; // [rsp+60h] [rbp-20h]
  enum DXGI_FORMAT v33; // [rsp+64h] [rbp-1Ch]
  _BYTE v34[20]; // [rsp+68h] [rbp-18h] BYREF
  int v35; // [rsp+7Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( !EventW )
    return 0LL;
  v13 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
  v27 = 254;
  v35 = 0;
  v31 = a5;
  v32 = a6;
  v33 = a7;
  *(_OWORD *)&v34[4] = 0LL;
  *(_QWORD *)v34 = a8;
  v28 = a2;
  v29 = a3;
  v30 = a4;
  CurrentProcess = GetCurrentProcess();
  v15 = GetCurrentProcess();
  if ( !DuplicateHandle(v15, EventW, CurrentProcess, (LPHANDLE)&v34[8], 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x561,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
LABEL_15:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&EventW);
    return LastError;
  }
  v17 = GetCurrentProcess();
  v18 = GetCurrentProcess();
  if ( !DuplicateHandle(v18, hSourceHandle, v17, (LPHANDLE)&v34[16], 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x569,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v19);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    goto LABEL_15;
  }
  v20 = CChannel::SendCommand(this, &v27, 0x38u);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    LastError = v21;
    goto LABEL_15;
  }
  v22 = CChannel::SyncFlushInternal(this);
  v23 = v22;
  if ( v22 >= 0 )
  {
    WaitForSingleObject(EventW, 0x1388u);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    if ( EventW != (HANDLE)-1LL )
      CloseHandle(EventW);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x56C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v22);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  if ( EventW != (HANDLE)-1LL )
    CloseHandle(EventW);
  return v23;
}
