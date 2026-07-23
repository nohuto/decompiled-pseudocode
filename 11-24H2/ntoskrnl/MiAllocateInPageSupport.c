/*
 * XREFs of MiAllocateInPageSupport @ 0x140341520
 * Callers:
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _SLIST_ENTRY *v16; // r15
  __int64 v17; // rax

  if ( a4 )
    v8 = *a4;
  else
    v8 = 0LL;
  v9 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v9 = 256;
  }
  v10 = a2 | 1;
  if ( v9 <= 0x10 )
    v10 = a2;
  v11 = v10;
  if ( a4 )
    v11 = v10 | 4;
  result = MiGetInPageSupportBlock(v11, a5);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v13) = 17;
      MiUnlockProtoPoolPage(v8, v13, v14, v15);
    }
    else
    {
      if ( (v10 & 1) == 0 )
        return 0LL;
      v10 &= ~1u;
      *a3 = 16;
    }
    v16 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v10, a5);
    if ( !v16 )
    {
      if ( (v10 & 1) == 0 )
        return (__int64)v16;
      *a3 = 16;
      v16 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v10 & 0xFFFFFFFE, a5);
      if ( !v16 )
        return 0LL;
    }
    if ( a4 )
    {
      v17 = MiLockProtoPoolPage(a1, 0LL);
      if ( !v17 )
      {
        MiFreeInPageSupportBlock(v16);
        return 0LL;
      }
      *a4 = v17;
    }
    return (__int64)v16;
  }
  return result;
}
