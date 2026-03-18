/*
 * XREFs of ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x1801764A4
 * Callers:
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176210 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x180176838 (-EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        unsigned int a12,
        __int64 a13)
{
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v25; // r9d
  int v26; // edx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-D1h]
  __int64 v30; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v31; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v32; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v33; // [rsp+58h] [rbp-99h]
  __int128 v34; // [rsp+60h] [rbp-91h] BYREF
  _DWORD v35[8]; // [rsp+70h] [rbp-81h] BYREF
  __int64 v36; // [rsp+90h] [rbp-61h]
  __int64 v37; // [rsp+C0h] [rbp-31h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp-29h]
  unsigned int v39; // [rsp+CCh] [rbp-25h]
  __int128 v40; // [rsp+D0h] [rbp-21h] BYREF

  v30 = a7;
  v33 = a13;
  v32 = 0LL;
  v31 = 0LL;
  v40 = 0LL;
  v34 = 0LL;
  memset_0(v35, 0, 0x48uLL);
  v38 = a11;
  v39 = a12;
  v37 = 0LL;
  v17 = CD3DDevice::EnsureVideoProcessor((CD3DDevice *)a1, a5, a6, a11, a12);
  v18 = v17;
  if ( v17 < 0 )
  {
    v29 = 2152;
LABEL_13:
    v25 = v17;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, v29, 0LL);
    goto LABEL_7;
  }
  v19 = *(_QWORD *)(a1 + 1016);
  HIDWORD(v40) = a3;
  DWORD1(v40) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v19 + 64LL))(
          v19,
          a2,
          *(_QWORD *)(a1 + 1032),
          &v40,
          &v32);
  v18 = v17;
  if ( v17 < 0 )
  {
    v29 = 2160;
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(a1 + 1016);
  LODWORD(v34) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v20 + 72LL))(
          v20,
          a10,
          *(_QWORD *)(a1 + 1032),
          &v34,
          &v31);
  v18 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x877u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1024) + 240LL))(
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1040),
      0LL,
      1LL,
      v30);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1024) + 248LL))(
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1040),
      0LL,
      1LL,
      v33);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 1024) + 104LL))(
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1040),
      1LL,
      &v37);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1024) + 592LL))(
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1040),
      0LL,
      a4);
    if ( a8 != 1 )
    {
      if ( (*(_BYTE *)(a1 + 980) & 0x40) == 0 )
      {
        v18 = -2003292287;
        v25 = -2003292287;
        v29 = 2198;
        goto LABEL_14;
      }
      v26 = 0;
      switch ( a8 )
      {
        case 2:
          v26 = 1;
          break;
        case 3:
          v26 = 2;
          break;
        case 4:
          v26 = 3;
          break;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(**(_QWORD **)(a1 + 1024) + 504LL))(
        *(_QWORD *)(a1 + 1024),
        *(_QWORD *)(a1 + 1040),
        0LL,
        1LL,
        v26);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1024) + 296LL))(
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1040),
      0LL,
      0LL);
    if ( !a9 )
      goto LABEL_6;
    v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 1024);
    v30 = 0LL;
    v28 = (**v27)(v27, &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261, &v30);
    v18 = v28;
    if ( v28 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, __int64))(*(_QWORD *)v30 + 648LL))(
        v30,
        *(_QWORD *)(a1 + 1040),
        0LL,
        1LL,
        28,
        a9);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
LABEL_6:
      v22 = *(_QWORD *)(a1 + 1024);
      v36 = v32;
      v23 = *(_QWORD *)(a1 + 1040);
      v35[0] = 1;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v22 + 424LL))(
              v22,
              v23,
              v31,
              0LL,
              1,
              v35);
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_7;
      v29 = 2225;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x8A1u, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
  }
LABEL_7:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return v18;
}
