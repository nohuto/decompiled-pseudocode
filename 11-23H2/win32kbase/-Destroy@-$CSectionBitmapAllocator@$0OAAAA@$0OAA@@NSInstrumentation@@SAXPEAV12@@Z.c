/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D1D48
 * Callers:
 *     ??1?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D1748 (--1-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D1C64 (-Create@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Destroy(PVOID *P)
{
  struct _RTL_BITMAP *v2; // rcx

  v2 = (struct _RTL_BITMAP *)((unsigned __int64)P[3] ^ (unsigned __int64)P[2]);
  if ( v2 )
    RtlFindSetBits(v2, 1u, 0);
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  if ( P[2] != P[3] )
    ExFreePoolWithTag((PVOID)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]), 0);
  ExFreePoolWithTag(P, 0);
}
