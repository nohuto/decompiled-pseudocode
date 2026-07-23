/*
 * XREFs of MiLogTrimWs @ 0x14038F63C
 * Callers:
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  _UNKNOWN **v7; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r14
  char v17; // al
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // r8d
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+30h] [rbp-D8h]
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39[6]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v40[16]; // [rsp+D8h] [rbp-30h] BYREF
  int *v41; // [rsp+E8h] [rbp-20h]
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
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  __int64 *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  v7 = &retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    v12 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
    v13 = (*(_DWORD *)(a1 + 184) & 0xF) != 0 ? 0LL : a1 - 200;
    v7 = *(_UNKNOWN ***)(v12 + 19392);
    v14 = *(_QWORD *)(a1 + 144);
    v15 = *(_QWORD *)(a1 + 152);
    v16 = *(_QWORD *)(v12 + 18688);
    if ( **(_DWORD **)&qword_140E37658 > 5u )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 1) == 0
        || (LOBYTE(v7) = 1,
            (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 1LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL)) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 )
      {
        v17 = *(_DWORD *)(a1 + 184) & 0xF;
        v39[5] = 1LL;
        LOBYTE(v25) = v17;
        v39[4] = (__int64)&v25;
        tlgCreate1Sz_char(v40, v13);
        v26 = v18;
        v41 = &v26;
        v42 = 4LL;
        v43 = &v30;
        v30 = v14;
        v45 = &v31;
        v44 = 8LL;
        v47 = &v32;
        v49 = &v33;
        v51 = &v34;
        v35 = a5;
        v53 = &v35;
        v55 = &v36;
        v57 = &v37;
        v59 = &v38;
        v27 = a6;
        v61 = &v27;
        v28 = a7;
        v63 = &v28;
        LODWORD(v29) = *(unsigned __int16 *)(v19 + 174);
        v65 = &v29;
        v31 = v15;
        v46 = 8LL;
        v32 = a3;
        v48 = 8LL;
        v33 = a4;
        v50 = 8LL;
        v34 = a2;
        v52 = 8LL;
        v54 = 8LL;
        v36 = v16;
        v56 = 8LL;
        v37 = v20;
        v58 = 8LL;
        v38 = v20;
        v60 = 8LL;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        LOBYTE(v7) = tlgWriteEx_EtwWriteEx(v21, (int)&byte_1400572C1, v21, 1, v23, v24, 0x11u, (__int64)v39);
      }
    }
  }
  return (char)v7;
}
