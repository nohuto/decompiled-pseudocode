/*
 * XREFs of ?QueryWarpExtension@CD3DDevice@@AEAAJXZ @ 0x1801B2664
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801B1DA0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::QueryWarpExtension(CD3DDevice *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi

  if ( *((int *)this + 154) >= 40960 )
  {
    v2 = (__int64 *)((char *)this + 568);
    v3 = *((_QWORD *)this + 71);
    *v2 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( (int)WarpPalCreateExtensionFactory(*((_QWORD *)this + 69), v2) >= 0 )
    {
      v4 = *v2;
      v5 = *((_QWORD *)this + 72);
      *((_QWORD *)this + 72) = 0LL;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v4 + 24LL))(
        v4,
        &GUID_1c7f8606_c8dd_4240_8f6b_8387d09b4b69,
        (char *)this + 576);
      v6 = *v2;
      v7 = *((_QWORD *)this + 73);
      *((_QWORD *)this + 73) = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v6 + 24LL))(
        v6,
        &GUID_975ff2f7_89e8_4ace_9d4b_81152e450d39,
        (char *)this + 584);
      v8 = *v2;
      v9 = *((_QWORD *)this + 74);
      *((_QWORD *)this + 74) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v8 + 24LL))(
        v8,
        &GUID_79ea45a6_1cb4_4ce3_a279_9eba176d82d6,
        (char *)this + 592);
      v10 = *((_QWORD *)this + 75);
      v11 = *v2;
      *((_QWORD *)this + 75) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v11 + 24LL))(
        v11,
        &GUID_6d8dceda_a488_422a_86a8_972383d7ba69,
        (char *)this + 600);
    }
  }
  return 0LL;
}
