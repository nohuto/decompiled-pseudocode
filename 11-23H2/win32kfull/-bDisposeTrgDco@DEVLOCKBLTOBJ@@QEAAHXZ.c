/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00791B0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C026FC58 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D04 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FB530 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C7F4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  DC *v5; // rcx
  __int64 v6; // rdi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 && *((_BYTE *)this + 169) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*(DC **)v1, *(struct SURFACE **)(v4 + 2528));
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *(_QWORD *)v1 && *((_BYTE *)v1 + 48) )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 40LL) &= ~2u;
      *((_BYTE *)v1 + 48) = 0;
    }
    if ( *(_QWORD *)v1 )
    {
      if ( *((_DWORD *)v1 + 2) && (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper(v1);
        *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~2u;
        *((_DWORD *)v1 + 2) = 0;
      }
      v5 = *(DC **)v1;
      v8 = 0;
      v6 = *(_QWORD *)v5;
      HmgDecrementExclusiveReferenceCountEx(v5, *((unsigned int *)v1 + 3), &v8);
      if ( v8 )
        GrepDeleteDC(v6, 0x2000000LL);
    }
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
