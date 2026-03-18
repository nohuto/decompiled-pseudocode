/*
 * XREFs of ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801D14A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801D1680 (-QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualTargetSetRoot(CChannel *this, unsigned int a2, unsigned int a3)
{
  int ResourceInterface; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rdx
  void *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v12; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  v10[0] = 0LL;
  ResourceInterface = CChannel::QueryResourceInterface(this, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v10);
  v6 = ResourceInterface;
  if ( ResourceInterface < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)ResourceInterface);
    if ( v12 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    return v6;
  }
  if ( a3 )
  {
    if ( v12 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    v7 = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = 1191LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v10);
      return v6;
    }
  }
  v7 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v10[0] + 24LL))(v10[0], v12);
  v6 = v7;
  if ( v7 < 0 )
  {
    v9 = 1194LL;
    goto LABEL_19;
  }
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  return 0LL;
}
