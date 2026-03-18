/*
 * XREFs of CleanupWindowRedirection @ 0x1C00F4CF8
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

__int64 __fastcall CleanupWindowRedirection(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
    UnsetLayeredWindow(a1, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 2);
    SetOrClrWF(0, (__int64 *)a1, 0xB02u, 1);
  }
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow((struct tagWND *)a1, 8);
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(result + 232) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 320) & 0x20000000) != 0 )
  {
    result = UnsetRedirectedWindow((struct tagWND *)a1, 8);
    *(_DWORD *)(a1 + 320) &= ~0x20000000u;
  }
  return result;
}
