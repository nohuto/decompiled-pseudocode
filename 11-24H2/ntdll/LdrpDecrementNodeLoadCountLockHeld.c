/*
 * XREFs of LdrpDecrementNodeLoadCountLockHeld @ 0x1800493D0
 * Callers:
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpDecrementNodeLoadCountLockHeld(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // r10d
  int v6; // ecx

  result = 0LL;
  *a3 = 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 != -1 && (*(_BYTE *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    if ( v5 < (unsigned int)(*(_QWORD *)(a1 + 48) != 0LL) + 1 )
    {
      if ( !v5 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v6 = *(_DWORD *)(a1 + 28);
        if ( v6 )
          *(_DWORD *)(a1 + 28) = v6 - 1;
      }
    }
    else if ( v5 <= 1 && a2 )
    {
      return 3221226029LL;
    }
    else
    {
      *(_DWORD *)(a1 + 24) = v5 - 1;
      if ( v5 == 1 )
        *a3 = 1;
    }
  }
  return result;
}
