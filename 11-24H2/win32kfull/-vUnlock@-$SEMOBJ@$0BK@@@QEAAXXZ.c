/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BK@@@QEAAXXZ @ 0x1401C3FF8
 * Callers:
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x1403041D8 (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140304554 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJ<26>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v3; // rax
  bool v4; // zf

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"NetworkedFontFile", *a1);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      v4 = (*(_QWORD *)v3 & 0xFFFFFFFFFBFFFFFFuLL) == 0;
      *(_QWORD *)v3 &= ~0x4000000uLL;
      if ( v4 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}
