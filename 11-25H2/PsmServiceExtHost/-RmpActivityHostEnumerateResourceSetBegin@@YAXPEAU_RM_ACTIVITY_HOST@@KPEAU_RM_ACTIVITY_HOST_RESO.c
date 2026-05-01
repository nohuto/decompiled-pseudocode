/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180066C1C
 * Callers:
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180088C28 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EA90 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostEnumerateResourceSetBegin(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a3)
{
  _QWORD *v3; // r10
  signed int i; // r9d
  __int64 v6; // rdx

  v3 = (_QWORD *)((char *)a1 + 1136);
  *(_OWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 2) = a2;
  for ( i = 0; i < 2; ++i )
  {
    if ( _bittest(&a2, i) )
    {
      v6 = 0LL;
      if ( (_QWORD *)*v3 != v3 )
        v6 = *v3 - 1296LL;
      if ( v6 )
        goto LABEL_9;
    }
    v3 += 3;
  }
  v6 = 0LL;
LABEL_9:
  *(_QWORD *)a3 = v6;
}
