/*
 * XREFs of ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x180076D40
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::SetWindowId(CAudioStream *this, int a2)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 20) = a2;
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}
