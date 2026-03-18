/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1400F48B0
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rbx
  int i; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = InternalBeginDeferWindowPos(*(unsigned int *)(a1 + 28));
  if ( v2 )
  {
    memmove(*(void **)(v2 + 40), *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v4 = *(_DWORD *)(a1 + 28);
    v5 = *(_QWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 28) = v4;
    for ( i = v4 - 1; i >= 0; --i )
    {
      if ( (*(_DWORD *)(v5 + 156) & 0x20) != 0 )
      {
        if ( *(_QWORD *)v5 )
        {
          LOBYTE(v3) = 1;
          v7 = HMValidateHandleNoSecure(*(_QWORD *)v5, v3);
          if ( v7 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL);
            if ( v8 != *(_QWORD *)(v5 + 128) )
              *(_QWORD *)(v5 + 128) = v8;
          }
        }
      }
      v5 += 168LL;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0LL);
  }
  Win32FreePool((void *)a1);
}
