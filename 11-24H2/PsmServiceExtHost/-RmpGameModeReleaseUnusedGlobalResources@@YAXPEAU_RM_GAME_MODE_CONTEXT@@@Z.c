/*
 * XREFs of ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060C38
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D500 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpGameModeReleaseUnusedGlobalResources(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned int v1; // r14d
  struct _RM_GAME_MODE_CONTEXT *v2; // rax
  char *v4; // rsi
  __int64 v5; // rbp
  bool v6; // bl
  int v7; // edx
  int v8; // ebx
  bool v9; // zf

  v1 = *((_DWORD *)a1 + 32);
  v2 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  *((_DWORD *)a1 + 20) = 0;
  v4 = (char *)v2 - 88;
  if ( v2 == (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
    v4 = 0LL;
  v9 = !_BitScanForward((unsigned int *)&v5, v1);
  v6 = !v9;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v6 )
  {
    do
    {
      v7 = 1 << v5;
      v8 = ~(1 << v5);
      v1 &= v8;
      if ( BYTE1(off_1800AA050[5 * v5 + 4]) )
      {
        v9 = (v7 & *((_DWORD *)a1 + 33)) == 0;
      }
      else
      {
        if ( !v4 )
          goto LABEL_10;
        v9 = (v7 & *((_DWORD *)v4 + 41)) == 0;
      }
      if ( v9 )
      {
LABEL_10:
        (*(&funcs_180060CF7 + 5 * v5))(a1, 0LL);
        *((_DWORD *)a1 + 32) &= v8;
      }
      v9 = !_BitScanForward((unsigned int *)&v5, v1);
    }
    while ( !v9 );
  }
  RmpGameModeAcquireLock(a1);
}
