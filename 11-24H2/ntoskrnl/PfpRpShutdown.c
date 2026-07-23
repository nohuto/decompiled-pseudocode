/*
 * XREFs of PfpRpShutdown @ 0x1407452C0
 * Callers:
 *     PfpParametersWatcher @ 0x140746790 (PfpParametersWatcher.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     PfpRpControlRequestReset @ 0x140A996EC (PfpRpControlRequestReset.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdi
  _DWORD *v4; // rsi
  _QWORD *v5; // rdi
  void *v6; // r9
  _QWORD *i; // rdx
  void *v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 48));
  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2 || (v3 = (_QWORD *)*v2, (*v2 & 1) != 0) )
  {
    v5 = v2 + 1;
    v4 = (_DWORD *)(a1 + 4);
    while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
    {
      if ( (*(_BYTE *)v5 & 1) == 0 )
      {
        _mm_lfence();
        v3 = (_QWORD *)*v5;
        goto LABEL_16;
      }
      ++v5;
    }
  }
  else
  {
    v4 = (_DWORD *)(a1 + 4);
LABEL_16:
    while ( v3 )
    {
      v6 = v3;
      v10 = v3[1] & (-1LL << (*v4 & 0x1F));
      v3 = (_QWORD *)*v3;
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           + 8LL
                           * ((37
                             * (BYTE6(v10)
                              + 37
                              * (BYTE5(v10)
                               + 37
                               * (BYTE4(v10)
                                + 37
                                * (BYTE3(v10)
                                 + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                             + HIBYTE(v10)) & (unsigned int)((*v4 >> 5) - 1)));
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)(unsigned int)*v4 >> 5);
              ++i )
        {
          v3 = (_QWORD *)*i;
          if ( (*i & 1) == 0 )
            goto LABEL_15;
        }
        v3 = 0LL;
      }
LABEL_15:
      ExFreePoolWithTag(v6, 0);
    }
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *v4 = 0;
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 48));
  return PfpRpControlRequestReset(a1);
}
