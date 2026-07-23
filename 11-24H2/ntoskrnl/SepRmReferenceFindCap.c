/*
 * XREFs of SepRmReferenceFindCap @ 0x1403B562C
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SeRmReferenceFindCapName @ 0x1404CD004 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmReferenceCapTable @ 0x1403B50BC (SepRmReferenceCapTable.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x1403ECB10 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140436530 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x1404F2D88 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x140A728DC (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  unsigned int v4; // esi
  _RTL_DYNAMIC_HASH_TABLE *v5; // rdi
  ULONG_PTR v6; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v4 = -1073741275;
  v5 = (_RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable();
  if ( v5 )
  {
    if ( SepRmEnforceCap )
    {
      v6 = SepComputeSidSignature(Sid1);
      for ( i = RtlLookupEntryHashTable(v5, v6, &Context); ; i = RtlGetNextEntryHashTable(v5, &Context) )
      {
        v8 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v8;
          return 0;
        }
      }
    }
    SepRmDereferenceCapTable(v5);
  }
  return v4;
}
