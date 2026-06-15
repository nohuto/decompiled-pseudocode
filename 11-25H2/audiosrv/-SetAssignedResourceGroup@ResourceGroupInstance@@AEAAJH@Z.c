/*
 * XREFs of ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EA5F4
 * Callers:
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800E62B0 (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800E676C (--1ResourceGroupInstance@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800E84EC (-EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV-$function@$$A6A_NV-$basic_string@GU-$char_traits@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceGroupInstance::SetAssignedResourceGroup(ResourceGroupInstance *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v7)(); // rdx
  __int128 v8; // [rsp+20h] [rbp-E0h]
  GUID v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+40h] [rbp-C0h]
  int v11; // [rsp+44h] [rbp-BCh]
  __int64 (__fastcall **v12)(); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall ***v14)(); // [rsp+88h] [rbp-78h]
  int v15; // [rsp+90h] [rbp-70h] BYREF
  char v16[524]; // [rsp+94h] [rbp-6Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  memset_0(v16, 0, 0x200uLL);
  v15 = a2;
  v4 = StringCchCopyW(v16, 256LL, (char *)this + 32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = GUID_d0b305e1_b2cc_484c_8f23_e5d28ad9cf88;
    v10 = 0;
    v11 = 2;
    *(_QWORD *)&v8 = &v9;
    *((_QWORD *)&v8 + 1) = &v15;
    v12 = off_180172350;
    v13 = v8;
    v14 = &v12;
    EndpointInfo::EnumerateInterfaces((__int64)this + 544, (__int64)&v12);
    if ( v14 )
    {
      v7 = &v12;
      LOBYTE(v7) = v14 != &v12;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v14)[4])(v14, v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
