/*
 * XREFs of NtUserSetInformationThread @ 0x140106950
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE Src[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  memset(Src, 0, 32);
  EnterCrit(0LL, 0LL);
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v7) + 40);
  if ( PsGetCurrentProcess() == v8 || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v10 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        ProbeForRead(a3, v4, 4u);
        memmove(Src, (const void *)a3, v4);
      }
      v10 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove((void *)a3, Src, v4);
      }
    }
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
