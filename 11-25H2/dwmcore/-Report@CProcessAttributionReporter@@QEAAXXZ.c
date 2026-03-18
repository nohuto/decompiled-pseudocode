/*
 * XREFs of ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x180180598
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801809F0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CProcessAttributionReporter::Report(CProcessAttributionReporter *this)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[9]; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A8h] [rbp-60h] BYREF
  int *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  int *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  __int64 v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  int *v44; // [rsp+118h] [rbp+10h]
  int v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+124h] [rbp+1Ch]
  __int64 v47; // [rsp+128h] [rbp+20h]
  int v48; // [rsp+130h] [rbp+28h]
  int v49; // [rsp+134h] [rbp+2Ch]
  __int64 *v50; // [rsp+138h] [rbp+30h]
  int v51; // [rsp+140h] [rbp+38h]
  int v52; // [rsp+144h] [rbp+3Ch]
  __int64 v53; // [rsp+148h] [rbp+40h]
  int v54; // [rsp+150h] [rbp+48h]
  int v55; // [rsp+154h] [rbp+4Ch]

  if ( qword_180407010 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    {
      v3 = *((_QWORD *)this + 15);
      v24[0] = off_18030B608;
      v24[7] = v24;
      CProcessAttributionObserver::ForEachChangedProcessAttribution(v3, this, v24);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        v4 = *(_QWORD *)this;
        v5 = *((_QWORD *)this + 3);
        v6 = *((_QWORD *)this + 6);
        v7 = *((_QWORD *)this + 9);
        v8 = *((_QWORD *)this + 12);
        v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
        v10 = *((_QWORD *)this + 4) - v5;
        v11 = *((_QWORD *)this + 7) - v6;
        v12 = *((_QWORD *)this + 13);
        v13 = *((_QWORD *)this + 10) - v7;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v49 = 0;
        v52 = 0;
        v55 = 0;
        v29 = v4;
        v9 >>= 2;
        v10 >>= 2;
        v11 >>= 2;
        v13 >>= 2;
        v14 = (v12 - v8) >> 2;
        v30 = 4 * v9;
        v32 = &v20;
        v36 = 4 * v10;
        v38 = &v21;
        v42 = 4 * v11;
        v44 = &v22;
        v48 = 4 * v13;
        v50 = &v23;
        v26 = &v19;
        v54 = 4 * v14;
        v19 = v9;
        v35 = v5;
        v41 = v6;
        LODWORD(v23) = v14;
        v22 = v13;
        v21 = v11;
        v20 = v10;
        v27 = 4;
        v33 = 4;
        v39 = 4;
        v45 = 4;
        v47 = v7;
        v51 = 4;
        v53 = v8;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_PROCESS_ATTRIBUTION,
          v10,
          0xBu,
          &v25);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        {
          if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
            *((_QWORD *)this + 1) = *(_QWORD *)this;
          v15 = *((_QWORD *)this + 3);
          if ( v15 != *((_QWORD *)this + 4) )
            *((_QWORD *)this + 4) = v15;
          v16 = *((_QWORD *)this + 6);
          if ( v16 != *((_QWORD *)this + 7) )
            *((_QWORD *)this + 7) = v16;
          v17 = *((_QWORD *)this + 9);
          if ( v17 != *((_QWORD *)this + 10) )
            *((_QWORD *)this + 10) = v17;
          v18 = *((_QWORD *)this + 12);
          if ( v18 != *((_QWORD *)this + 13) )
            *((_QWORD *)this + 13) = v18;
        }
      }
    }
  }
}
