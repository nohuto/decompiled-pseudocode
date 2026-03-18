/*
 * XREFs of ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D067C
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D01F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TdrRetrieveSecondaryBucketingKey(struct _TDR_RECOVERY_CONTEXT *a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // eax
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v2 = (unsigned int *)*((_QWORD *)a1 + 360);
  *a2 = 0;
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
      goto LABEL_9;
  }
  v4 = (_DWORD *)*((_QWORD *)a1 + 357);
  if ( v4 )
  {
    if ( *((_QWORD *)a1 + 358) )
    {
      if ( *v4 )
      {
        v5 = (unsigned int)v4[1];
        if ( (_DWORD)v5 )
        {
          if ( *(_DWORD *)((char *)v4 + v5) == 1649636173 )
          {
            v3 = *(_DWORD *)((char *)v4 + v5 + 4);
LABEL_9:
            *a2 = v3;
          }
        }
      }
    }
  }
}
