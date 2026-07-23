/*
 * XREFs of MiLogSlabEntryAllocateFailure @ 0x14047E460
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x140274970 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     MiNodeAvailablePages @ 0x14047E7E0 (MiNodeAvailablePages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogSlabEntryAllocateFailure(__int64 a1, int a2, int a3, int a4, char a5)
{
  ULONG *v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rtt
  unsigned __int8 CurrentIrql; // r14
  __int64 v17; // rsi
  char v18; // al
  unsigned __int8 AggregateFieldTypes; // al
  char v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v27[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int16 *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  __int64 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  _DWORD *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  char *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  __int64 *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]

  v22 = a3;
  v21 = a2;
  if ( !*(_QWORD *)&qword_140E37658 )
    return;
  v7 = *(ULONG **)(a1 + 24);
  v8 = (unsigned __int64)&MiSystemPartition;
  v9 = *(unsigned int *)(a1 + 132);
  v10 = *((_QWORD *)v7 + 2) + 57216 * v9;
  v11 = *(_QWORD *)(v10 + 14976);
  if ( v7 == &MiSystemPartition )
  {
    v8 = (unsigned __int64)qword_140E37740;
    v12 = qword_140E37740[v9];
    if ( v11 <= v12 )
    {
      v11 = 0LL;
      goto LABEL_27;
    }
    v11 -= v12;
  }
  if ( v11 )
  {
    v13 = 10;
    v15 = 100 * MiNodeAvailablePages();
    v14 = v15 / v11;
    v8 = v15 % v11;
    if ( v15 / v11 > 0xA )
    {
      v13 = 30;
      if ( v14 > 0x1E )
      {
        v13 = 100;
        v10 = 50LL;
        if ( v14 <= 0x32 )
          v13 = 50;
      }
    }
    goto LABEL_7;
  }
LABEL_27:
  v13 = 0;
LABEL_7:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, v8);
  }
  v17 = *(_QWORD *)&qword_140E37658;
  if ( **(_DWORD **)&qword_140E37658 > 5u )
  {
    if ( (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x400000000400LL) == 0
      || (v18 = 1,
          (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x400000000400LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658
                                                                                            + 24LL)) )
    {
      v18 = 0;
    }
    if ( v18 )
    {
      v29 = 1LL;
      v36 = &v29;
      v23 = *(_DWORD *)(a1 + 128);
      v38 = &v23;
      v24 = *(_DWORD *)(a1 + 132);
      v40 = &v24;
      v25 = *(unsigned __int16 *)v7;
      v42 = &v25;
      v44 = &v21;
      v46 = &v26;
      v48 = (__int64 *)&v30;
      v50 = &v22;
      v52 = v27;
      v20 = a5;
      v54 = &v20;
      v56 = &v31;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 8LL);
      v37 = 8LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v26 = v13;
      v47 = 4LL;
      v30 = v11;
      v49 = 8LL;
      v51 = 4LL;
      v27[0] = a4;
      v53 = 4LL;
      v55 = 1LL;
      v31 = 0x1000000LL;
      v57 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000400LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v33 = word_1400587DA;
      UserData.Reserved = 2;
      v34 = 212;
      v35 = 1;
      v27[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(*(_QWORD *)&qword_140E37658 + 40LL) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
        if ( AggregateFieldTypes )
          InsertEventEntryInLookUpTable(v17, (__int64)&EventDescriptor, 0xDu, (__int64)&UserData, AggregateFieldTypes);
        else
          EtwWriteEx(*(_QWORD *)(v17 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(CurrentIrql);
}
