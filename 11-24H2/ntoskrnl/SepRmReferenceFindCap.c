/*
 * XREFs of SepRmReferenceFindCap @ 0x140454FA4
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140359A70 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     SeRmReferenceFindCapName @ 0x1404D3DF4 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x1403F6910 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140440860 (RtlGetNextEntryHashTable.c)
 *     SepRmReferenceCapTable @ 0x140455064 (SepRmReferenceCapTable.c)
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x140A785DC (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  struct _RTL_DYNAMIC_HASH_TABLE *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v12; // rbx
  struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v5 = -1073741275;
  v7 = (struct _RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable(Sid1, a2, a3);
  if ( v7 )
  {
    if ( SepRmEnforceCap )
    {
      v10 = SepComputeSidSignature(Sid1);
      for ( i = RtlLookupEntryHashTable(v7, v10, &Context); ; i = RtlGetNextEntryHashTable(v7, &Context) )
      {
        v12 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v12;
          return 0;
        }
      }
    }
    SepRmDereferenceCapTable(v7, v6, v8, v9);
  }
  return v5;
}
