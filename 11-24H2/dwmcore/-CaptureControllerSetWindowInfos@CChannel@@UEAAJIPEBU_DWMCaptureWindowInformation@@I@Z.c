/*
 * XREFs of ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180261BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1801302E8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18013059C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801D2090 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetWindowInfos(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct _DWMCaptureWindowInformation *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v14, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 19);
  v12[0] = 497;
  v13 = 0;
  v8 = 32LL * a4;
  v12[1] = a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v10 = 2583LL;
  }
  else
  {
    v13 = 32 * a4;
    v9 = CChannel::BeginCommand(this, v12, 0xCu, v8);
    if ( v9 >= 0 )
    {
      CDataStreamWriter::AddItemData(this[22], a3, v13);
      CDataStreamWriter::EndItem(this[22]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
      return 0LL;
    }
    v10 = 2584LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
  return (unsigned int)v9;
}
