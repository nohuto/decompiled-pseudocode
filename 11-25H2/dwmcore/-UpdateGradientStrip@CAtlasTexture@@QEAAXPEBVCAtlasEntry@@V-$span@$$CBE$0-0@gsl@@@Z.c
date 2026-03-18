/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019E284
 * Callers:
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18019E1F0 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1801A0F14 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18019E4EC (-GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1802025B0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int *v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  int v10; // edi
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  void (__fastcall *v17)(__int64, FastRegion::CRegion **); // r9
  _DWORD *v18; // rax
  struct IDeviceTexture *v19; // [rsp+50h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-61h] BYREF
  int v21; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v22[6]; // [rsp+68h] [rbp-51h] BYREF
  FastRegion::CRegion *v23; // [rsp+80h] [rbp-39h] BYREF
  __int64 v24; // [rsp+88h] [rbp-31h] BYREF
  int v25; // [rsp+90h] [rbp-29h]
  _DWORD v26[2]; // [rsp+94h] [rbp-25h] BYREF
  _DWORD v27[7]; // [rsp+9Ch] [rbp-1Dh] BYREF
  _BYTE v28[23]; // [rsp+B9h] [rbp+0h] BYREF

  v19 = 0LL;
  CAtlasTexture::GetDeviceTexture(a1, &v19);
  v20 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v19 + 120LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  (**v6)(v6, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v20);
  v7 = (int *)(*(__int64 (__fastcall **)(char *, _DWORD *))(*((_QWORD *)v19 + 1) + 24LL))((char *)v19 + 8, v22);
  v8 = GetPixelFormatSize(*v7) >> 3;
  (*(void (__fastcall **)(struct IDeviceTexture *, int *))(*(_QWORD *)v19 + 88LL))(v19, &v21);
  v9 = *(_DWORD *)a3;
  v10 = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)a3 >= v8 * v21 )
    v9 = v8 * v21;
  v11 = v9 % v8;
  v12 = v9 / v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _DWORD *))(*((_QWORD *)v19 + 1) + 24LL))((char *)v19 + 8, v22);
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v12,
      1,
      *v18,
      v8);
  }
  v13 = (*(__int64 (__fastcall **)(struct IDeviceTexture *, __int64))(*(_QWORD *)v19 + 40LL))(v19, v11);
  v22[1] = v10;
  v22[0] = 0;
  v22[3] = v9 / v8;
  v14 = *(_QWORD *)(v13 + 560);
  v22[4] = v10 + 1;
  v22[5] = 1;
  v15 = *(_QWORD *)(a3 + 8);
  v22[2] = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _DWORD *, __int64, unsigned int, _DWORD, int))(*(_QWORD *)v14 + 928LL))(
    v14,
    v20,
    0LL,
    v22,
    v15,
    v9,
    0,
    1);
  v16 = *((_QWORD *)a1 + 1);
  v17 = *(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)(v16 + 8) + 72LL);
  v23 = (FastRegion::CRegion *)&v24;
  if ( v12 <= 0 || v10 >= v10 + 1 )
  {
    LODWORD(v24) = 0;
  }
  else
  {
    v24 = 2LL;
    v25 = v9 / v8;
    v26[0] = v10;
    v27[2] = 0;
    v26[1] = (unsigned int)v28 - 21 - (unsigned int)v26;
    v27[3] = v9 / v8;
    v27[0] = v10 + 1;
    v27[1] = (unsigned int)v28 - 21 - (unsigned int)v27 + 8;
  }
  v17(v16 + 8, &v23);
  FastRegion::CRegion::FreeMemory(&v23);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v19 + 16LL))(v19);
}
