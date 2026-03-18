/*
 * XREFs of MiAllocateInPageSupport @ 0x140444CE0
 * Callers:
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 */

PSLIST_ENTRY __fastcall MiAllocateInPageSupport(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        ULONG_PTR *a4,
        volatile signed __int64 *a5)
{
  ULONG_PTR v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  PSLIST_ENTRY result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  struct _SLIST_ENTRY *v15; // r15
  __int64 v16; // rax

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
      MiUnlockProtoPoolPage(v8, v13, v14);
    }
    else
    {
      if ( (v10 & 1) == 0 )
        return 0LL;
      v10 &= ~1u;
      *a3 = 16;
    }
    v15 = MiGetInPageSupportBlock(v10, a5);
    if ( !v15 )
    {
      if ( (v10 & 1) == 0 )
        return v15;
      *a3 = 16;
      v15 = MiGetInPageSupportBlock(v10 & 0xFFFFFFFE, a5);
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
    return v15;
  }
  return result;
}
