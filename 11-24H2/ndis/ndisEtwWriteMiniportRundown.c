/*
 * XREFs of ndisEtwWriteMiniportRundown @ 0x140096F84
 * Callers:
 *     McGenControlCallbackV2 @ 0x140077F50 (McGenControlCallbackV2.c)
 * Callees:
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001A38 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ndisEtwCaptureMiniportDriverData @ 0x1400967F8 (ndisEtwCaptureMiniportDriverData.c)
 *     ndisEtwCaptureMiniportEventLog @ 0x1400969B0 (ndisEtwCaptureMiniportEventLog.c)
 *     ndisEtwCaptureMiniportFilterList @ 0x140096AE0 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x140096C84 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140096DDC (ndisEtwCaptureMiniportProtocolList.c)
 *     McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer @ 0x1400977C8 (McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x140166FF0 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x140167030 (-UnlockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisEtwWriteMiniportRundown(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // r15d
  KIRQL v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  _DEVICE_OBJECT *v10; // rcx
  int v11; // ebx
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  char v15; // bl
  char v16; // r15
  KIRQL NewIrql[2]; // [rsp+130h] [rbp-80h] BYREF
  __int16 v18; // [rsp+132h] [rbp-7Eh]
  unsigned __int16 v19; // [rsp+134h] [rbp-7Ch]
  unsigned __int16 v20; // [rsp+136h] [rbp-7Ah]
  __int16 v21; // [rsp+138h] [rbp-78h]
  int v22; // [rsp+13Ch] [rbp-74h]
  int v23; // [rsp+140h] [rbp-70h]
  int v24; // [rsp+144h] [rbp-6Ch]
  int v25; // [rsp+148h] [rbp-68h]
  int v26; // [rsp+14Ch] [rbp-64h]
  int v27; // [rsp+150h] [rbp-60h]
  int v28; // [rsp+154h] [rbp-5Ch]
  int v29; // [rsp+158h] [rbp-58h]
  int v30; // [rsp+15Ch] [rbp-54h]
  int v31; // [rsp+160h] [rbp-50h]
  int v32; // [rsp+164h] [rbp-4Ch]
  _QWORD *v33; // [rsp+168h] [rbp-48h] BYREF
  _QWORD *v34; // [rsp+170h] [rbp-40h] BYREF
  _QWORD *v35; // [rsp+178h] [rbp-38h] BYREF
  __int64 v36; // [rsp+180h] [rbp-30h] BYREF
  __int64 v37; // [rsp+188h] [rbp-28h]
  __int64 v38; // [rsp+190h] [rbp-20h] BYREF
  __int64 v39; // [rsp+198h] [rbp-18h]
  _QWORD v40[2]; // [rsp+1A0h] [rbp-10h] BYREF
  _QWORD v41[2]; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v42; // [rsp+1C0h] [rbp+10h]
  __int64 v43; // [rsp+1C8h] [rbp+18h] BYREF
  const wchar_t *v44; // [rsp+1D0h] [rbp+20h]
  const wchar_t *v45; // [rsp+1D8h] [rbp+28h]
  const wchar_t *v46; // [rsp+1E0h] [rbp+30h]
  const wchar_t *v47; // [rsp+1E8h] [rbp+38h]
  const wchar_t *v48; // [rsp+1F0h] [rbp+40h]
  __int64 v49; // [rsp+1F8h] [rbp+48h]
  __int64 v50[2]; // [rsp+200h] [rbp+50h] BYREF

  v1 = 0LL;
  v41[0] = 0LL;
  v41[1] = 0LL;
  v40[0] = 0LL;
  v40[1] = 0LL;
  v22 = 4;
  v3 = 0;
  v21 = 4;
  v20 = 4;
  v19 = 4;
  v18 = 4;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v43 = 0LL;
  *(_OWORD *)v50 = 0LL;
  v48 = L"NULL";
  v47 = L"NULL";
  v46 = L"NULL";
  v45 = L"NULL";
  v44 = L"NULL";
  NewIrql[0] = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
  v4 = NewIrql[0];
  v25 = *(_DWORD *)(a1 + 4416);
  v24 = *(_DWORD *)(a1 + 4420);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  v5 = *(_QWORD *)(a1 + 3856);
  v23 = *(_DWORD *)(a1 + 4424);
  if ( v5 )
  {
    LOWORD(v22) = *(_WORD *)v5 >> 1;
    v48 = *(const wchar_t **)(v5 + 8);
  }
  v6 = *(_QWORD *)(a1 + 3760);
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 488);
    v8 = *(const wchar_t **)(v6 + 496);
    v21 = v7 >> 1;
    v47 = v8;
  }
  v9 = *(_QWORD *)(a1 + 4472);
  if ( v9 )
    v3 = ndisEtwCaptureMiniportEventLog(v9, (__int64)v41, &v43);
  v10 = *(_DEVICE_OBJECT **)(a1 + 3832);
  if ( v10 )
  {
    v11 = ndisEtwCaptureMiniportMatchingHardwareId(v10, (__int64)&v36);
    v3 |= v11 | ndisEtwCaptureMiniportDriverData(
                  *(PDEVICE_OBJECT *)(a1 + 3832),
                  (void **)&v35,
                  (void **)&v34,
                  (void **)&v33,
                  v50);
    if ( v35 )
    {
      v12 = (const wchar_t *)v35[1];
      v20 = *(_WORD *)v35 >> 1;
      v46 = v12;
    }
  }
  if ( v34 )
  {
    v13 = (const wchar_t *)v34[1];
    v19 = *(_WORD *)v34 >> 1;
    v45 = v13;
  }
  if ( v33 )
  {
    v14 = (const wchar_t *)v33[1];
    v18 = *(_WORD *)v33 >> 1;
    v44 = v14;
  }
  Ndis::BindEngine::LockBindings((Ndis::BindEngine *)(a1 + 5120));
  v15 = ndisEtwCaptureMiniportFilterList(a1, (__int64)v40);
  v16 = v15 | ndisEtwCaptureMiniportProtocolList(a1, (__int64)&v38) | v3;
  Ndis::BindEngine::UnlockBindings((Ndis::BindEngine *)(a1 + 5120));
  if ( (byte_14011B106 & 8) != 0 )
  {
    if ( HIDWORD(v38) )
      v42 = v39;
    else
      v42 = 0LL;
    v26 = *(_DWORD *)(a1 + 4068);
    v27 = *(_DWORD *)(a1 + 4064);
    v28 = *(_DWORD *)(a1 + 4060);
    v29 = *(_DWORD *)(a1 + 2684);
    v30 = *(_DWORD *)(a1 + 124);
    v31 = *(_DWORD *)(a1 + 120);
    v49 = *(_QWORD *)(a1 + 4024);
    v32 = *(_DWORD *)(a1 + 4056);
    if ( HIDWORD(v36) )
      v1 = v37;
    McTemplateK0wzqwwwwyjqxqqqqqqqqqqNR20mqNR23qNR25_EtwWriteTransfer(
      v19,
      v20,
      a1 + 4008,
      (unsigned __int16)v22,
      (__int64)v48,
      v1,
      v16,
      v21,
      (__int64)v47,
      v20,
      (__int64)v46,
      v19,
      (__int64)v45,
      v18,
      (__int64)v44,
      (__int64)v50,
      a1 + 4008,
      v32,
      v49,
      v31,
      v30,
      v29,
      v28,
      v27,
      v26,
      v25,
      v24,
      v23,
      HIDWORD(v41[0]));
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v33, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v34, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v35, 0LL);
  Rtl::KArray<wchar_t,1>::reset((__int64)&v36);
  Rtl::KArray<wchar_t,1>::reset((__int64)&v38);
  Rtl::KArray<wchar_t,1>::reset((__int64)v40);
  Rtl::KArray<wchar_t,1>::reset((__int64)v41);
}
