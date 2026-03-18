/*
 * XREFs of CleanupWindowRedirection @ 0x14002FEE4
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 */

__int64 __fastcall CleanupWindowRedirection(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
    UnsetLayeredWindow((struct tagWND *)a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 2);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
  }
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 8);
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(result + 232) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 380) & 0x20000000) != 0 )
  {
    result = UnsetRedirectedWindow((struct tagWND *)a1, 8);
    *(_DWORD *)(a1 + 380) &= ~0x20000000u;
  }
  return result;
}
