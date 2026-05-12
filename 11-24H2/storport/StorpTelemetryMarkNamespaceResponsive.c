/*
 * XREFs of StorpTelemetryMarkNamespaceResponsive @ 0x1400B5E48
 * Callers:
 *     NvmeNamespaceClearUnresponsiveAttribute @ 0x1400FC704 (NvmeNamespaceClearUnresponsiveAttribute.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140111AB4 (NvmeNamespaceSetQOSIoctl.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMarkNamespaceResponsive(__int64 a1)
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
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int128 *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int128 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int64 v45; // [rsp+110h] [rbp+10h] BYREF
  char v46; // [rsp+118h] [rbp+18h]
  __int128 v47; // [rsp+120h] [rbp+20h] BYREF
  int v48; // [rsp+130h] [rbp+30h]
  char v49; // [rsp+134h] [rbp+34h]
  __int128 v50; // [rsp+138h] [rbp+38h] BYREF
  __int128 v51; // [rsp+148h] [rbp+48h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  char v53; // [rsp+160h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 16);
  v48 = 0;
  v47 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v2 = a1;
  v51 = 0LL;
  v53 = 0;
  v45 = 0LL;
  v46 = 0;
  v3 = *(_QWORD *)(v1 + 592);
  if ( v3 )
  {
    v47 = *(_OWORD *)(v3 + 4);
    v48 = *(_DWORD *)(v3 + 20);
    v4 = *(_QWORD *)(v1 + 592);
    v50 = *(_OWORD *)(v4 + 24);
    v51 = *(_OWORD *)(v4 + 40);
    v52 = *(_QWORD *)(v4 + 56);
    a1 = *(_QWORD *)(*(_QWORD *)(v1 + 592) + 64LL);
    v45 = a1;
  }
  v5 = *(_DWORD *)(v2 + 112);
  if ( (v5 & 0x200) != 0 && (unsigned int)dword_140170178 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v10 = *(_QWORD *)(v7 + 128) + 1032LL;
      v23 = 16LL;
      v22 = v10;
      v24 = v8 + 160;
      v25 = 16LL;
      v16 = *(_DWORD *)(*(_QWORD *)(v7 + 128) + 56LL);
      v11 = -1LL;
      v26 = &v16;
      v12 = -1LL;
      v27 = 4LL;
      do
        ++v12;
      while ( *((_BYTE *)&v47 + v12) != (_BYTE)v9 );
      v30 = v9;
      v29 = v12 + 1;
      v28 = &v47;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)&v50 + v13) != (_BYTE)v9 );
      v33 = v9;
      v32 = v13 + 1;
      v31 = &v50;
      do
        ++v11;
      while ( *((_BYTE *)&v45 + v11) != (_BYTE)v9 );
      v36 = v9;
      v34 = &v45;
      v14 = (unsigned int)(v11 + 1);
      v17 = *(_DWORD *)(v8 + 56);
      v37 = &v17;
      v18 = *(unsigned __int16 *)(v8 + 654);
      v39 = &v18;
      v19 = *(_DWORD *)(v8 + 656);
      v41 = &v19;
      v20 = *(_DWORD *)(v8 + 660);
      v43 = &v20;
      v35 = v14;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_140160114, v6, v7, 0xCu, &v21);
    }
  }
  return v5;
}
