/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@@Z @ 0x1801689B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMouseSnappedToGaze(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 7) + 1608LL);
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct BamoMPCManagerClientStub *))(*(_QWORD *)v2 + 40LL))(v2, a2);
  return result;
}
