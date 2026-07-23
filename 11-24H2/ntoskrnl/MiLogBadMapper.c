/*
 * XREFs of MiLogBadMapper @ 0x140274724
 * Callers:
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x140274970 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogBadMapper(__int64 a1, int a2, EVENT_DESCRIPTOR *a3)
{
  void (__fastcall *v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // rdi
  __int64 v7; // rbx
  int Id; // ecx
  char v9; // al
  int v10; // r8d
  int v12; // [rsp+28h] [rbp-E0h]
  int v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  char *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  __int64 *p_EventDescriptor; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  _DWORD *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  unsigned __int64 Keyword; // [rsp+E8h] [rbp-20h]
  _DWORD v37[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v3 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))&retaddr;
  p_EventDescriptor_8 = &EventDescriptor_8;
  if ( a3 )
    p_EventDescriptor_8 = a3;
  EventDescriptor_8 = 0LL;
  if ( **(_DWORD **)&qword_140E37658 > 5u )
  {
    LOBYTE(v3) = *(char *)(*(_QWORD *)&qword_140E37658 + 16LL) < 0
              && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x80LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658
                                                                                         + 24LL);
    if ( (_BYTE)v3 )
    {
      v26 = 0;
      v29 = 0;
      p_EventDescriptor = &EventDescriptor;
      EventDescriptor = a1;
      v27 = &v14;
      v25 = 8;
      LODWORD(v14) = a2;
      v28 = 4;
      LOBYTE(v3) = tlgWriteEx_EtwWriteEx(
                     qword_140E37658,
                     (int)&dword_140056F84 + 3,
                     qword_140E37658,
                     1,
                     v12,
                     v13,
                     4u,
                     (__int64)&UserData);
    }
  }
  v7 = *(_QWORD *)&qword_140E37658;
  if ( **(_DWORD **)&qword_140E37658 > 5u )
  {
    LOBYTE(v3) = (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x400000000080LL) != 0
              && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x400000000080LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL);
    if ( (_BYTE)v3 )
    {
      Id = p_EventDescriptor_8->Id;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v37[1] = 0;
      v40 = 0;
      p_EventDescriptor = &v17;
      v27 = &v18;
      v30 = &v14;
      Keyword = p_EventDescriptor_8->Keyword;
      v19 = 2164260864LL;
      v38 = &v19;
      UserData.Ptr = *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 8LL);
      v33 = v37;
      v37[0] = Id;
      v17 = a1;
      v25 = 8;
      v18 = a1;
      v28 = 8;
      LODWORD(v14) = a2;
      v31 = 4;
      v34 = 2;
      v39 = 8;
      *(_QWORD *)&EventDescriptor_8.Id = 0x50B000000LL;
      EventDescriptor_8.Keyword = 0x400000000080LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v21 = (char *)&dword_140056FD0 + 1;
      UserData.Reserved = 2;
      v22 = 121;
      v23 = 1;
      LODWORD(EventDescriptor) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v3 = TlgAggregateInternalRegisteredProviderEtwCallback;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(*(_QWORD *)&qword_140E37658 + 40LL) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v9 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
        if ( v9 )
        {
          LOBYTE(v10) = 8;
          LOBYTE(v3) = InsertEventEntryInLookUpTable(
                         v7,
                         (unsigned int)&EventDescriptor_8,
                         v10,
                         (unsigned int)&UserData,
                         v9);
        }
        else
        {
          LOBYTE(v3) = EtwWriteEx(*(_QWORD *)(v7 + 32), &EventDescriptor_8, 0LL, 0, 0LL, 0LL, 8u, &UserData);
        }
      }
    }
  }
  return (char)v3;
}
