/*
 * XREFs of MiLogPeriodicTelemetryForSlabAllocator @ 0x1404A55E0
 * Callers:
 *     <none>
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x140274970 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPeriodicTelemetryForSlabAllocator(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // al
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 AggregateFieldTypes; // al
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  char *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  __int64 *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  __int64 *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  __int64 *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int64 *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  __int64 *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  __int64 *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  __int64 *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  __int64 *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int64 *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  int *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  int *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  int *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  _DWORD *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  __int64 *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]

  v2 = *(_QWORD *)&qword_140E37658;
  if ( **(_DWORD **)&qword_140E37658 > 5u )
  {
    if ( (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x400000000400LL) == 0
      || (v4 = 1,
          (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x400000000400LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658
                                                                                            + 24LL)) )
    {
      v4 = 0;
    }
    if ( v4 )
    {
      v16 = *(_QWORD *)(a2 + 120);
      v35 = &v16;
      v17 = *(_QWORD *)(a2 + 120);
      v37 = &v17;
      v18 = *(_QWORD *)(a2 + 96);
      v39 = &v18;
      v19 = *(_QWORD *)(a2 + 96);
      v41 = &v19;
      v20 = *(_QWORD *)(a2 + 112);
      v43 = &v20;
      v21 = *(_QWORD *)(a2 + 112);
      v45 = &v21;
      v5 = *(__int64 **)(a2 + 80);
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      v6 = *v5;
      v47 = &v22;
      v7 = *(__int64 **)(a2 + 80);
      v22 = v6;
      v48 = 8LL;
      v8 = *v7;
      v49 = &v23;
      v24 = *(unsigned int *)(a2 + 144);
      v51 = &v24;
      v25 = *(unsigned int *)(a2 + 148);
      v53 = &v25;
      v26 = *(unsigned int *)(a2 + 152);
      v55 = &v26;
      v27 = *(unsigned int *)(a2 + 156);
      v57 = &v27;
      v28 = *(unsigned int *)(a2 + 160);
      v59 = &v28;
      v29 = *(unsigned int *)(a2 + 164);
      v61 = &v29;
      v11 = *(_DWORD *)(a2 + 128);
      v63 = &v11;
      v12 = *(_DWORD *)(a2 + 132);
      v65 = &v12;
      v23 = v8;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 4LL;
      v13 = *a1;
      v67 = &v13;
      LODWORD(v7) = (*(_DWORD *)(a2 + 136) >> 4) & 3;
      v66 = 4LL;
      v14[0] = (_DWORD)v7;
      v69 = v14;
      v71 = &v30;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 8LL);
      v68 = 4LL;
      v70 = 4LL;
      v30 = 0x1000000LL;
      v72 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000000400LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v32 = byte_1400593F9;
      UserData.Reserved = 2;
      v33 = 496;
      v34 = 1;
      v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(*(_QWORD *)&qword_140E37658 + 40LL) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)&TraceLoggingMetadata, (__int64)&UserData);
        if ( AggregateFieldTypes )
          InsertEventEntryInLookUpTable(v2, (__int64)&EventDescriptor, 0x15u, (__int64)&UserData, AggregateFieldTypes);
        else
          EtwWriteEx(*(_QWORD *)(v2 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, 0x15u, &UserData);
      }
    }
  }
  return 0LL;
}
