/*
 * XREFs of ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801DC010
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+38h] [rbp-41h] BYREF
  int v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-29h] BYREF
  int *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  int *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]
  int *v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp+27h] BYREF

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v7 = *((_DWORD *)this + 88);
  v8 = 0LL;
  if ( v7 )
  {
    v5 = (unsigned int)(v7 - 1);
    v8 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v5);
  }
  CD2DContext::EnsureBeginDraw(this, v5, v6);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v11 = *(_DWORD *)(v8 + 64);
    v12 = *(_DWORD *)(v8 + 60);
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v20 = &v15;
    v18 = v11;
    v13 = *(_DWORD *)(v8 + 56);
    v23 = &v16;
    v26 = &v17;
    v29 = &v18;
    v17 = v12;
    v14 = *(_DWORD *)(v8 + 52);
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v16 = v13;
    v15 = v14;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_CLEAREVENT_Start,
      v9,
      5u,
      &v19);
  }
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v8 + 16) + 200LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v8 + 16) + 200LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_CLEAREVENT_Stop,
      v10,
      1u,
      &v32);
}
