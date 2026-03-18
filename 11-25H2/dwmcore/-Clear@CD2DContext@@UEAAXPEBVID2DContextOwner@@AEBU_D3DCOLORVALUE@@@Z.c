/*
 * XREFs of ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800855A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-29h] BYREF
  int *v18; // [rsp+60h] [rbp-19h]
  int v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+6Ch] [rbp-Dh]
  int *v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  int *v24; // [rsp+80h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+Fh]
  int v26; // [rsp+8Ch] [rbp+13h]
  int *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  _BYTE v30[16]; // [rsp+A0h] [rbp+27h] BYREF

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 88);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 64);
    v10 = *(_DWORD *)(v6 + 60);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v13;
    v16 = v9;
    v11 = *(_DWORD *)(v6 + 56);
    v21 = &v14;
    v24 = &v15;
    v27 = &v16;
    v15 = v10;
    v12 = *(_DWORD *)(v6 + 52);
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v14 = v11;
    v13 = v12;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, "(", v7, 5LL, v17);
  }
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 200LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 200LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_CLEAREVENT_Stop,
      v8,
      1LL,
      v30);
}
