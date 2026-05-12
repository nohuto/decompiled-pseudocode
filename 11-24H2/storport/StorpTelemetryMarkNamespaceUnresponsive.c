/*
 * XREFs of StorpTelemetryMarkNamespaceUnresponsive @ 0x1400B606C
 * Callers:
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140112140 (NvmeNamespaceSetUnresponsiveAttribute.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMarkNamespaceUnresponsive(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int128 *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  __int128 *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  __int64 *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+120h] [rbp+20h] BYREF
  char v49; // [rsp+128h] [rbp+28h]
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  int v51; // [rsp+140h] [rbp+40h]
  char v52; // [rsp+144h] [rbp+44h]
  __int128 v53; // [rsp+148h] [rbp+48h] BYREF
  __int128 v54; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  char v56; // [rsp+170h] [rbp+70h]

  v1 = *(_QWORD *)(a1 + 16);
  v51 = 0;
  v50 = 0LL;
  v52 = 0;
  v53 = 0LL;
  v55 = 0LL;
  v2 = a1;
  v54 = 0LL;
  v56 = 0;
  v48 = 0LL;
  v49 = 0;
  v3 = *(_QWORD *)(v1 + 592);
  if ( v3 )
  {
    v50 = *(_OWORD *)(v3 + 4);
    v51 = *(_DWORD *)(v3 + 20);
    v4 = *(_QWORD *)(v1 + 592);
    v53 = *(_OWORD *)(v4 + 24);
    v54 = *(_OWORD *)(v4 + 40);
    v55 = *(_QWORD *)(v4 + 56);
    a1 = *(_QWORD *)(*(_QWORD *)(v1 + 592) + 64LL);
    v48 = a1;
  }
  v5 = *(_DWORD *)(v2 + 112);
  if ( (v5 & 0x200) == 0 && (unsigned int)dword_140170178 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v10 = *(_QWORD *)(v7 + 128) + 1032LL;
      v24 = 16LL;
      v23 = v10;
      v25 = v8 + 160;
      v26 = 16LL;
      v16 = *(_DWORD *)(*(_QWORD *)(v7 + 128) + 56LL);
      v11 = -1LL;
      v27 = &v16;
      v12 = -1LL;
      v28 = 4LL;
      do
        ++v12;
      while ( *((_BYTE *)&v50 + v12) != (_BYTE)v9 );
      v31 = v9;
      v30 = v12 + 1;
      v29 = &v50;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)&v53 + v13) != (_BYTE)v9 );
      v34 = v9;
      v33 = v13 + 1;
      v32 = &v53;
      do
        ++v11;
      while ( *((_BYTE *)&v48 + v11) != (_BYTE)v9 );
      v37 = v9;
      v35 = &v48;
      v14 = (unsigned int)(v11 + 1);
      v17 = *(_DWORD *)(v8 + 56);
      v38 = &v17;
      v18 = *(unsigned __int16 *)(v8 + 654);
      v40 = &v18;
      v19 = *(_DWORD *)(v8 + 656);
      v42 = &v19;
      v20 = *(_DWORD *)(v8 + 660);
      v44 = &v20;
      v46 = &v21;
      v36 = v14;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v21 = v9;
      v47 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_140161428, v6, v7, 0xDu, &v22);
    }
  }
  return v5;
}
