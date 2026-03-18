/*
 * XREFs of ?ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z @ 0x1802BD6C0
 * Callers:
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0txqqxqx_EventWriteTransfer @ 0x1802BD904 (McTemplateU0txqqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall CD3DDevice::CDelayUnpin::ReadyToUnpin(
        CD3DDevice::CDelayUnpin *this,
        struct _LUID a2,
        int a3,
        unsigned int a4)
{
  char v4; // si
  char v5; // r14
  char v6; // r15
  DWORD LowPart; // ebx
  unsigned __int8 v9; // bp
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  char v11; // r12
  _DWORD *v12; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  struct _LUID v16; // [rsp+98h] [rbp+10h]

  v16 = a2;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  LowPart = a2.LowPart;
  v9 = 0;
  if ( *((_QWORD *)this + 1) == a2 && *((_DWORD *)this + 4) == a3 )
  {
    if ( a4 >= *((_DWORD *)this + 5) || !a4 )
      v9 = 1;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
      v15 = 0LL;
      v11 = -1;
      if ( (**v10)(v10, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v15) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 264LL))(v15);
      }
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      {
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, v14);
        McTemplateU0txqqxqx_EventWriteTransfer(*v12, *v12, v9, LowPart, v6, v5, *v12, v11, v4);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    }
  }
  return v9;
}
