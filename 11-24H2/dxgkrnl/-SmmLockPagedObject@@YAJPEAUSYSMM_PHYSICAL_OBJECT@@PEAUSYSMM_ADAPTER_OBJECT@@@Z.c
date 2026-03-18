/*
 * XREFs of ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1402877FC
 * Callers:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x14003A634 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14001F350 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x140044638 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 *     ??$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DA@@@@Z @ 0x140050A70 (--$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DA@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140051190 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x140095A30 (SmmMapLockedPagesToIommu.c)
 *     SmmLockPagesForAdapter @ 0x140287B8C (SmmLockPagesForAdapter.c)
 *     SmmUnlockPages @ 0x140287DE0 (SmmUnlockPages.c)
 */

__int64 __fastcall SmmLockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // r12
  struct _MDL *v4; // rbx
  int locked; // r14d
  __int64 v7; // rax
  __int64 v8; // r9
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+A8h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *((_QWORD *)a2 + 2);
  v4 = 0LL;
  Mdl = 0LL;
  locked = 0;
  SmmAcquirePushLockExclusive<48>((__int64)a1 + 32);
  v7 = *((_QWORD *)a1 + 7);
  if ( *((_DWORD *)a1 + 12) )
  {
    if ( !v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 425;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
        425LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 374;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pPhysicalObject->PagedData.LockData.Mdl == nullptr",
        374LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)a1;
    BaseAddress = 0LL;
    NumberOfBytes = 0LL;
    v13 = 0LL;
    locked = SysMmMapPhysicalObject(a1, 0LL, 0LL, v8, 0, &BaseAddress, &v13, &NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      WdLogGlobalForLineNumber = 386;
      goto LABEL_16;
    }
    locked = SmmLockPagesForAdapter(v2, (char *)BaseAddress + v13, NumberOfBytes, &Mdl);
    SysMmUnmapPhysicalObject((struct _MDL **)a1, BaseAddress, NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      v4 = Mdl;
      WdLogGlobalForLineNumber = 400;
      goto LABEL_14;
    }
    v4 = Mdl;
    locked = SmmMapLockedPagesToIommu(v2, (__int64)a1, (__int64)a2, Mdl);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      WdLogGlobalForLineNumber = 413;
      goto LABEL_14;
    }
    *((_QWORD *)a1 + 7) = v4;
    v4 = 0LL;
  }
  ++*((_DWORD *)a1 + 12);
LABEL_14:
  if ( v4 )
    SmmUnlockPages(v4);
LABEL_16:
  SmmReleasePushLockExclusive<1>((__int64)a1 + 32);
  return (unsigned int)locked;
}
