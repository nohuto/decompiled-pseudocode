/*
 * XREFs of ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x18026ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x18021DCC0 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  _BYTE v12[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+48h] [rbp-28h]
  _DWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v18; // [rsp+58h] [rbp-18h]
  struct _LUID v19; // [rsp+60h] [rbp-10h]
  unsigned int v20; // [rsp+68h] [rbp-8h]
  int v21; // [rsp+6Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15 = 0LL;
  v16 = 0;
  v14 = 0LL;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  CChannel::CheckHandle((__int64)this, a2, 85);
  CChannel::CheckHandle((__int64)this, a5, 182);
  v17[0] = 162;
  v21 = 0;
  v17[1] = a2;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v9 = CChannel::SendSyncCommand(this, v17, 0x20u, (struct MIL_MESSAGE *)&v14);
  if ( v9 < 0 )
  {
    v10 = 1534LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    return (unsigned int)v9;
  }
  v9 = DWORD2(v14);
  if ( SDWORD2(v14) < 0 )
  {
    v10 = 1536LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  return 0LL;
}
