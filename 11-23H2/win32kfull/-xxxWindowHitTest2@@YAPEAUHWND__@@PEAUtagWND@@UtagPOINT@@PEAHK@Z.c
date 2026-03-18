/*
 * XREFs of ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072DBC
 * Callers:
 *     xxxWindowFromPoint @ 0x1C0062EB8 (xxxWindowFromPoint.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072F90 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E535C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C001277C (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072F90 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0073520 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0073620 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     SizeBoxHwnd @ 0x1C024AF20 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxWindowHitTest2(struct tagWND *a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  HWND v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  struct tagPOINT v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  v19 = 0LL;
  v7 = a1;
  v18 = 0LL;
  if ( !a1
    || !(unsigned int)IsCompositionInputWindow(a1) && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0
    || !(unsigned int)IsCompositionInputWindow(v7)
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)v7 + 5) + 88LL, a2)
    || tagWND::PtOutsideClipRgnOrMaxClip(v7, &v20)
    || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v7) && (a4 & 1) != 0 )
  {
    v13 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v13 + 31) & 0xC0) != 0x40 )
    {
      v14 = -2;
      goto LABEL_16;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) )
  {
    v8 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v8 + 104, a2) )
      {
        ThreadLock(*((_QWORD *)v7 + 14), &v18);
        v9 = xxxWindowHitTest(*((struct tagWND **)v7 + 14), a2, a3, a4);
        ThreadUnlock1(v11, v10, v12);
        if ( v9 )
          return v9;
      }
    }
  }
  LODWORD(v13) = IsCompositionInputWindow(v7);
  if ( (_DWORD)v13 || (LODWORD(v13) = gptiCurrent, *((_QWORD *)v7 + 2) != gptiCurrent) )
  {
    v14 = 1;
    goto LABEL_16;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v13) = xxxSendTransformableMessageTimeout((ULONG_PTR)v7, 0, 0, 0LL, 1, 0);
  v14 = v13;
  if ( (_DWORD)v13 == -1 )
    return 0LL;
LABEL_16:
  if ( a3 )
    *a3 = v14;
  v15 = *((_QWORD *)v7 + 5);
  LOBYTE(v13) = ~*(_BYTE *)(v15 + 26);
  if ( v14 == (((unsigned int)v13 >> 6) & 1 | 0x10) && (*(_BYTE *)(v15 + 30) & 4) == 0 )
  {
    v17 = SizeBoxHwnd(v7);
    if ( v17 )
      v7 = (struct tagWND *)v17;
  }
  return *(HWND *)v7;
}
