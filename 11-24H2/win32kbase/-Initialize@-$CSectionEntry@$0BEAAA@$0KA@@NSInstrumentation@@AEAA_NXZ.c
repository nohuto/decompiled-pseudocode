/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x140119B28
 * Callers:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119924 (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x140119B88 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011A0C4 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14011A150 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<81920,160>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x14000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x14000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
