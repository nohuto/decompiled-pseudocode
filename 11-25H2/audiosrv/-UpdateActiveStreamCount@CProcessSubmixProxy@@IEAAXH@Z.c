/*
 * XREFs of ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x18006843C
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18000AA20 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F2BD4 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmixProxy::UpdateActiveStreamCount(CProcessSubmixProxy *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = *((_DWORD *)this + 32);
  v4 = v3 + a2;
  *((_DWORD *)this + 32) = v3 + a2;
  if ( v3 )
  {
    if ( v3 == 1 && !v4 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 25) + 352LL))(
        *((_QWORD *)this + 25),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  }
  else if ( v4 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 25) + 344LL))(
      *((_QWORD *)this + 25),
      ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  }
}
