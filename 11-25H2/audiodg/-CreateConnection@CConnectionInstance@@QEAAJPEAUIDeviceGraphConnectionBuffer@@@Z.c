/*
 * XREFs of ?CreateConnection@CConnectionInstance@@QEAAJPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x14002FC38
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14002EE28 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14000E34C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::CreateConnection(
        CConnectionInstance *this,
        struct IDeviceGraphConnectionBuffer *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( !*(_DWORD *)this )
    return 0LL;
  v10 = 0LL;
  v13 = 0;
  v16 = 0;
  v12 = *((_DWORD *)this + 10);
  v15 = 1094927443;
  v14 = 0LL;
  if ( a2 )
    v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphConnectionBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
  else
    v11 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
  {
    v8 = *((_QWORD *)this + 4);
    if ( !v8 )
      goto LABEL_6;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, &v14);
    if ( v5 >= 0 )
      goto LABEL_6;
    v9 = 68LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &v14);
  if ( v5 < 0 )
  {
    v9 = 64LL;
    goto LABEL_15;
  }
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 6) + 48LL))(
         *((_QWORD *)this + 6),
         &v10,
         (char *)this + 8);
  v5 = v6;
  if ( v6 >= 0 )
  {
    if ( a2 )
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((__int64 *)this + 7, (__int64)a2);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v6);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v5;
}
