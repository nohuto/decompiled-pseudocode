/*
 * XREFs of ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119414
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140068780 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x140118C04 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118FA8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011A0C4 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14011A150 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401C09A4 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<81920,320>::Create()
{
  _QWORD *Pool2; // rax
  unsigned int v1; // edx
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  NSInstrumentation *Section; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    v3 = Pool2 + 3;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x14000, v1);
    v2[2] = Section;
    if ( Section )
    {
      if ( (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, v3, (void **)0x14000, v5) >= 0 )
      {
        v6 = NSInstrumentation::CSectionBitmapAllocator<81920,320>::Create(*v3);
        v2[4] = v6;
        if ( v6 )
          return v2;
      }
    }
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v2);
  }
  return 0LL;
}
