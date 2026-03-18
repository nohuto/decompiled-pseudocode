/*
 * XREFs of ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180055720 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180056180 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsIntermediate@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801F1DD0 (-IsIntermediate@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FCCD0 (-SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z.c)
 *     ?SetProtected@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FCE20 (-SetProtected@CDeviceTextureTarget@@UEAAX_N@Z.c)
 *     ?SetBlackedOutForMonitor@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801FE020 (-SetBlackedOutForMonitor@CDeviceTextureTarget@@UEAAX_N@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDCC0 (-QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802CDE40 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::RestoreDrawingContextFlags(
        CDrawingContext *this,
        const struct DrawingContextFlags *a2,
        char a3)
{
  CDeviceTextureTarget *v4; // rcx
  _BYTE *v7; // r9
  bool (__fastcall *v8)(CDeviceTextureTarget *__hidden); // rax
  char v9; // al
  __int64 (__fastcall ***v10)(_QWORD, GUID *, CDeviceTextureTarget **); // rsi
  __int64 (__fastcall *v11)(_QWORD, GUID *, CDeviceTextureTarget **); // rax
  int v12; // eax
  bool (__fastcall *v13)(CDeviceTextureTarget *__hidden); // rax
  char IsIntermediate; // al
  __int64 v15; // rdx
  void (__fastcall *v16)(CDeviceTextureTarget *__hidden, bool); // rax
  __int64 v17; // rdx
  void (__fastcall *v18)(CDeviceTextureTarget *__hidden, bool); // rax
  char v19; // si
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64, __int64); // rax
  void (__fastcall *v22)(CDeviceTextureTarget *__hidden, bool); // rax
  CDeviceTextureTarget *v23; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v23 = 0LL;
  v7 = (_BYTE *)*((_QWORD *)this + 1);
  v8 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v7 + 128LL);
  if ( v8 == CDeviceTextureTarget::IsDisplayTarget )
  {
    v9 = v7[33];
  }
  else
  {
    v9 = v8(*((CDeviceTextureTarget **)this + 1));
    v4 = v23;
  }
  if ( v9 )
    goto LABEL_4;
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, CDeviceTextureTarget **))*((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  v11 = **v10;
  if ( (char *)v11 == (char *)CDeviceTextureTarget::QueryInterface )
    v12 = CDeviceTextureTarget::QueryInterface(v10, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v23);
  else
    v12 = v11(v10, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v23);
  if ( v12 < 0
    || ((v13 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v23 + 144LL),
         v13 != CDeviceTextureTarget::IsIntermediate)
      ? (IsIntermediate = ((__int64 (*)(void))v13)())
      : (IsIntermediate = CDeviceTextureTarget::IsIntermediate(v23)),
        !IsIntermediate) )
  {
    v4 = v23;
LABEL_4:
    *((_BYTE *)this + 7956) |= *(_BYTE *)a2;
    *((_BYTE *)this + 7957) |= *((_BYTE *)a2 + 1);
    *((_BYTE *)this + 7958) |= *((_BYTE *)a2 + 2);
    *((_BYTE *)this + 7959) |= *((_BYTE *)a2 + 3);
    *((_BYTE *)this + 7960) |= *((_BYTE *)a2 + 4);
    goto LABEL_5;
  }
  v15 = *((unsigned __int8 *)this + 7956);
  v16 = *(void (__fastcall **)(CDeviceTextureTarget *__hidden, bool))(*(_QWORD *)v23 + 168LL);
  if ( v16 == CDeviceTextureTarget::SetProtected )
    CDeviceTextureTarget::SetProtected(v23, v15);
  else
    v16(v23, v15);
  v17 = *((unsigned __int8 *)this + 7959);
  v18 = *(void (__fastcall **)(CDeviceTextureTarget *__hidden, bool))(*(_QWORD *)v23 + 184LL);
  if ( v18 == CDeviceTextureTarget::SetBlackedOutForReadback )
    CDeviceTextureTarget::SetBlackedOutForReadback(v23, v17);
  else
    v18(v23, v17);
  v19 = *((_BYTE *)this + 7960);
  if ( !v19 && !*((_BYTE *)this + 7957) )
  {
    v20 = *((_QWORD *)this + 1);
    v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL);
    if ( (char *)v21 == (char *)CDeviceTextureTarget::SetDisplayId )
      CDeviceTextureTarget::SetDisplayId(v20, 0xFFFFFFFFLL);
    else
      v21(v20, 0xFFFFFFFFLL);
  }
  v22 = *(void (__fastcall **)(CDeviceTextureTarget *__hidden, bool))(*(_QWORD *)v23 + 200LL);
  if ( v22 == CDeviceTextureTarget::SetBlackedOutForMonitor )
    CDeviceTextureTarget::SetBlackedOutForMonitor(v23, v19);
  else
    v22(v23, v19);
  v4 = v23;
  if ( !a3 )
  {
    *((_DWORD *)this + 1989) = *(_DWORD *)a2;
    *((_BYTE *)this + 7960) = *((_BYTE *)a2 + 4);
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v4 + 16LL))(v4);
}
