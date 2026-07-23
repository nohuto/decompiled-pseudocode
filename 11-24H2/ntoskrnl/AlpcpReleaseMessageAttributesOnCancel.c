/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140A15680
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088F9F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x140463550 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x140A44954 (AlpcpReleaseViewAttribute.c)
 */

unsigned __int64 __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2, 1);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 && (*(_DWORD *)(a1 + 40) & 0x4000) == 0 )
  {
    AlpcpReleaseViewAttribute(v3);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    AlpcpDereferenceBlobEx(v4, 1);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  result = *(_QWORD *)(a1 + 160);
  if ( (result & 1) != 0 )
  {
    if ( result >= 4 )
      result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 160));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
