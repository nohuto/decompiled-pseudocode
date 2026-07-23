/*
 * XREFs of MiLogCommitRequestFailed @ 0x140AA7460
 * Callers:
 *     MiCommitRequestFailed @ 0x140AA7400 (MiCommitRequestFailed.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 ProcessPartition; // rax
  int v7; // ett
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  int v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h] BYREF
  int v34; // [rsp+A8h] [rbp-60h] BYREF
  __int16 SessionId; // [rsp+ACh] [rbp-5Ch]
  __int16 v36; // [rsp+AEh] [rbp-5Ah]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B8h] [rbp-50h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  __int64 *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  __int64 *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  __int64 *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  __int64 *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF

  ProcessPartition = (__int64)&retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    _m_prefetchw((const void *)(a1 + 1532));
    LODWORD(ProcessPartition) = *(_DWORD *)(a1 + 1532);
    do
    {
      v7 = ProcessPartition;
      LODWORD(ProcessPartition) = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(a1 + 1532),
                                    ProcessPartition | 0x400,
                                    ProcessPartition);
    }
    while ( v7 != (_DWORD)ProcessPartition );
    if ( (ProcessPartition & 0x400) == 0 )
    {
      v34 = *(_DWORD *)(a1 + 464);
      SessionId = PsGetSessionId(a1);
      v36 = MEMORY[0xFFFFF780000002C4];
      v37 = *(_QWORD *)(a1 + 504);
      v8 = *(_QWORD *)(a1 + 760);
      v9 = *(_QWORD *)(v8 + 320);
      v10 = *(_QWORD *)(v8 + 256);
      v23 = *(_QWORD *)(a1 + 976);
      v24 = *(_QWORD *)(a1 + 984);
      v11 = *(_QWORD *)(a1 + 672);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 704);
      else
        v12 = 0LL;
      ProcessPartition = MiGetProcessPartition(a1);
      v13 = *(_QWORD *)(ProcessPartition + 19608);
      v14 = *(_QWORD *)(ProcessPartition + 19264);
      if ( **(_DWORD **)&qword_140E37658 > 2u )
      {
        LOBYTE(ProcessPartition) = tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000001000LL);
        if ( (_BYTE)ProcessPartition )
        {
          v31 = v16;
          v39 = &v34;
          v40 = 16LL;
          v41 = &v25;
          v25 = a2;
          v43 = &v22;
          v42 = 8LL;
          v45 = &v26;
          v47 = &v27;
          v49 = &v23;
          v51 = &v24;
          v53 = &v28;
          v55 = &v29;
          v57 = &v30;
          v59 = &v31;
          v61 = &v32;
          v63 = &v33;
          LODWORD(v22) = a3;
          v44 = 4LL;
          v26 = v9;
          v46 = 8LL;
          v27 = v10;
          v48 = 8LL;
          v50 = 8LL;
          v52 = 8LL;
          v28 = v18;
          v54 = 8LL;
          v29 = v12;
          v56 = 8LL;
          v30 = v17;
          v58 = 8LL;
          v60 = 8LL;
          v32 = v13;
          v62 = 8LL;
          v33 = v14;
          v64 = 8LL;
          LOBYTE(ProcessPartition) = tlgWriteEx_EtwWriteEx(
                                       v15,
                                       (unsigned __int8 *)&byte_140058593,
                                       v15,
                                       1u,
                                       v20,
                                       v21,
                                       0xFu,
                                       &v38);
        }
      }
    }
  }
  return ProcessPartition;
}
