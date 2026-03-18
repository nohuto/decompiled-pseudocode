/*
 * XREFs of ?MagnifierRenderTargetUpdate@CChannel@@UEAAJIAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18026E640
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetUpdate(
        CChannel *this,
        unsigned int a2,
        const struct MAGN_ADAPTERTEXTURES *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ebx
  _BYTE v20[8]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-F0h]
  int v22; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-E4h] BYREF
  __int128 v24; // [rsp+38h] [rbp-E0h]
  __int128 v25; // [rsp+48h] [rbp-D0h]
  __int128 v26; // [rsp+58h] [rbp-C0h]
  __int128 v27; // [rsp+68h] [rbp-B0h]
  __int128 v28; // [rsp+78h] [rbp-A0h]
  __int128 v29; // [rsp+88h] [rbp-90h]
  __int128 v30; // [rsp+98h] [rbp-80h]
  __int128 v31; // [rsp+A8h] [rbp-70h]
  __int128 v32; // [rsp+B8h] [rbp-60h]
  __int128 v33; // [rsp+C8h] [rbp-50h]
  __int128 v34; // [rsp+D8h] [rbp-40h]
  __int128 v35; // [rsp+E8h] [rbp-30h]
  __int128 v36; // [rsp+F8h] [rbp-20h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v20, this);
  CChannel::CheckHandle((__int64)this, a2, 103);
  v22 = 230;
  memset_0(&v23, 0, 0xD4uLL);
  v6 = *(_OWORD *)a3;
  v23 = a2;
  v7 = *((_OWORD *)a3 + 1);
  v24 = v6;
  v8 = *((_OWORD *)a3 + 2);
  v25 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v26 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v27 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v28 = v10;
  v12 = *((_OWORD *)a3 + 6);
  v29 = v11;
  v30 = v12;
  v13 = *((_OWORD *)a3 + 7);
  a3 = (const struct MAGN_ADAPTERTEXTURES *)((char *)a3 + 128);
  v31 = v13;
  v14 = *((_OWORD *)a3 + 1);
  v32 = *(_OWORD *)a3;
  v15 = *((_OWORD *)a3 + 2);
  v33 = v14;
  v16 = *((_OWORD *)a3 + 3);
  v34 = v15;
  v17 = *((_OWORD *)a3 + 4);
  v35 = v16;
  v36 = v17;
  v18 = CChannel::SendCommand((struct CCommandBatch **)this, &v22, 0xD8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 80LL))(v21);
  return v18;
}
