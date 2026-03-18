/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x14018D304
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x14022AC48 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x14018D3F4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        HWND *a5,
        HWND *a6)
{
  struct tagWND *result; // rax
  struct tagWND *v12; // rdi
  struct tagWND *v13; // rax

  result = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  v12 = result;
  if ( result )
  {
    if ( *a6 )
      v13 = (struct tagWND *)_HMObjectFromHandle(*a6);
    else
      v13 = 0LL;
    if ( TrackBackground(a1, v12, a2, a3, a4, v13) )
    {
      *a6 = *(HWND *)a1;
    }
    else
    {
      if ( ((*(_BYTE *)(*((_QWORD *)v12 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)v12 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
        a5 = a6;
      if ( *a5 )
        *((_QWORD *)a1 + 1) = *a5;
      *a5 = *(HWND *)a1;
    }
    return v12;
  }
  return result;
}
