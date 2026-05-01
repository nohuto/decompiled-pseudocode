/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18022CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x1802A1200 (-UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_23c98c0562f226dcd27081461ca7c8fb_>::Run(
        __int64 a1,
        __int64 a2)
{
  UAFireEvent(a1, a2, *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
