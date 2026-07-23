/*
 * XREFs of MiAllocateInPageSupport @ 0x14037C3C0
 * Callers:
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        ULONG_PTR *a4,
        __int64 a5)
{
  ULONG_PTR v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  _SLIST_ENTRY *v15; // r15
  unsigned __int64 v16; // rax

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
      MiUnlockProtoPoolPage(v8, 0x11u, v13, v14);
    }
    else
    {
      if ( (v10 & 1) == 0 )
        return 0LL;
      v10 &= ~1u;
      *a3 = 16;
    }
    v15 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v10, a5);
    if ( !v15 )
    {
      if ( (v10 & 1) == 0 )
        return (__int64)v15;
      *a3 = 16;
      v15 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v10 & 0xFFFFFFFE, a5);
      if ( !v15 )
        return 0LL;
    }
    if ( a4 )
    {
      v16 = MiLockProtoPoolPage(a1, 0LL);
      if ( !v16 )
      {
        MiFreeInPageSupportBlock(v15);
        return 0LL;
      }
      *a4 = v16;
    }
    return (__int64)v15;
  }
  return result;
}
