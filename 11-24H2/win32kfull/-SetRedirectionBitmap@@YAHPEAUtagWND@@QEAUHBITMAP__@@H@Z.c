/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4
 * Callers:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402852E4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreAccNotifyWindow @ 0x14002AAC0 (GreAccNotifyWindow.c)
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(void **a1, Gre::Base *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  Gre::Base **Prop; // rdi
  Gre::Base *v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdi

  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = (Gre::Base **)GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  if ( !Prop && !a3 )
  {
    Prop = (Gre::Base **)Win32AllocPoolZInit(48LL, 1919185493LL);
    if ( Prop )
    {
      v13 = W32GetUserSessionState(v9, v8);
      if ( !(unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(v13 + 41422), (__int64)Prop, 1u) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v6;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    if ( *Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v14 = W32GetUserSessionState(v9, v8);
    v15 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v14 + 41422), 1u);
    v16 = (void *)v15;
    if ( v15 )
    {
      v11 = *(Gre::Base **)v15;
      DeleteMaybeSpecialRgn(*(_QWORD *)(v15 + 40));
      Win32FreePool(v16);
LABEL_6:
      if ( v11 )
        GreAccNotifyWindow(v11, 0LL);
    }
  }
  else if ( Prop )
  {
    v11 = *Prop;
    *Prop = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
