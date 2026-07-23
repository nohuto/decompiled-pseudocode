/*
 * XREFs of MiCanDeleteEnclave @ 0x140681954
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 * Callees:
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiFreeEnclaveModules @ 0x1406F68F0 (MiFreeEnclaveModules.c)
 *     PsIsVsmEnclaveTerminated @ 0x14077B3B4 (PsIsVsmEnclaveTerminated.c)
 *     PsRundownVsmEnclave @ 0x14077B478 (PsRundownVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140A20164 (PsDereferenceVsmEnclave.c)
 *     PsReferenceVsmEnclave @ 0x140A5DA3C (PsReferenceVsmEnclave.c)
 */

__int64 __fastcall MiCanDeleteEnclave(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // ebx

  if ( a2 )
    *a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(void **)(a1 + 72);
  PsReferenceVsmEnclave(v5);
  v7 = a1 + 80;
  if ( v6 )
  {
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
      || (*v6 = v8, v6[1] = v7, *(_QWORD *)(v8 + 8) = v6, *(_QWORD *)v7 = v6, v6[1] != v7)
      || (v9 = *(_QWORD **)(a1 + 88), *v9 != v7) )
    {
      __fastfail(3u);
    }
    *v9 = v6;
    v6[1] = v9;
    *(_QWORD *)(a1 + 88) = a1 + 80;
    *(_QWORD *)v7 = v7;
  }
  else
  {
    MiFreeEnclaveModules(v7);
  }
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v5) )
  {
    MiUnlockVad((__int64)CurrentThread, a1);
    v10 = PsRundownVsmEnclave(v5);
    MiLockVad((__int64)CurrentThread, a1);
    if ( v10 >= 0 && (*(_BYTE *)(a1 + 48) & 4) != 0 )
      v10 = -1073741800;
  }
  else
  {
    v10 = -1073740527;
  }
  PsDereferenceVsmEnclave(v5);
  return (unsigned int)v10;
}
