/*
 * XREFs of ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EF4AC
 * Callers:
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800EA6FC (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800EABB8 (--1ResourceGroupInstance@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800433B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800EC93C (-EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV-$function@$$A6A_NV-$basic_string@GU-$char_traits@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceGroupInstance::SetAssignedResourceGroup(ResourceGroupInstance *this, int a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(); // rdx
  __int128 v9; // [rsp+20h] [rbp-E0h]
  GUID v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+44h] [rbp-BCh]
  __int64 (__fastcall **v13)(); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall ***v15)(); // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h] BYREF
  char v17[524]; // [rsp+94h] [rbp-6Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  memset_0(v17, 0, 0x200uLL);
  v16 = a2;
  v4 = StringCchCopyW(v17, 256LL, (char *)this + 32);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v10 = GUID_d0b305e1_b2cc_484c_8f23_e5d28ad9cf88;
    v11 = 0;
    v12 = 2;
    *(_QWORD *)&v9 = &v10;
    *((_QWORD *)&v9 + 1) = &v16;
    v13 = off_18017C508;
    v14 = v9;
    v15 = &v13;
    EndpointInfo::EnumerateInterfaces((__int64)this + 544, (unsigned __int16 *)&v13, v5);
    if ( v15 )
    {
      v8 = &v13;
      LOBYTE(v8) = v15 != &v13;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v15)[4])(v15, v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
}
