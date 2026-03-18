/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1400577E0
 * Callers:
 *     DpiDispatchPnp @ 0x1403B7200 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Pool2; // rax
  __int64 v9; // rdi

  v5 = -1073741637;
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v6 + 1) == 7 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    Pool2 = ExAllocatePool2(256LL, 16LL, 1953656900LL, a4);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v7 + 152);
      ObfReferenceObject(*(PVOID *)(v7 + 152));
      v5 = 0;
      *(_QWORD *)(a2 + 56) = v9;
    }
    else
    {
      v5 = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 1543;
    }
  }
  else if ( *(_BYTE *)(v6 + 1) != 8 )
  {
    WdLogSingleEntry1(2LL, *(unsigned __int8 *)(v6 + 1));
    WdLogGlobalForLineNumber = 1574;
  }
  return v5;
}
