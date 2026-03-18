/*
 * XREFs of ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026A570
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1402011B0 (xxxSetProcessWindowStation.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140103AA8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140104018 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B2BE8 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

void __fastcall xxxDisownClipboard(struct tagWND *a1, __int64 a2)
{
  struct tagWINDOWSTATION *v3; // rax
  struct tagWINDOWSTATION *v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdx
  _OWORD *v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = CheckClipboardAccess((__int64)a1, a2);
  v4 = v3;
  if ( v3 )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v13, v3);
    xxxSendClipboardMessage(v4, 0x306u);
    v5 = *((_QWORD *)v4 + 16);
    v6 = 0;
    v7 = *((unsigned int *)v4 + 34);
    v8 = (_OWORD *)v5;
    v9 = 0;
    while ( (_DWORD)v7 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      v7 = (unsigned int)(v7 - 1);
      if ( v10 && (v10 != 1 || v6) )
      {
        ++v9;
        *v8 = *(_OWORD *)v5;
        v8[1] = *(_OWORD *)(v5 + 16);
        v8 += 2;
        if ( *(_QWORD *)(v5 + 8) != 1LL && *(_DWORD *)v5 <= 0xDu )
        {
          v11 = 8322;
          if ( _bittest(&v11, *(_DWORD *)v5) )
            v6 = 1;
        }
      }
      v5 += 32LL;
    }
    if ( a1 == *((struct tagWND **)v4 + 14) )
      HMAssignmentUnlock((char *)v4 + 112);
    if ( v9 != *((_DWORD *)v4 + 34) )
    {
      *((_DWORD *)v4 + 16) |= 0x40u;
      ++*((_DWORD *)v4 + 36);
    }
    v12 = *((_DWORD *)v4 + 16);
    *((_DWORD *)v4 + 34) = v9;
    if ( (v12 & 0x40) != 0 )
    {
      xxxDrawClipboard(v4, v7);
      MungeClipData(v4);
    }
    if ( a1 == *((struct tagWND **)v4 + 14) )
      HMAssignmentUnlock((char *)v4 + 112);
    if ( v13[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v13, v7);
  }
}
