/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401A1708
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1401A17B4 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     EngFntCacheAllocInternal @ 0x1402687A8 (EngFntCacheAllocInternal.c)
 *     EngFntCacheFault @ 0x140302EF0 (EngFntCacheFault.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  size_t v8; // rsi
  _QWORD *v9; // rax
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a2;
  Win32ProbeForRead(a1, a2, 1u);
  if ( a2 >= 0xFFFFFFF0 )
    return 0;
  v11[0] = 0;
  v9 = (_QWORD *)EngFntCacheAllocInternal(a3, a2 + 16, v11);
  if ( v11[0] )
    return 0;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *(_DWORD *)v9 = a4;
    memmove(v9 + 2, a1, v8);
  }
  return 1;
}
