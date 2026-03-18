/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318
 * Callers:
 *     Win32AllocPagedLookasideList @ 0x140079250 (Win32AllocPagedLookasideList.c)
 *     InitSmartObjectRefLookaside @ 0x1400792B0 (InitSmartObjectRefLookaside.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x140079624 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?Initialize@ScanLookAsideList@@QEAA_NXZ @ 0x14019D14C (-Initialize@ScanLookAsideList@@QEAA_NXZ.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401BF24C (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 *     InitQEntryLookaside @ 0x1402E542C (InitQEntryLookaside.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x140079430 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140151C9C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 */

_BYTE *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CPointerHashTable **this,
        SIZE_T Size,
        unsigned int a3,
        unsigned int a4,
        USHORT Depth)
{
  unsigned __int64 Tag; // rbp
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  Tag = a4;
  if ( *(_DWORD *)this == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
            (NSInstrumentation::CLeakTrackingAllocator *)this,
            a4) )
      return 0LL;
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(this[1], Tag);
  }
  v9 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)this,
         0x40uLL,
         0x90uLL,
         a3);
  v10 = v9;
  if ( v9 )
  {
    v12 = 0LL;
    *(_DWORD *)v9 = Tag;
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this != 1 )
      {
        if ( *(_DWORD *)this == 2 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                 (NSInstrumentation::CLeakTrackingAllocator *)this,
                 Tag,
                 &v12) )
          {
            Size += 16LL;
            v10[4] = v12;
            v10[5] = 1;
          }
          else
          {
            v10[5] = 0;
          }
        }
        goto LABEL_6;
      }
      Size += 16LL;
    }
    v9[5] = 0;
LABEL_6:
    ExInitializePagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(v10 + 16),
      lambda_4cf05917044c6be20516fdcd53e82ac0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_,
      lambda_b5ab72610ca6305d588698d100652821_::_lambda_invoker_cdecl__void___,
      0x220u,
      Size,
      Tag,
      Depth);
    return v10;
  }
  return 0LL;
}
