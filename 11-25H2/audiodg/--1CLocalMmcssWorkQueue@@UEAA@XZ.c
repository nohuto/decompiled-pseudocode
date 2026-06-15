/*
 * XREFs of ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14004443C
 * Callers:
 *     ??_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z @ 0x140044400 (--_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x1400444C0 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 */

void __fastcall CLocalMmcssWorkQueue::~CLocalMmcssWorkQueue(CLocalMmcssWorkQueue *this)
{
  bool v1; // zf
  DWORD v3; // ecx
  HRESULT v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &CLocalMmcssWorkQueue::`vftable';
  if ( !v1 )
  {
    v5 = CLocalMmcssWorkQueue::UnRegisterWorkQueueWithMmcss(this);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    v4 = RtwqUnlockWorkQueue(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x131,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
