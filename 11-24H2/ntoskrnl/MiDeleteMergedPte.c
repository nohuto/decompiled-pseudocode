/*
 * XREFs of MiDeleteMergedPte @ 0x14023E00C
 * Callers:
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecrementCloneBlock @ 0x1402F9160 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x14023C7DC (MiTryDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 */

unsigned __int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+18h]

  result = *a2;
  v8 = 0;
  if ( result )
  {
    v5 = MiLockProtoPoolPage((unsigned __int64)a2, &v8);
    v7 = MiTryDeleteTransitionPte((ULONG_PTR)a2);
    if ( v7 == 1 )
    {
      v9 = *a2;
      if ( (v9 & 0x400) == 0 )
      {
        v6 = v9;
        if ( (v9 & 4) != 0 || (v9 & 2) != 0 )
        {
          if ( v9 )
            MiReleasePageFileInfo(a1, v9, 1LL);
        }
      }
    }
    LOBYTE(v6) = v8;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
