/*
 * XREFs of ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001CF4C
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180018B40 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDuckingManager::UnregisterSession(CDuckingManager *this, struct IAudioSessionInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v5; // r8
  __int64 ***v6; // rcx
  __int64 *v7; // rax
  __int64 **v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v11; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v5 = 0LL;
  v6 = (__int64 ***)((char *)this + 64);
  v12 = &v11;
  v7 = (__int64 *)*((_QWORD *)this + 8);
  v11 = 0LL;
  if ( v7 )
  {
    do
    {
      if ( (struct IAudioSessionInfo *)v7[1] == a2 )
      {
        v8 = *v6;
        v7 = **v6;
        *v8 = 0LL;
        *v6 = (__int64 **)v7;
        *v12 = v8;
        v12 = v8;
      }
      else
      {
        v6 = (__int64 ***)v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( v7 );
    v5 = v11;
  }
  if ( v5 )
  {
    do
    {
      v9 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
      v5 = v9;
    }
    while ( v9 );
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
