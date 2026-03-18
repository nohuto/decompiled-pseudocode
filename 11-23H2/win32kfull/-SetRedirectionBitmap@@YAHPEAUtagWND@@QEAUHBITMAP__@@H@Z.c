/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC170 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BC6F0 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     GreAccNotifyWindow @ 0x1C00C293C (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi

  v5 = 0;
  Prop = (_QWORD *)GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomLayer, v10, 1u) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v5;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v11 = (__int64 *)InternalRemoveProp((__int64)a1, (unsigned __int16)atomLayer, 1u);
    v12 = v11;
    if ( v11 )
    {
      v8 = *v11;
      DeleteMaybeSpecialRgn(v11[5]);
      Win32FreePool(v12);
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  else if ( Prop )
  {
    v8 = *Prop;
    *Prop = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
