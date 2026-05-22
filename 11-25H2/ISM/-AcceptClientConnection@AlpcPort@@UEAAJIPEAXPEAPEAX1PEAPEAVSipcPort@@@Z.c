/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010B120
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x180096990 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x180096B88 (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ??0AlpcPort@@AEAA@G@Z @ 0x1800989B0 (--0AlpcPort@@AEAA@G@Z.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x18009BD50 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SipcPrivateNamespace@@QEAA@XZ @ 0x18010AD34 (--0SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010AF30 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18010D9A8 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010DB00 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        int a2,
        void *a3,
        void **a4,
        void **a5,
        struct SipcPort **a6)
{
  char *v9; // rdi
  unsigned __int16 v10; // si
  int v11; // ebx
  int v12; // eax
  AlpcPort *v13; // rax
  AlpcPort *v14; // rax
  AlpcPort *v15; // rsi
  void *v16; // rax
  AlpcPort *v17; // rdx
  int v18; // eax
  int v19; // ebx
  void *v20; // rax
  void *v21; // rax
  AlpcPort *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h] BYREF
  void *v26; // [rsp+68h] [rbp-98h]
  AlpcPort *v27; // [rsp+70h] [rbp-90h]
  char v28[36]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v29; // [rsp+A4h] [rbp-5Ch]
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[68]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[76]; // [rsp+104h] [rbp+4h] BYREF
  void *v33[30]; // [rsp+150h] [rbp+50h] BYREF

  *a4 = 0LL;
  v26 = a3;
  v27 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v30 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  memset_0(v32, 0, 0x44uLL);
  v9 = (char *)this + 56;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 56), 0xC8uLL, v28) == 200 && v28[0] == 2 )
  {
    v10 = v29;
    v25 = 0LL;
    v24 = 0LL;
    SipcPrivateNamespace::SipcPrivateNamespace((SipcPrivateNamespace *)v33);
    v11 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v33, (const struct SipcPrivateNamespaceAttributes *)&v30);
    if ( v11 >= 0 )
    {
      v12 = SipcSignalFactory::OpenServerEvents(v10, (const struct SipcPrivateNamespace *)v33, &v25, &v24);
      if ( v12 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v33);
        v13 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v13 )
        {
          v14 = AlpcPort::AlpcPort(v13, v10);
          v23 = v14;
          v15 = v14;
          if ( v14 )
          {
            v11 = SipcPort::Initialize(v14);
            if ( v11 >= 0 )
            {
              v16 = v26;
              v17 = v27;
              *((_DWORD *)v9 + 10) = a2;
              *(_DWORD *)v9 = 2883588;
              v18 = NtAlpcAcceptConnectPort(
                      (char *)v15 + 48,
                      *((_QWORD *)v17 + 6),
                      0LL,
                      0LL,
                      &AlpcPort::c_serverEndpointAlpcAttributes,
                      v16,
                      v9,
                      0LL,
                      1);
              v19 = v18;
              if ( v18 >= 0 )
              {
                if ( *((_QWORD *)v15 + 6) )
                {
                  v23 = 0LL;
                  *(_OWORD *)v9 = 0LL;
                  *((_OWORD *)v9 + 1) = 0LL;
                  *((_QWORD *)v9 + 4) = 0LL;
                  *((_QWORD *)v9 + 46) = 0LL;
                  v20 = v25;
                  *((_WORD *)v9 + 1) = 40;
                  *((_DWORD *)v9 + 92) = 1610612736;
                  *a4 = v20;
                  v21 = v24;
                  v24 = 0LL;
                  v25 = 0LL;
                  *a5 = v21;
                  *a6 = v15;
                  utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v23);
                  SipcWin32Handle::Reset(&v24);
                  SipcWin32Handle::Reset(&v25);
                  return 0LL;
                }
                utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v23);
                SipcWin32Handle::Reset(&v24);
                SipcWin32Handle::Reset(&v25);
                return v19 | 0x90000000;
              }
              v11 = v18 | 0x10000000;
            }
            utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v23);
LABEL_18:
            SipcWin32Handle::Reset(&v24);
            SipcWin32Handle::Reset(&v25);
            return (unsigned int)v11;
          }
        }
        else
        {
          v23 = 0LL;
        }
        utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v23);
        v11 = -2147024882;
        goto LABEL_18;
      }
      v11 = v12;
    }
    SipcPrivateNamespace::~SipcPrivateNamespace(v33);
    goto LABEL_18;
  }
  return 2147549183LL;
}
