/*
 * XREFs of ACPIGetWorkerForBuffer @ 0x140046220
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

void __fastcall ACPIGetWorkerForBuffer(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edi
  char v8; // r14
  unsigned int v9; // eax
  void *Pool2; // rax
  void *v11; // rbp
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v15; // al
  _QWORD **v16; // r9
  void **v17; // r8

  v6 = a2;
  v8 = 1;
  if ( a2 < 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  if ( *(_WORD *)(a3 + 2) != 3 )
  {
    if ( (*(_DWORD *)a4 & 0x40000000) != 0 )
      ACPIInternalError(0x60E66uLL);
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(a3 + 24);
  if ( !v9 )
  {
LABEL_9:
    v6 = -1072431089;
    goto LABEL_3;
  }
  Pool2 = (void *)ExAllocatePool2(
                    (-(__int64)((*(_DWORD *)a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    v9,
                    1114661697LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v12 = (_QWORD *)a4[7];
    if ( v12 )
    {
      *v12 = v11;
      v13 = (_DWORD *)a4[8];
      if ( v13 )
        *v13 = *(_DWORD *)(a3 + 24);
    }
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_3:
  *((_DWORD *)a4 + 18) = v6;
  if ( v8 )
  {
    dword_140089138 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v14 )
      v14(a1, v6, 0LL, a4[6]);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    v16 = (_QWORD **)a4[1];
    if ( v16[1] != a4 + 1 || (v17 = (void **)a4[2], *v17 != a4 + 1) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = v17;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount, v15);
    ExFreePoolWithTag(a4, 0);
  }
}
