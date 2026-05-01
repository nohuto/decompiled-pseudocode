/*
 * XREFs of ?CrmpActivityStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAG1W4_CRM_ACTIVITY_START_REASON@@@Z @ 0x18000A9E0
 * Callers:
 *     CrmActivityStart @ 0x180010030 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CrmpActivityStart(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  CLIENT_CALL_RETURN result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
    result.Simple = CrmpInProcActivityStart(*(_QWORD *)(a1 + 8), v7, a2, a3, a4);
  else
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20,
                       5u,
                       0LL,
                       *(_QWORD *)(a1 + 8),
                       *(_QWORD *)(v6 + 8),
                       a2,
                       a3,
                       a4).Pointer;
  if ( a4 )
    return 0LL;
  return result;
}
