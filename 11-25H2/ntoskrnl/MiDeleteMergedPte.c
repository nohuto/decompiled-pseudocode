/*
 * XREFs of MiDeleteMergedPte @ 0x14033FD38
 * Callers:
 *     MiDecrementCloneBlock @ 0x140224FE8 (MiDecrementCloneBlock.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x14033FEC4 (MiTryDeleteTransitionPte.c)
 */

unsigned __int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  ULONG_PTR v5; // rbp
  unsigned int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int8 v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h]

  result = *a2;
  v10 = 0;
  if ( result )
  {
    v5 = MiLockProtoPoolPage((unsigned __int64)a2, &v10);
    v6 = MiTryDeleteTransitionPte((ULONG_PTR)a2);
    v8 = 1LL;
    v9 = v6;
    if ( v6 == 1 )
    {
      v11 = *a2;
      if ( (v11 & 0x400) == 0 && ((v11 & 4) != 0 || (v11 & 2) != 0) )
      {
        if ( v11 )
          MiReleasePageFileInfo(a1, v11, 1);
      }
    }
    MiUnlockProtoPoolPage(v5, v10, v8, v7);
    return v9;
  }
  return result;
}
