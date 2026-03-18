/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400FFFB0
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B419C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400FFDC0 (UmfdTrueTypeFreeGlyphset.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400FFE44 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1401014D0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     UmfdDrvFree @ 0x1401019B0 (UmfdDrvFree.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x14033EF08 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1401013A4 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  NSInstrumentation::CPointerHashTable **v4; // rsi
  struct W32_PUSH_LOCK *v5; // rbx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  const void *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 28;
  v4 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(a1, a2, a3) + 104);
  v5 = v4[1];
  W32AcquirePushLockExclusive(v5);
  if ( (*(_DWORD *)v3)-- == 1 )
  {
    v7 = *v4;
    if ( *v4 )
    {
      v8 = (const void *)*((_QWORD *)v3 + 2);
      if ( v8 )
      {
        v9 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v7, v8, &v9);
      }
    }
    W32ReleasePushLockExclusive(v5);
    EngFreeMem(v3);
  }
  else
  {
    W32ReleasePushLockExclusive(v5);
  }
}
