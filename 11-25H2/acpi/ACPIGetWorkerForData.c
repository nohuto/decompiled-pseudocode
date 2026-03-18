/*
 * XREFs of ACPIGetWorkerForData @ 0x140041280
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIGetWorkerForData(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v5; // edi
  bool v8; // dl
  void (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v10; // al
  __int64 v11; // r9
  _QWORD *v12; // r8

  v4 = *((_QWORD *)a4 + 7);
  v5 = -1073741670;
  if ( v4 )
    v5 = a2;
  v8 = a2 >= 0;
  if ( v5 >= 0 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a3;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(a3 + 32);
    *(_OWORD *)a3 = 0LL;
    v8 = 0;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  a4[18] = v5;
  if ( v8 )
  {
    dword_140089138 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( (*a4 & 0x10000000) == 0 )
  {
    v9 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v9 )
      v9(a1, (unsigned int)v5, 0LL, *((_QWORD *)a4 + 6));
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    v11 = *((_QWORD *)a4 + 1);
    if ( *(_DWORD **)(v11 + 8) != a4 + 2 || (v12 = (_QWORD *)*((_QWORD *)a4 + 2), (_DWORD *)*v12 != a4 + 2) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v10);
    ExFreePoolWithTag(a4, 0);
  }
}
