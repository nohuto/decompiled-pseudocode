/*
 * XREFs of ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1402B3E6C
 * Callers:
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1402B3C10 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1401F7BE4 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1401F7C44 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x140208768 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14026334C (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<24576,96>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rsi
  __int64 Pool2; // rax
  PVOID *v5; // rbx

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x6000);
  a1[2] = Section;
  if ( Section && NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x6000) >= 0 )
  {
    v3 = (__int64)a1[3];
    Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v5 = (PVOID *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_DWORD *)(Pool2 + 36) = 0;
      if ( NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize((_QWORD *)Pool2, v3) )
      {
LABEL_7:
        a1[4] = v5;
        return v5 != 0LL;
      }
      NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v5);
    }
    v5 = 0LL;
    goto LABEL_7;
  }
  return 0;
}
