/*
 * XREFs of ?CopyEndpointPropertyChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x1400325AC
 * Callers:
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140032464 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CopyEndpointPropertyChangeNotification(struct APO_NOTIFICATION *a1, struct APO_NOTIFICATION *a2)
{
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a1 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a1 + 3) = *((_OWORD *)a2 + 3);
  *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 8LL))(*((_QWORD *)a1 + 2));
  return 0LL;
}
