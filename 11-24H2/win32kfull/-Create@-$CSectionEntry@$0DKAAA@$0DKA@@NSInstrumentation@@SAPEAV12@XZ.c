/*
 * XREFs of ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14030E038
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401C7978 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ @ 0x1402206B8 (-Initialize@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1401F7BE4 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1401F7C44 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14020176C (-Initialize@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402632C0 (-Destroy@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14026334C (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

_QWORD *NSInstrumentation::CSectionEntry<237568,928>::Create()
{
  _QWORD *Pool2; // rax
  _QWORD *v1; // rbx
  PVOID *v2; // rdi
  NSInstrumentation *Section; // rax
  PVOID v4; // rsi
  __int64 v5; // rax
  PVOID *v6; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  v2 = (PVOID *)(Pool2 + 3);
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x3A000);
  v1[2] = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, v2, (void **)0x3A000) < 0 )
  {
LABEL_8:
    NSInstrumentation::CSectionEntry<36864,144>::Destroy(v1);
    return 0LL;
  }
  v4 = *v2;
  v5 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
  v6 = (PVOID *)v5;
  if ( !v5 )
  {
LABEL_7:
    v1[4] = 0LL;
    goto LABEL_8;
  }
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  if ( !NSInstrumentation::CSectionBitmapAllocator<237568,928>::Initialize((_QWORD *)v5, (__int64)v4) )
  {
    NSInstrumentation::CSectionBitmapAllocator<24576,96>::Destroy(v6);
    goto LABEL_7;
  }
  v1[4] = v6;
  return v1;
}
