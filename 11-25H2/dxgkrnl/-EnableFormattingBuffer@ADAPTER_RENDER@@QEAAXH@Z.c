/*
 * XREFs of ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x14019B0DC
 * Callers:
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1401CE9F0 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1400684D8 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x140199DE0 (-CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableFormattingBuffer(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_BYTE *)this + 968) )
  {
    if ( (_DWORD)a2 )
      ADAPTER_RENDER::CreateFormattingBuffer(this, a2, a3, a4);
    else
      ADAPTER_RENDER::DestroyFormattingBuffer(this);
  }
}
