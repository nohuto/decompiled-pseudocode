/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800201D4
 * Callers:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180030750 (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x18003BF64 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$5 @ 0x18004ABA2 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$5.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$1 @ 0x18004B1AE (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$1.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180020244 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
