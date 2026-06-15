/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18007E404
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180063D88 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F07C0 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
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
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = (struct IAudioStreamInfo **)*((_QWORD *)this + 24);
  v7 = (struct IAudioStreamInfo **)*((_QWORD *)this + 25);
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
  if ( v6 != *((struct IAudioStreamInfo ***)this + 25) )
    *((_QWORD *)this + 25) = v6;
  if ( this != (CBaseStreamGroupProxy *)-152LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 232LL))(v10, 2LL, 0xFFFFFFFFLL, v5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
