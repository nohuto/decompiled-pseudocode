/*
 * XREFs of ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00D205C
 * Callers:
 *     ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D1CE4 (-Create@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C008E664 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C008E6E4 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D1C64 (-Create@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<917504,3584>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  void *v3; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xE0000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0xE0000) < 0 )
    return 0;
  v3 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v3;
  return v3 != 0LL;
}
