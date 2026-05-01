/*
 * XREFs of ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800192E8
 * Callers:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800190E4 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025420 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmpActivityHostCanDelete(struct _RM_ACTIVITY_HOST *a1)
{
  int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // rax
  char *v4; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0;
  if ( *((int *)a1 + 6) < 0 )
    return 0LL;
  v1 = 0;
  v2 = 0;
  do
  {
    v3 = (int)v2++;
    v1 += *((_DWORD *)a1 + 6 * v3 + 288);
  }
  while ( v2 < 2 );
  if ( v1 )
    return 0LL;
  if ( *((_QWORD *)a1 + 83) )
    return 0LL;
  v4 = (char *)a1 + 64;
  RmHamHostGetCurrentState(
    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
    (union _RM_OPTIMIZATION_STATE *)&v6,
    (union _RM_OPTIMIZATION_STATE *)&v7);
  return !v7 && (v6 & 0x80u) != 0 && (v6 & 0x100) != 0 && (v4[672] & 2) == 0 && !*((_QWORD *)v4 + 132);
}
