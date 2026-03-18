/*
 * XREFs of ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011A0C4
 * Callers:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119414 (-Create@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x140119654 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1401198C4 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ @ 0x140119988 (-Initialize@-$CSectionEntry@$0BKAAA@$0BKA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x140119B28 (-Initialize@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x140119FA0 (-Initialize@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x14011A064 (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011A2F8 (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C3B9C (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x14023E84C (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformCreateSection(NSInstrumentation *this)
{
  __int64 v1; // rbx
  int v2; // edi
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+5Ch] [rbp+14h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = (int)this;
  v5 = 0;
  v4 = (int)this;
  Object = 0LL;
  if ( (unsigned int)MmCreateSection(&Object, 983071LL, 0LL, &v4, 4, 0x4000000, 0LL, 0LL) || v4 == v2 && !v5 )
    return Object;
  ObfDereferenceObject(Object);
  return (PVOID)v1;
}
