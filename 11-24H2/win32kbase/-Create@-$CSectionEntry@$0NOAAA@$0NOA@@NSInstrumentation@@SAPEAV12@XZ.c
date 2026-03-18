/*
 * XREFs of ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14011A2F8
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140088C24 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ @ 0x140119A4C (-Initialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118FA8 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1401190C4 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011A0C4 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14011A150 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<909312,3552>::Create()
{
  _QWORD *Pool2; // rax
  _QWORD *v1; // rbx
  __int64 *v2; // rdi
  NSInstrumentation *Section; // rax
  void *v4; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    v2 = Pool2 + 3;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xDE000);
    v1[2] = Section;
    if ( Section )
    {
      if ( NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)v2, (void **)0xDE000) >= 0 )
      {
        v4 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create(*v2);
        v1[4] = v4;
        if ( v4 )
          return v1;
      }
    }
    NSInstrumentation::CSectionEntry<49152,192>::Destroy(v1);
  }
  return 0LL;
}
