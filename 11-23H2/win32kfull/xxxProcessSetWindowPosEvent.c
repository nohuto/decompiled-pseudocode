/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C008BDD8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C0045644 (InternalBeginDeferWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

void __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rsi
  __int64 v3; // rdx
  int v4; // eax
  _QWORD *v5; // rbx
  int i; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v4 = *(_DWORD *)(a1 + 28);
    v5 = v2[5];
    *((_DWORD *)v2 + 7) = v4;
    for ( i = v4 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v5 + 39) & 0x20) != 0 )
      {
        if ( *v5 )
        {
          LOBYTE(v3) = 1;
          v7 = HMValidateHandleNoSecure(*v5, v3);
          if ( v7 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL);
            if ( v8 != v5[16] )
              v5[16] = v8;
          }
        }
      }
      v5 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2);
  }
  Win32FreePool((void *)a1);
}
