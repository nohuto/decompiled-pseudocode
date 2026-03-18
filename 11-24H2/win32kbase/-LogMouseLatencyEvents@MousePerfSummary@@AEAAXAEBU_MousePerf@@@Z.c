/*
 * XREFs of ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1400513E0
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x140050D10 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x14004FEB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall MousePerfSummary::LogMouseLatencyEvents(MousePerfSummary *this, const struct _MousePerf *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // [rsp+80h] [rbp-88h] BYREF
  __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  __int64 v15; // [rsp+90h] [rbp-78h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v31; // [rsp+128h] [rbp+20h]
  int v32; // [rsp+130h] [rbp+28h]
  int v33; // [rsp+134h] [rbp+2Ch]
  unsigned __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  __int64 *v36; // [rsp+148h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+48h]
  __int64 *v38; // [rsp+158h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+58h]
  __int64 *v40; // [rsp+168h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+68h]
  __int64 *v42; // [rsp+178h] [rbp+70h]
  __int64 v43; // [rsp+180h] [rbp+78h]
  __int64 *v44; // [rsp+188h] [rbp+80h]
  __int64 v45; // [rsp+190h] [rbp+88h]
  __int64 *v46; // [rsp+198h] [rbp+90h]
  __int64 v47; // [rsp+1A0h] [rbp+98h]
  __int64 *v48; // [rsp+1A8h] [rbp+A0h]
  __int64 v49; // [rsp+1B0h] [rbp+A8h]
  __int64 *v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  __int64 *v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]
  __int64 *v54; // [rsp+1D8h] [rbp+D0h]
  __int64 v55; // [rsp+1E0h] [rbp+D8h]
  __int64 *v56; // [rsp+1E8h] [rbp+E0h]
  __int64 v57; // [rsp+1F0h] [rbp+E8h]
  __int64 *v58; // [rsp+1F8h] [rbp+F0h]
  __int64 v59; // [rsp+200h] [rbp+F8h]
  __int64 *v60; // [rsp+208h] [rbp+100h]
  __int64 v61; // [rsp+210h] [rbp+108h]
  __int64 *v62; // [rsp+218h] [rbp+110h]
  __int64 v63; // [rsp+220h] [rbp+118h]
  __int64 *v64; // [rsp+228h] [rbp+120h]
  __int64 v65; // [rsp+230h] [rbp+128h]

  v4 = dword_14029AE68;
  if ( (unsigned int)dword_14029AE68 > 5 )
  {
    v5 = qword_14029AE78;
    v6 = qword_14029AE80;
    if ( (qword_14029AE78 & 0x10) != 0 && (qword_14029AE80 & 0x10) == qword_14029AE80 )
    {
      v22 = *((_QWORD *)a2 + 8);
      v23 = *((_QWORD *)a2 + 7);
      v24 = *((_QWORD *)a2 + 4);
      v25 = *((_QWORD *)a2 + 3);
      v26 = *((_QWORD *)a2 + 2);
      v27 = *((_QWORD *)a2 + 1);
      v28 = *(_QWORD *)a2;
      v13 = *((_QWORD *)a2 + 6);
      v14 = *((_QWORD *)a2 + 5);
      v15 = *((_QWORD *)this + 59);
      v16 = *((_QWORD *)this + 58);
      v17 = *((_QWORD *)this + 57);
      v18 = *((_QWORD *)this + 52);
      v19 = *((_QWORD *)this + 51);
      v20 = *((_QWORD *)this + 50);
      v21 = *((int *)this + 122);
      v64 = &v22;
      v62 = &v23;
      v60 = &v24;
      v58 = &v25;
      v56 = &v26;
      v54 = &v27;
      v52 = &v28;
      v50 = &v13;
      v48 = &v14;
      v46 = &v15;
      v44 = &v16;
      v42 = &v17;
      v40 = &v18;
      v38 = &v19;
      v36 = &v20;
      v34 = &v21;
      v65 = 8LL;
      v63 = 8LL;
      v61 = 8LL;
      v59 = 8LL;
      v57 = 8LL;
      v55 = 8LL;
      v53 = 8LL;
      v51 = 8LL;
      v49 = 8LL;
      v47 = 8LL;
      v45 = 8LL;
      v43 = 8LL;
      v41 = 8LL;
      v39 = 8LL;
      v37 = 8LL;
      v35 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_14029AE70;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)off_14029AE70;
      v31 = &unk_14027F7ED;
      UserData.Reserved = 2;
      v32 = 334;
      v33 = 1;
      EtwWriteTransfer(qword_14029AE88, &EventDescriptor, 0LL, 0LL, 0x12u, &UserData);
      v6 = qword_14029AE80;
      v5 = qword_14029AE78;
      v4 = dword_14029AE68;
    }
    if ( v4 > 5 && (v5 & 0x400000000000LL) != 0 )
    {
      v7 = v6 & 0x400000000000LL;
      if ( (v6 & 0x400000000000LL) == v6 )
      {
        v8 = *((int *)this + 122);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 != 1 )
            return;
          v9 = *((_QWORD *)this + 50);
          if ( *((_QWORD *)a2 + 2) )
            v11 = v9 + *((_QWORD *)this + 57);
          else
            v11 = *((_QWORD *)this + 50);
          v10 = *((_QWORD *)this + 59) + v11 + *((_QWORD *)this + 58);
        }
        else
        {
          v9 = *((_QWORD *)this + 50);
          v10 = *((_QWORD *)this + 51) + v9 + *((_QWORD *)this + 52);
        }
        if ( v10 >= 0xC350 )
        {
          if ( (v10 >= 0x3D090
             || (v12 = *((_QWORD *)this + 64)) != 0 && (unsigned __int64)(*((_QWORD *)a2 + 8) - v12) <= 0xF4240)
            && v7 == v6 )
          {
            v15 = v9;
            v20 = *((_QWORD *)this + 59);
            v19 = *((_QWORD *)this + 58);
            v18 = *((_QWORD *)this + 57);
            v17 = *((_QWORD *)this + 52);
            v16 = *((_QWORD *)this + 51);
            v21 = v10 / 0x3E8;
            v14 = v8;
            v13 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v10 / 0x3E8,
              (__int64)&unk_14027F724,
              v9,
              v7,
              (__int64)&v13,
              (__int64)&v14,
              (__int64)&v15,
              (__int64)&v16,
              (__int64)&v17,
              (__int64)&v18,
              (__int64)&v19,
              (__int64)&v20,
              (__int64)&v21);
          }
          *((_QWORD *)this + 64) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
}
