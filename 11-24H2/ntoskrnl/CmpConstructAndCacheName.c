/*
 * XREFs of CmpConstructAndCacheName @ 0x1409EA66C
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v7; // ebx
  bool v9; // cf
  signed __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 296);
  if ( (v5 & 1) != 0 )
    v5 &= ~1uLL;
  if ( !v5 )
  {
    v7 = CmpConstructNameWithStatus(a1, &v10, a3, a4);
    if ( v7 < 0 )
      goto LABEL_7;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v10, 0LL) != 0;
    v5 = *(_QWORD *)(a1 + 296);
    v10 &= -(__int64)v9;
    if ( (v5 & 1) != 0 )
      v5 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v5;
  v7 = 0;
LABEL_7:
  if ( v10 )
    CmpFreeTransientPoolWithTag((void *)v10, 0x624E4D43u);
  return (unsigned int)v7;
}
