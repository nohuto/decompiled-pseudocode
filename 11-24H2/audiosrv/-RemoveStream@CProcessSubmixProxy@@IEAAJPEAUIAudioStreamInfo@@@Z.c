/*
 * XREFs of ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180058858
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7C04 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcessSubmixProxy::RemoveStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  struct IAudioStreamInfo **v6; // rdx
  struct IAudioStreamInfo **v7; // rcx
  struct IAudioStreamInfo **i; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v10 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 120))(a2, &v10);
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v6 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  v7 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  while ( v6 != v7 && *v6 != a2 )
    ++v6;
  if ( v6 != v7 )
  {
    for ( i = v6 + 1; i != v7; ++i )
    {
      if ( *i != a2 )
        *v6++ = *i;
    }
  }
  if ( v6 != *((struct IAudioStreamInfo ***)this + 23) )
    *((_QWORD *)this + 23) = v6;
  if ( this != (CProcessSubmixProxy *)-136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 232LL))(v10, 2LL, 0xFFFFFFFFLL, v5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
