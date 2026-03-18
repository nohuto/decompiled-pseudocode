/*
 * XREFs of MagpComposeDesktop @ 0x1C0020D9C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnCreate @ 0x1C026BF74 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026C0FC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C026C5DC (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C026C6DC (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C026C7F0 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

void __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // rdi
  void *v4; // rax
  __int64 *j; // rbx
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax

  if ( *(_QWORD *)(a2 + 240) )
  {
    v4 = (void *)ReferenceDwmApiPort();
    DwmAsyncMagnSetDesktopColorTransform(v4);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      if ( j[3] != -1 )
      {
        v6 = (void *)ReferenceDwmApiPort();
        DwmAsyncMagnCreate(v6);
        if ( (j[2] & 4) != 0 )
        {
          v7 = (void *)ReferenceDwmApiPort();
          DwmAsyncMagnSetWindowColorTransform(v7);
        }
        if ( (j[2] & 8) != 0 )
        {
          v8 = (void *)ReferenceDwmApiPort();
          DwmAsyncMagnSetWindowFilterList(v8);
        }
        if ( (j[2] & 0x10) != 0 )
        {
          v9 = (void *)ReferenceDwmApiPort();
          DwmAsyncMagnSetWindowSharedTextures(v9);
        }
      }
      *((_DWORD *)j + 4) &= ~0x20u;
    }
  }
}
