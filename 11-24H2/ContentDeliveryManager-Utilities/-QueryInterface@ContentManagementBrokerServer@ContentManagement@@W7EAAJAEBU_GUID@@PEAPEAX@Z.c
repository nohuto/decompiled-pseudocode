/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  return ContentManagement::ContentManagementBrokerServer::QueryInterface(a1 - 8, a2, a3);
}
