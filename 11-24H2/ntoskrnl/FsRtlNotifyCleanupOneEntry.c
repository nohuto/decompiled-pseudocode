/*
 * XREFs of FsRtlNotifyCleanupOneEntry @ 0x1409FEFC8
 * Callers:
 *     FsRtlNotifyCleanupAll @ 0x14070B6A0 (FsRtlNotifyCleanupAll.c)
 *     FsRtlNotifyCleanup @ 0x1409FEF00 (FsRtlNotifyCleanup.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyCleanupOneEntry(char *P, _QWORD *a2)
{
  __int64 v3; // rdi
  __int16 v5; // cx
  char **v6; // rsi
  char *v7; // rax
  __int64 v8; // rcx
  char **v9; // rdx
  PVOID *v10; // rcx

  v3 = 0LL;
  v5 = *((_WORD *)P + 36) | 4;
  v6 = (char **)(P + 48);
  *((_WORD *)P + 36) = v5;
  v7 = (char *)*((_QWORD *)P + 6);
  if ( v7 != P + 48 )
  {
    *((_QWORD *)P + 13) = 0LL;
    *((_WORD *)P + 36) = v5 & 0xFFFD;
    while ( *((char ***)v7 + 1) == v6 )
    {
      v8 = *(_QWORD *)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
        break;
      *v6 = (char *)v8;
      *(_QWORD *)(v8 + 8) = v6;
      *(_QWORD *)v7 = 0LL;
      FsRtlNotifyCompleteIrp((PIRP)(v7 - 168), 1);
      v7 = *v6;
      if ( *v6 == (char *)v6 )
        goto LABEL_6;
    }
LABEL_8:
    __fastfail(3u);
  }
LABEL_6:
  v9 = (char **)*((_QWORD *)P + 4);
  if ( v9[1] != P + 32 )
    goto LABEL_8;
  v10 = (PVOID *)*((_QWORD *)P + 5);
  if ( *v10 != P + 32 )
    goto LABEL_8;
  *v10 = v9;
  v9[1] = (char *)v10;
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      v3 = *((_QWORD *)P + 3);
    *a2 = v3;
    ExFreePoolWithTag(P, 0);
  }
}
