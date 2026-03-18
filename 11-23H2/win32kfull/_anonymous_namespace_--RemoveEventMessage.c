/*
 * XREFs of _anonymous_namespace_::RemoveEventMessage @ 0x1C00A63C4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 */

__int64 __fastcall anonymous_namespace_::RemoveEventMessage(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v8; // r9d
  __int64 v9; // rdi

  result = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    do
    {
      v8 = *(_DWORD *)(v5 + 96);
      if ( v8 == a3 )
        break;
      v9 = *(_QWORD *)(v5 + 8);
      if ( v8 == a2 && v5 != *(_QWORD *)(a1 + 88) )
      {
        DelQEntry(a1 + 24, v5, 1LL);
        result = 1LL;
      }
      v5 = v9;
    }
    while ( v9 );
  }
  return result;
}
