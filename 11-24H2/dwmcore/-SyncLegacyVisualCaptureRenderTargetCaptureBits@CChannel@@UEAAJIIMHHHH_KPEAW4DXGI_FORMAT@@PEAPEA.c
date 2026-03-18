/*
 * XREFs of ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180215250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x18012E1F0 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncLegacyVisualCaptureRenderTargetCaptureBits(
        __m128i *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        enum DXGI_FORMAT *a10,
        void **a11)
{
  __int64 v11; // rsi
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __m128i v20; // xmm1
  _DWORD v21[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11 = this[4].m128i_i64[0];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  CChannel::CheckHandle((__int64)this, a2, 98);
  CChannel::CheckHandle((__int64)this, a3, 184);
  v21[0] = 228;
  v23 = 0;
  v24 = 0;
  v21[4] = a5;
  v21[5] = a6;
  v21[6] = a7;
  v21[7] = a8;
  v22 = a9;
  v21[2] = a3;
  *(float *)&v21[3] = a4;
  v21[1] = a2;
  v15 = *a10;
  this[9] = 0LL;
  v23 = v15;
  this[10].m128i_i64[0] = 0LL;
  this[10].m128i_i32[2] = 0;
  v16 = CChannel::SendCommand((struct CCommandBatch **)this, v21, 0x30u);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 208LL;
    goto LABEL_4;
  }
  v16 = CChannel::SyncFlushInternal((CChannel *)this);
  v17 = v16;
  if ( v16 < 0 )
  {
    v18 = 211LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
    return v17;
  }
  v17 = this[10].m128i_u32[2];
  v20 = this[9];
  if ( (v17 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
    return v17;
  }
  *a10 = SHIDWORD(this[10].m128i_i64[0]);
  *a11 = (void *)_mm_srli_si128(v20, 8).m128i_u64[0];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
  return 0LL;
}
