/*
 * XREFs of ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x18010E1FC
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180078CAC (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x180096AA0 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x180096C98 (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ??0AlpcPort@@AEAA@G@Z @ 0x180098B10 (--0AlpcPort@@AEAA@G@Z.c)
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009BAC8 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x18009BF00 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::CreateClientPort(
        LARGE_INTEGER a1,
        int a2,
        char a3,
        char a4,
        __int128 *a5,
        unsigned __int64 a6,
        __int16 a7,
        __int64 a8,
        DWORD *a9,
        AlpcPort **a10)
{
  AlpcPort *v11; // rax
  AlpcPort *v12; // rax
  AlpcPort *v13; // rdi
  int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  HANDLE FileW; // rax
  signed int LastError; // eax
  int v27; // r8d
  int *QuadPart; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  int v43; // ebx
  LARGE_INTEGER v44; // rax
  DWORD BytesReturned; // [rsp+64h] [rbp-9Ch] BYREF
  AlpcPort *v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  HANDLE v49; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER Interval; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutBuffer; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v53[7]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-30h]
  __int128 v55; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-10h]
  __int128 v57; // [rsp+100h] [rbp+0h]
  __int128 v58; // [rsp+110h] [rbp+10h]
  __int128 v59; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int128 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  int InBuffer; // [rsp+170h] [rbp+70h] BYREF
  __int64 v65; // [rsp+174h] [rbp+74h]
  _BYTE v66[192]; // [rsp+180h] [rbp+80h] BYREF

  v48 = a2;
  Interval = a1;
  *a9 = 0;
  *a10 = 0LL;
  v51 = a8;
  v11 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v11 )
  {
    v47 = 0LL;
    goto LABEL_32;
  }
  v12 = AlpcPort::AlpcPort(v11, a7);
  v47 = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_32:
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 2147942414LL;
  }
  v14 = SipcPort::Initialize(v12);
  if ( v14 < 0 )
  {
LABEL_12:
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return (unsigned int)v14;
  }
  memset(&v53[1], 0, 48);
  v54 = 0LL;
  memset_0(&v55, 0, 0x44uLL);
  memset_0((char *)&v59 + 4, 0, 0x44uLL);
  v15 = *a5;
  v16 = a5[1];
  BYTE2(v53[1]) = a3;
  BYTE3(v53[1]) = a4;
  v17 = *((_QWORD *)a5 + 18);
  LOBYTE(v53[1]) = 2;
  WORD2(v53[5]) = a7;
  v54 = v15;
  v18 = a5[2];
  v55 = v16;
  v19 = a5[3];
  v56 = v18;
  v20 = a5[4];
  v57 = v19;
  v21 = a5[5];
  v58 = v20;
  v22 = a5[6];
  v59 = v21;
  v23 = a5[8];
  v60 = v22;
  v61 = a5[7];
  v62 = v23;
  v63 = v17;
  if ( a7 )
  {
    FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    v49 = FileW;
    if ( FileW == (HANDLE)-1LL
      || (InBuffer = 0,
          v65 = 19LL,
          OutBuffer = 0LL,
          BytesReturned = 0,
          !DeviceIoControl(FileW, 0x1501E8u, &InBuffer, 0xCu, &OutBuffer, 8u, &BytesReturned, 0LL)) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v14 = -2147418113;
      if ( LastError < 0 )
        v14 = LastError;
      SipcFileHandle::Reset(&v49);
      goto LABEL_12;
    }
    v53[6] = OutBuffer;
    SipcFileHandle::Reset(&v49);
  }
  v27 = v48;
  QuadPart = (int *)Interval.QuadPart;
  v29 = *(_OWORD *)&v53[3];
  *((_OWORD *)v13 + 6) = *(_OWORD *)&v53[1];
  v30 = *(_OWORD *)&v53[5];
  *((_OWORD *)v13 + 7) = v29;
  v31 = v54;
  *((_OWORD *)v13 + 8) = v30;
  v32 = v55;
  *((_OWORD *)v13 + 9) = v31;
  v33 = v56;
  *((_OWORD *)v13 + 10) = v32;
  v34 = v57;
  *((_OWORD *)v13 + 11) = v33;
  v35 = v58;
  *((_OWORD *)v13 + 12) = v34;
  v36 = v59;
  *((_OWORD *)v13 + 13) = v35;
  v37 = v60;
  *((_OWORD *)v13 + 14) = v36;
  v38 = v61;
  *((_OWORD *)v13 + 15) = v37;
  v39 = v62;
  v40 = v63;
  *((_OWORD *)v13 + 16) = v38;
  *((_OWORD *)v13 + 17) = v39;
  *((_QWORD *)v13 + 36) = v40;
  *((_DWORD *)v13 + 14) = 15728840;
  AlpcPortString::AlpcPortString((__int64)v66, QuadPart, v27);
  if ( a6 > 0xCCCCCCCCCCCCCCCLL || (v41 = MEMORY[0x7FFE0014] + 10 * a6, v41 <= 0) )
    v41 = 0x7FFFFFFFFFFFFFFFLL;
  v42 = v51;
  v53[0] = v41;
  while ( 1 )
  {
    v51 = 368LL;
    v43 = NtAlpcConnectPort(
            (char *)v13 + 48,
            v66,
            0LL,
            &AlpcPort::c_clientEndpointAlpcAttributes,
            0x20000,
            v42,
            (char *)v13 + 56,
            &v51,
            0LL,
            0LL,
            v53);
    if ( v43 >= 0 )
      break;
    if ( v43 != -1073741772 || MEMORY[0x7FFE0014] >= v53[0] )
    {
      utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
      return (unsigned int)(v43 | 0x10000000);
    }
    v44.QuadPart = MEMORY[0x7FFE0014] + 1000000LL;
    if ( v53[0] < MEMORY[0x7FFE0014] + 1000000LL )
      v44 = (LARGE_INTEGER)v53[0];
    Interval = v44;
    NtDelayExecution(1u, &Interval);
  }
  if ( !*((_QWORD *)v13 + 6) )
  {
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return v43 | 0x90000000;
  }
  BytesReturned = 0;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)v13 + 56), 4uLL, (char *)&BytesReturned) == 4 )
  {
    v47 = 0LL;
    *a9 = BytesReturned;
    *a10 = v13;
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 0LL;
  }
  else
  {
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 2147549183LL;
  }
}
