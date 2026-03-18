/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x140056FF0
 * Callers:
 *     DpiDispatchPnp @ 0x1403A98C0 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rdi

  v3 = -1073741637;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v4 + 1) == 7 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    Pool2 = ExAllocatePool2(256LL, 16LL, 1953656900LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v5 + 152);
      ObfReferenceObject(*(PVOID *)(v5 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v7;
    }
    else
    {
      v3 = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 1543;
    }
  }
  else if ( *(_BYTE *)(v4 + 1) != 8 )
  {
    WdLogSingleEntry1(2LL, *(unsigned __int8 *)(v4 + 1));
    WdLogGlobalForLineNumber = 1574;
  }
  return v3;
}
