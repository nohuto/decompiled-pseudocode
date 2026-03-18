/*
 * XREFs of ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x140119654
 * Callers:
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401195F0 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140119034 (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x14011A0C4 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x14011A150 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14011A678 (-Initialize@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<24576,96>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rsi
  __int64 Pool2; // rax
  void *v7; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x6000, a2);
  a1[2] = Section;
  if ( Section && (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x6000, v4) >= 0 )
  {
    v5 = a1[3];
    Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v7 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_DWORD *)(Pool2 + 36) = 0;
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<24576,96>::Initialize(Pool2, v5) )
      {
LABEL_5:
        a1[4] = v7;
        return v7 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<81920,160>::Destroy(v7);
    }
    v7 = 0LL;
    goto LABEL_5;
  }
  return 0;
}
