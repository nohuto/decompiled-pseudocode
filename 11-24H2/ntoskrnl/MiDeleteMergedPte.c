/*
 * XREFs of MiDeleteMergedPte @ 0x140205D9C
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x140204568 (MiTryDeleteTransitionPte.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // edi
  char v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  result = *a2;
  v10 = 0;
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v10);
    v9 = MiTryDeleteTransitionPte((ULONG_PTR)a2, v6, v7);
    if ( v9 == 1 )
    {
      v11 = *a2;
      if ( (v11 & 0x400) == 0 )
      {
        v8 = v11;
        if ( (v11 & 4) != 0 || (v11 & 2) != 0 )
        {
          if ( v11 )
            MiReleasePageFileInfo(a1, v11, 1LL);
        }
      }
    }
    LOBYTE(v8) = v10;
    MiUnlockProtoPoolPage(v5, v8);
    return v9;
  }
  return result;
}
