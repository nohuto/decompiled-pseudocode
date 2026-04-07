/*
 * XREFs of ?ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z @ 0x18003D598
 * Callers:
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18003D564 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::ReleaseResources(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rsi
  CBaseObject *v8; // rcx
  __int64 result; // rax

  v2 = a2;
  v4 = 32LL * a2;
  v5 = *(CBaseObject **)(v4 + a1 + 176);
  if ( v5 )
  {
    result = CBaseObject::Release(v5);
    *(_QWORD *)(v4 + a1 + 176) = 0LL;
  }
  v6 = *(CBaseObject **)(v4 + a1 + 184);
  if ( v6 )
  {
    result = CBaseObject::Release(v6);
    *(_QWORD *)(v4 + a1 + 184) = 0LL;
  }
  v7 = 32 * (v2 + 6);
  v8 = *(CBaseObject **)(v7 + a1);
  if ( v8 )
  {
    result = CBaseObject::Release(v8);
    *(_QWORD *)(v7 + a1) = 0LL;
  }
  *(_BYTE *)(v4 + a1 + 200) = 0;
  return result;
}
