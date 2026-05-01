/*
 * XREFs of ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005FBBC
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C924 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005FA88 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(char *P, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // rax

  v3 = *((_QWORD *)P + 178);
  v4 = (_QWORD **)*((_QWORD *)P + 179);
  if ( v4[1] != (_QWORD *)(P + 1432) || (v5 = (PVOID *)*((_QWORD *)P + 180), *v5 != P + 1432) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 178) = 0LL;
  if ( *(_QWORD *)v3 == v3 && (_BYTE)a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(P, a2);
}
