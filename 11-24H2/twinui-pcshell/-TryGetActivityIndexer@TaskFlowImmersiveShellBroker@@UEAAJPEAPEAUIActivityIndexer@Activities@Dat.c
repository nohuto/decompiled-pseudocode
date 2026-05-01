/*
 * XREFs of ?TryGetActivityIndexer@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIActivityIndexer@Activities@Data@Internal@Windows@@@Z @ 0x180400920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetActivityIndexer(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Data::Activities::IActivityIndexer **a2)
{
  struct Windows::Internal::Data::Activities::IActivityIndexer *v2; // rcx

  *a2 = 0LL;
  v2 = (struct Windows::Internal::Data::Activities::IActivityIndexer *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IActivityIndexer *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return 0LL;
}
