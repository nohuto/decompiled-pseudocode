/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140103AA8
 * Callers:
 *     xxxCloseClipboard @ 0x14003D880 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026A570 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x14010454C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _ConvertMemHandle @ 0x1401EF21C (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402B21FC (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  struct tagCLIP *ClipFormat; // r14
  struct tagCLIP *v3; // rsi
  struct tagCLIP *v4; // rax
  struct tagCLIP *v5; // rbp
  struct tagCLIP *v6; // rbx
  struct tagCLIP *v7; // rbp
  struct tagCLIP *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagCLIP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagCLIP *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1u, 1u);
  v3 = FindClipFormat(a1, 7u, 1u);
  v4 = FindClipFormat(a1, 0xDu, 1u);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 0x10u, 1u) )
    {
      v16 = *((_QWORD *)PtiCurrent(v13, v12) + 60);
      if ( v16 )
      {
        v21 = *(unsigned __int16 *)(v16 + 40);
        v17 = (void *)ConvertMemHandle(&v21, 4LL);
        v18 = (__int64)v17;
        if ( v17 )
        {
          if ( !(unsigned int)InternalSetClipboardData(a1, 0x10u, v17, 0, 1) )
          {
            LOBYTE(v19) = 6;
            v20 = HMValidateHandleNoRip(v18, v19);
            if ( v20 )
              HMUnlockDestroyObject(v20);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData(a1, 1u, (void *)1, 0, 1);
    if ( !v3 )
      InternalSetClipboardData(a1, 7u, (void *)1, 0, 1);
    if ( !v5 )
      InternalSetClipboardData(a1, 0xDu, (void *)1, 0, 1);
  }
  if ( !FindClipFormat(a1, 3u, 1u) )
  {
    v14 = FindClipFormat(a1, 0xEu, 1u);
    if ( v14 )
    {
      v15 = 3;
LABEL_29:
      InternalSetClipboardData(a1, v15, (void *)((*((_QWORD *)v14 + 1) != 0LL) + 3LL), 0, 1);
      goto LABEL_6;
    }
  }
  if ( !FindClipFormat(a1, 0xEu, 1u) )
  {
    v14 = FindClipFormat(a1, 3u, 1u);
    if ( v14 )
    {
      v15 = 14;
      goto LABEL_29;
    }
  }
LABEL_6:
  v6 = FindClipFormat(a1, 2u, 1u);
  v7 = FindClipFormat(a1, 8u, 1u);
  v8 = FindClipFormat(a1, 0x11u, 1u);
  v11 = v8;
  if ( !v6 )
  {
    if ( !v7 && !v8 )
      return;
    InternalSetClipboardData(a1, 2u, (void *)2, 0, 1);
  }
  if ( !v7 )
    InternalSetClipboardData(a1, 8u, (void *)2, 0, 1);
  if ( !v11 )
    InternalSetClipboardData(a1, 0x11u, (void *)2, 0, 1);
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 7004LL) & 1) != 0
    && !FindClipFormat(a1, 9u, 1u) )
  {
    if ( v7 || v11 )
      InternalSetClipboardData(a1, 9u, (void *)2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
