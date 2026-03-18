/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140A20580
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x14046ABC0 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x140A4DDC4 (AlpcpReleaseViewAttribute.c)
 */

unsigned __int64 __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rcx
  unsigned __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 136);
  if ( v5 )
  {
    AlpcpDereferenceBlobEx(v5, 1, a3, a4);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 144);
  if ( v6 && (*(_DWORD *)(a1 + 40) & 0x4000) == 0 )
  {
    AlpcpReleaseViewAttribute(v6);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 152);
  if ( v7 )
  {
    AlpcpDereferenceBlobEx(v7, 1, a3, a4);
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
