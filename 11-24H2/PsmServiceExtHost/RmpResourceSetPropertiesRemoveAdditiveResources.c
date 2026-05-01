/*
 * XREFs of RmpResourceSetPropertiesRemoveAdditiveResources @ 0x18006C41C
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015B8C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetPropertiesRemoveAdditiveResources(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 88) &= ~0x20u;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v1 = 1LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = 2LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  do
  {
    v3 = v1++;
    v4 = *(_QWORD *)(a1 + 40) | v3;
    *(_QWORD *)(a1 + 40) = v4;
    --v2;
  }
  while ( v2 );
  result = v4 | 0xC;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
