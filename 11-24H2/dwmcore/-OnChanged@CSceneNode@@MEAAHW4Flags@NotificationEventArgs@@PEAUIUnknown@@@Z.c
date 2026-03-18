/*
 * XREFs of ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802A5A40
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1802A56FC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneNode::OnChanged(__int64 a1, int a2)
{
  if ( !*(_QWORD *)(a1 + 144) )
    return 0LL;
  if ( a2 == 2 )
    CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 128) + 80LL))(*(_QWORD *)(a1 + 128), 0LL, a1);
  return 1LL;
}
