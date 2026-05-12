/*
 * XREFs of NvmeAdapterCompleteInitialization @ 0x1400CD5A8
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     StorCreateSymbolicLink @ 0x14004D2B0 (StorCreateSymbolicLink.c)
 *     RaidDmaGetAdapterInfo @ 0x14006B154 (RaidDmaGetAdapterInfo.c)
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     RaidQueryPciDeviceType @ 0x14008DB80 (RaidQueryPciDeviceType.c)
 *     McTemplateK0qjzhqzusiddq_EtwWriteTransfer @ 0x1400CB904 (McTemplateK0qjzhqzusiddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaidInitializeDma @ 0x140183F38 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1401840CC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall NvmeAdapterCompleteInitialization(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int SymbolicLink; // esi
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rcx
  const char *v8; // r8
  int v9; // r11d
  __int64 v10; // rdx
  __int16 v11; // r9
  __int64 v12; // rax
  int v13; // ecx
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rdx
  bool v16; // cf
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v23; // [rsp+90h] [rbp-78h] BYREF
  int v24; // [rsp+94h] [rbp-74h] BYREF
  int v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v27[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v28; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v30; // [rsp+128h] [rbp+20h]
  int v31; // [rsp+130h] [rbp+28h]
  int v32; // [rsp+134h] [rbp+2Ch]
  __int64 v33; // [rsp+138h] [rbp+30h]
  int v34; // [rsp+140h] [rbp+38h]
  int v35; // [rsp+144h] [rbp+3Ch]
  int *v36; // [rsp+148h] [rbp+40h]
  int v37; // [rsp+150h] [rbp+48h]
  int v38; // [rsp+154h] [rbp+4Ch]
  int *v39; // [rsp+158h] [rbp+50h]
  int v40; // [rsp+160h] [rbp+58h]
  int v41; // [rsp+164h] [rbp+5Ch]
  char v42[16]; // [rsp+168h] [rbp+60h] BYREF
  char *v43; // [rsp+178h] [rbp+70h]
  int v44; // [rsp+180h] [rbp+78h]
  int v45; // [rsp+184h] [rbp+7Ch]
  char v46[16]; // [rsp+188h] [rbp+80h] BYREF
  int *v47; // [rsp+198h] [rbp+90h]
  int v48; // [rsp+1A0h] [rbp+98h]
  int v49; // [rsp+1A4h] [rbp+9Ch]
  int *v50; // [rsp+1A8h] [rbp+A0h]
  int v51; // [rsp+1B0h] [rbp+A8h]
  int v52; // [rsp+1B4h] [rbp+ACh]

  memset_0(v27, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 && !(unsigned __int8)RaidIsDmaInitialized(a1 + 1144) )
  {
    SymbolicLink = RaidInitializeDma(v2, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( SymbolicLink < 0 )
      goto LABEL_15;
    v27[0] = 1;
    if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1144), (__int64)v27) >= 0 && (v28 & 2) != 0 )
      *(_DWORD *)(a1 + 976) |= 8u;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 224);
  if ( v6 > *(_DWORD *)(v5 + 152) )
    *(_DWORD *)(v5 + 152) = v6;
  SymbolicLink = StorCreateSymbolicLink((PUNICODE_STRING)(a1 + 40), 1, (unsigned int *)(a1 + 56), (int *)a1);
  if ( SymbolicLink >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4LL) == 5 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 576) + 4LL) = -1;
      if ( RaidQueryPciDeviceType(*(struct _DEVICE_OBJECT **)(a1 + 32), (int *)(*(_QWORD *)(a1 + 576) + 4LL)) < 0 )
        *(_DWORD *)(*(_QWORD *)(a1 + 576) + 4LL) = -2;
      RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL));
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1012) = 14;
  }
LABEL_15:
  if ( (byte_140171467 & 8) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1136);
    if ( v7 )
    {
      v8 = (const char *)&word_140150F48;
      v9 = *(_DWORD *)(v7 + 744);
      if ( *(_QWORD *)(v7 + 752) )
        v8 = *(const char **)(v7 + 752);
    }
    else
    {
      v8 = byte_140151064;
      LOBYTE(v9) = 0;
    }
    if ( v7 )
      v11 = *(_WORD *)(v7 + 4);
    else
      LOBYTE(v11) = 0;
    v10 = (*(_QWORD *)(a1 + 144) & 1) != 0 ? 20 : 17;
    McTemplateK0qjzhqzusiddq_EtwWriteTransfer(
      a1 + 1032,
      v10,
      (__int64)v8,
      *(_DWORD *)(a1 + 56),
      a1 + 1032,
      *(const wchar_t **)(a1 + 1016),
      v11,
      v10,
      *(const wchar_t **)(a1 + 1024),
      v9,
      v8,
      *(_QWORD *)(a1 + 144),
      *(_DWORD *)(a1 + 976),
      SymbolicLink,
      *(_DWORD *)(a1 + 1012));
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v3, 0x400000000000LL) )
  {
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v30 = &v26;
    v33 = a1 + 1032;
    v22 = *(_DWORD *)(a1 + 56);
    v36 = &v22;
    v12 = *(_QWORD *)(a1 + 1136);
    v26 = 0x1000000LL;
    v31 = 8;
    v34 = 16;
    v37 = 4;
    if ( v12 )
      v13 = *(unsigned __int16 *)(v12 + 4);
    else
      v13 = 0;
    v14 = *(const wchar_t **)(a1 + 1016);
    v41 = 0;
    v23 = v13;
    v39 = &v23;
    v40 = 4;
    tlgCreate1Sz_wchar_t((__int64)v42, v14);
    v15 = *(const wchar_t **)(a1 + 1024);
    v16 = (*(_BYTE *)(a1 + 144) & 1) != 0;
    v44 = 1;
    v45 = 0;
    v21 = v16 ? 20 : 17;
    v43 = &v21;
    tlgCreate1Sz_wchar_t((__int64)v46, v15);
    v17 = *(unsigned int *)(a1 + 380);
    v49 = 0;
    v52 = 0;
    v47 = &v24;
    v50 = &v25;
    v24 = v17;
    v48 = 4;
    v25 = SymbolicLink;
    v51 = 4;
    tlgWriteTransfer_EtwWriteTransfer(v17, (unsigned __int8 *)dword_140162FA5, v18, v19, 0xBu, &v29);
  }
  return (unsigned int)SymbolicLink;
}
