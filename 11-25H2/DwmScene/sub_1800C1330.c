/*
 * XREFs of sub_1800C1330 @ 0x1800C1330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000BF5A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C088 (memset.c)
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 *     sub_180024550 @ 0x180024550 (sub_180024550.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 *     sub_18004D82C @ 0x18004D82C (sub_18004D82C.c)
 *     sub_18005112C @ 0x18005112C (sub_18005112C.c)
 *     sub_180051370 @ 0x180051370 (sub_180051370.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 *     sub_1800525F0 @ 0x1800525F0 (sub_1800525F0.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800B9A3C @ 0x1800B9A3C (sub_1800B9A3C.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BEBEC @ 0x1800BEBEC (sub_1800BEBEC.c)
 *     sub_1800BF710 @ 0x1800BF710 (sub_1800BF710.c)
 *     sub_1800C1CE8 @ 0x1800C1CE8 (sub_1800C1CE8.c)
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall sub_1800C1330(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // r15
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _BYTE *, _QWORD, __int64 *); // rdi
  int v18; // eax
  ULONG_PTR v19; // rbx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _OWORD *, _QWORD, __int64 *); // rdi
  int v22; // edi
  void **v23; // rax
  void **v24; // rax
  void **v25; // rax
  void **v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  void **v29; // rbx
  _QWORD *v30; // rax
  _BYTE *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // r13d
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  size_t v42; // r14
  __int64 v43; // rcx
  void *v44; // rdx
  void *v45; // r15
  char *v46; // rsi
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  void *v49; // [rsp+48h] [rbp-B8h] BYREF
  void *v50; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  void **v59; // [rsp+A8h] [rbp-58h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v61[36]; // [rsp+150h] [rbp+50h] BYREF
  void *v62[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v63; // [rsp+188h] [rbp+88h]
  __int64 v64[4]; // [rsp+198h] [rbp+98h] BYREF
  _OWORD pExceptionObject[3]; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v66[7]; // [rsp+1F0h] [rbp+F0h] BYREF
  void *retaddr; // [rsp+268h] [rbp+168h]

  v51 = a2;
  v4 = a1[14];
  if ( v4 )
  {
    v5 = *(_BYTE **)v4;
    v49 = v5;
    if ( v5 )
    {
      v49 = v5;
      if ( (v5[20] & 0x10) != 0 )
      {
        std::string::string(
          v62,
          "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for cubemaps");
        v6 = std::string::string(
               v61,
               "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
        sub_180068508(pExceptionObject, (__int64)v6, v7, (__int64)v62, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
    }
  }
  else
  {
    v49 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 12) > 1u )
  {
    std::string::string(
      v62,
      "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for MSAA textures");
    v8 = std::string::string(
           v61,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180068508(pExceptionObject, (__int64)v8, v9, (__int64)v62, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180011B04((__int64)(a1 + 9), v64);
  sub_1800BEBEC(&v57, v64);
  v10 = v57;
  sub_1800B9A04(v57, &v55);
  sub_1800B9A3C(v10, &v51);
  v53 = 0LL;
  v54 = 0LL;
  v11 = a1[21];
  if ( v11 )
  {
    memset(pExceptionObject, 0, 44);
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v11 + 80LL))(v11, pExceptionObject);
    *(_QWORD *)((char *)&pExceptionObject[1] + 12) = 3LL;
    *(_QWORD *)((char *)&pExceptionObject[2] + 4) = 0x20000LL;
    HIDWORD(pExceptionObject[0]) = 1;
    v48 = 0LL;
    v20 = v55;
    v21 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64 *))(*(_QWORD *)v55 + 40LL);
    sub_18000E854(&v48);
    v22 = v21(v20, pExceptionObject, 0LL, &v48);
    sub_1800BB198(v10, v22);
    if ( v22 < 0 )
    {
      std::string::string(v64, "THROW_IF_FAILED_DETAILED. ");
      v23 = sub_18001CC4C((__int64)v64, " File=", 6uLL);
      sub_18001CC4C(
        (__int64)v23,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v24 = sub_18001CC4C((__int64)v64, " Line=", 6uLL);
      sub_18001CC4C((__int64)v24, "384", 3uLL);
      v25 = sub_18001CC4C((__int64)v64, " Message=", 9uLL);
      sub_18001CC4C((__int64)v25, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"", 0x40uLL);
      v26 = sub_18001CC4C((__int64)v64, " Details=\"", 0xAuLL);
      *(_OWORD *)v62 = 0LL;
      v63 = 0LL;
      v27 = sub_1800C2170(v61, pExceptionObject, v62);
      v28 = sub_18001CC24((__int64)v26, v27);
      sub_18001CC4C(v28, "\"", 1uLL);
      sub_180011A5C((__int64)v61);
      if ( v62[0] )
        sub_180010134(v62[0], (v63 - (unsigned __int64)v62[0]) & 0xFFFFFFFFFFFFFFF0uLL);
      v29 = sub_18001CC4C((__int64)v64, " HRESULT=", 9uLL);
      v30 = sub_180027470(v61, v22);
      sub_18001CC24((__int64)v29, (__int64)v30);
      sub_180011A5C((__int64)v61);
      v31 = (_BYTE *)sub_1800137F8((__int64)v64);
      std::string::string(v62, v31);
      v32 = std::string::string(
              v61,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180068574(v66, (__int64)v32, v33, v22, (__int64)v62, 0);
      throw (Spectre::Engine::EngineException *)v66;
    }
    sub_1800BF710(&v53, a1 + 21);
    sub_1800BF710(&v54, &v48);
    sub_18000E854(&v48);
    v12 = a1 + 22;
  }
  else
  {
    v12 = a1 + 22;
    v13 = a1[22];
    if ( !v13 )
    {
      std::string::string(v62, "TextureD3D11::GetDeviceBuffer - No valid D3D11 texture interface pointer");
      v14 = std::string::string(
              v61,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180068508(pExceptionObject, (__int64)v14, v15, (__int64)v62, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    memset(v61, 0, sizeof(v61));
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 80LL))(v13, v61);
    *(_QWORD *)&v61[20] = 3LL;
    *(_QWORD *)&v61[28] = 0x20000LL;
    v48 = 0LL;
    v16 = v55;
    v17 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v55 + 48LL);
    sub_18000E854(&v48);
    v18 = v17(v16, v61, 0LL, &v48);
    v19 = v18;
    sub_1800BB198(v10, v18);
    if ( (v19 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v19;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800BF710(&v53, a1 + 22);
    sub_1800BF710(&v54, &v48);
    sub_18000E854(&v48);
  }
  v34 = (__int64)v51;
  v35 = v53;
  v36 = v54;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v51 + 376LL))(v51, v54, v53);
  *(_OWORD *)Src = 0LL;
  LODWORD(v50) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v34 + 112LL))(
                   v34,
                   v36,
                   0LL,
                   1LL,
                   0,
                   Src);
  sub_1800BB198(v10, (int)v50);
  if ( (int)v50 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = (int)v50;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v37 = sub_18005224C((__int64)a1);
  v52 = sub_18004596C(v37);
  LODWORD(v48) = Src[1];
  LODWORD(v50) = Src[1];
  if ( *v12 )
  {
    v38 = HIDWORD(Src[1]);
  }
  else
  {
    sub_180052350((__int64)a1);
    sub_180052420((__int64)a1);
    v39 = sub_18005224C((__int64)a1);
    v38 = sub_1800C1CE8(v39, v40, v41, &v50);
  }
  v42 = *((_DWORD *)v49 + 2) * v38;
  sub_18004D82C(&v49, v42);
  v44 = Src[0];
  v45 = v49;
  if ( v42 )
  {
    if ( v49 )
    {
      if ( Src[0] )
      {
        memcpy(v49, Src[0], (unsigned int)v42);
        goto LABEL_30;
      }
      memset(v49, 0, (unsigned int)v42);
    }
    *(_DWORD *)o__errno(v43, v44) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_30:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v34 + 120LL))(v34, v36, 0LL);
  v59 = &v50;
  v49 = 0LL;
  v50 = v45;
  *(_QWORD *)v61 = 0LL;
  *(_QWORD *)&v61[8] = v42;
  *(_QWORD *)&v61[16] = __PAIR64__(v48, v52);
  *(_QWORD *)&v61[24] = v38;
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  sub_1800525F0((__int64 *)v62, 1uLL);
  v46 = (char *)v62[0];
  memmove(v62[0], v61, 0x20uLL);
  v62[1] = v46 + 32;
  v48 = 0LL;
  sub_180051370(&v48);
  sub_18005112C(a2, (__int64 *)v62, &v50, v42);
  sub_180024550(&v49);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  sub_18000E854((__int64 *)&v51);
  sub_18000E854(&v55);
  if ( v58 )
    sub_18001050C(v58);
  return a2;
}
