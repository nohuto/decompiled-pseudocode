/*
 * XREFs of HalpReportResourceUsage @ 0x140C10954
 * Callers:
 *     HalReportResourceUsage @ 0x140C0F6E0 (HalReportResourceUsage.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     HalTranslateBusAddress @ 0x14044E090 (HalTranslateBusAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpClaimDebugResource @ 0x140543C54 (HalpClaimDebugResource.c)
 *     RtlCmEncodeMemIoResource @ 0x1405E6EA0 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     HalpGetResourceSortValue @ 0x140C10904 (HalpGetResourceSortValue.c)
 *     IoReportHalResourceUsage @ 0x140C24DD0 (IoReportHalResourceUsage.c)
 */

void __fastcall HalpReportResourceUsage(__int64 a1)
{
  __int64 v1; // r11
  unsigned int *v2; // rsi
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r12
  _DWORD *v8; // r14
  char *v9; // rcx
  char *v10; // r8
  unsigned __int8 v11; // dl
  ULONG_PTR v12; // rdi
  unsigned int v13; // r8d
  char v14; // cl
  unsigned int v15; // eax
  __int64 v16; // r13
  char v17; // r8
  unsigned int v18; // edx
  ULONG_PTR v19; // r13
  ULONGLONG v20; // r8
  int v21; // ecx
  ULONGLONG v22; // r9
  NTSTATUS v23; // eax
  _DWORD *v24; // r9
  _DWORD *v25; // rcx
  _DWORD *v26; // r11
  int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // r10
  unsigned int v30; // r15d
  int v31; // esi
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  int v34; // r11d
  __int64 v35; // r14
  __int64 v36; // r10
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // r10
  int v40; // r11d
  bool v41; // cc
  int v42; // ecx
  __int128 v43; // xmm1
  int v44; // ecx
  __int128 v45; // xmm1
  char v46; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v47; // [rsp+39h] [rbp-CFh]
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  unsigned int v49; // [rsp+3Ch] [rbp-CCh]
  unsigned int v50; // [rsp+40h] [rbp-C8h]
  ULONG AddressSpace; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int Descriptor; // [rsp+48h] [rbp-C0h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor_8; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-9Ch]
  _DWORD *v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-80h]
  _BYTE v60[20]; // [rsp+90h] [rbp-78h]
  _DWORD *v61; // [rsp+A8h] [rbp-60h]
  LARGE_INTEGER TranslatedAddress; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v63; // [rsp+B8h] [rbp-50h]
  _DWORD *v64; // [rsp+C0h] [rbp-48h]
  __int64 Pool2; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  struct _KAFFINITY_EX v67; // [rsp+D8h] [rbp-30h] BYREF

  v66 = a1;
  memset_0(&v67, 0, sizeof(v67));
  v1 = KdComPortInUse;
  Descriptor = 0;
  v57 = 0LL;
  v54 = 0;
  v58 = 0LL;
  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  memset(&Descriptor_8, 0, sizeof(Descriptor_8));
  if ( KdComPortInUse )
    HalpClaimDebugResource((ULONG_PTR)&HalpKdComIoSpace, KdComPortInUse);
  if ( KdHvComPortInUse && KdHvComPortInUse != v1 )
    HalpClaimDebugResource((ULONG_PTR)&HalpHvComIoSpace, KdHvComPortInUse);
  Pool2 = ExAllocatePool2(0x40uLL, 0x2000uLL, 0x6D6C6148uLL);
  v2 = (unsigned int *)Pool2;
  v3 = ExAllocatePool2(0x40uLL, 0x2000uLL, 0x6D6C6148uLL);
  v56 = (_DWORD *)v3;
  v4 = (_DWORD *)v3;
  if ( !Pool2 || !v3 )
    KeBugCheckEx(0xACu, 0x4000uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\misc\\usage.c", 0x18EuLL);
  v5 = Pool2 + 4;
  v6 = 0;
  *(_DWORD *)(Pool2 + 4) = -1;
  v7 = v3 + 4;
  v63 = v2 + 1;
  v8 = v2 + 1;
  v61 = (_DWORD *)(v3 + 4);
  v9 = HalpIDTUsageFlags;
  v10 = byte_141008AD1;
  do
  {
    if ( (*v9 & 1) == 0 )
    {
      *v9 = 17;
      *(_DWORD *)v10 = v6;
    }
    ++v6;
    ++v9;
    v10 += 5;
  }
  while ( v6 < 0x30 );
  v64 = 0LL;
  v11 = 0;
  v59 = 0LL;
LABEL_13:
  v47 = v11;
  if ( v11 < 2u )
  {
    v12 = HalpAddressUsageList;
    v48 = 0;
    v13 = 0;
    v14 = v11 != 0 ? 16 : 32;
    v46 = v14;
LABEL_15:
    v15 = 0;
    v50 = 0;
    while ( 1 )
    {
      while ( v13 > 0xFF )
      {
        if ( !v12 )
        {
          v11 = v47 + 1;
          goto LABEL_13;
        }
        if ( ((unsigned __int8)v14 & *(_BYTE *)(v12 + 12)) == 0 )
        {
          v12 = *(_QWORD *)v12;
          goto LABEL_15;
        }
        v19 = v15;
        v20 = *(_QWORD *)(v12 + 16LL * v15 + 21);
        if ( !v20 )
          goto LABEL_24;
        v21 = *(_DWORD *)(v12 + 8);
        if ( ((v21 - 1) & 0xFFFFFFF9) != 0 || v21 == 5 )
        {
          v14 = v46;
LABEL_24:
          v4 = v56;
          v12 = *(_QWORD *)v12;
          v13 = v48;
          goto LABEL_15;
        }
        v22 = *(_QWORD *)(v12 + 16LL * v15 + 13);
        Descriptor_8.Flags = 0;
        v23 = RtlCmEncodeMemIoResource(&Descriptor_8, v21, v20, v22);
        if ( v23 < 0 )
          KeBugCheckEx(0x5Cu, 0x10FuLL, v23, v12, v19);
        Descriptor_8.ShareDisposition = 2;
        if ( Descriptor_8.Type == 1 )
        {
          AddressSpace = 1;
          Descriptor_8.Flags = 17;
        }
        else if ( Descriptor_8.Type == 3 || Descriptor_8.Type == 7 )
        {
          AddressSpace = 0;
          if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
            Descriptor_8.Flags |= 1u;
        }
        v55 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
        *(_OWORD *)v60 = *(_OWORD *)&Descriptor_8.Type;
        HalTranslateBusAddress(Internal, 0, Descriptor_8.u.Generic.Start, &AddressSpace, &TranslatedAddress);
        *(LARGE_INTEGER *)&v60[4] = TranslatedAddress;
        if ( Descriptor_8.Type == 1 && !AddressSpace )
          *(_WORD *)&v60[2] = 0;
        v13 = v48;
        v15 = v50 + 1;
        v18 = v55;
        ++v50;
LABEL_38:
        v4 = v56;
        v24 = v61;
        if ( *v63 )
        {
          ++*v2;
          v25 = v24 + 2;
          ++*v4;
          *v8 = 0;
          *v24 = 0;
          v26 = v8 + 2;
          v63 = v8;
          v24 += 4;
          v8 += 4;
          v64 = v26;
          v59 = (unsigned __int64)v25;
        }
        else
        {
          v26 = v64;
          v25 = (_DWORD *)v59;
        }
        ++v26[1];
        ++v25[1];
        v27 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
        *(_OWORD *)v8 = *(_OWORD *)&Descriptor_8.Type;
        v8[4] = v27;
        v8 += 5;
        v14 = v46;
        *(_OWORD *)v24 = *(_OWORD *)v60;
        v24[4] = v18;
        v61 = v24 + 5;
      }
      v16 = v13;
      if ( ((unsigned __int8)v14 & (unsigned __int8)HalpIDTUsageFlags[v13]) != 0 )
      {
        *(_QWORD *)&v67.Count = 2097153LL;
        memset_0(&v67.8, 0, sizeof(v67.8));
        KiCopyAffinityEx(&v67, v67.Size, &KeActiveProcessors);
        v17 = HalpIDTUsageFlags[v16];
        *(_WORD *)&Descriptor_8.Type = 514;
        Descriptor_8.Flags = (v17 & 2) != 0;
        *(_QWORD *)&v60[12] = v67.Bitmap[0];
        Descriptor_8.u.Interrupt.Affinity = v67.Bitmap[0];
        *(_DWORD *)&v60[8] = v48;
        Descriptor_8.u.Generic.Start.HighPart = *(_DWORD *)&HalpIDTUsage[5 * v16 + 1];
        Descriptor_8.u.Generic.Start.LowPart = LOWORD(Descriptor_8.u.MessageInterrupt.Translated.Vector);
        *(_WORD *)v60 = 514;
        *(_WORD *)&v60[2] = Descriptor_8.Flags;
        v13 = v48 + 1;
        v18 = HIDWORD(v67.StaticBitmap[0]);
        *(_DWORD *)&v60[4] = (unsigned __int8)HalpIDTUsage[5 * v16];
        v15 = v50;
        ++v48;
        goto LABEL_38;
      }
      v15 = v50;
      ++v13;
      v4 = v56;
      v48 = v13;
    }
  }
  v49 = 0;
  v59 = (unsigned int)((_DWORD)v8 - (_DWORD)v2);
  v28 = 0;
  if ( *v2 )
  {
LABEL_46:
    v29 = v5 + 16;
    v7 += 16LL;
    v30 = *(_DWORD *)(v5 + 12);
    v55 = v30;
    if ( !v30 )
      goto LABEL_58;
    while ( 1 )
    {
      HalpGetResourceSortValue(v29, &Descriptor, &v57);
      v31 = HIDWORD(v57);
      v32 = v30;
      v33 = Descriptor;
      v35 = v32 - v34;
      v37 = v36;
      v38 = v7;
      do
      {
        HalpGetResourceSortValue(v37, &v54, &v58);
        if ( v54 >= v33 )
        {
          if ( v54 != v33 )
            goto LABEL_55;
          v41 = SHIDWORD(v58) < v31;
          if ( HIDWORD(v58) != v31 )
            goto LABEL_53;
          if ( (unsigned int)v58 >= (unsigned int)v57 )
          {
            v41 = SHIDWORD(v58) < v31;
LABEL_53:
            if ( !v41 )
              goto LABEL_55;
          }
        }
        v42 = *(_DWORD *)(v39 + 16);
        v43 = *(_OWORD *)v39;
        *(_OWORD *)v39 = *(_OWORD *)v37;
        *(_DWORD *)(v39 + 16) = *(_DWORD *)(v37 + 16);
        *(_OWORD *)v37 = v43;
        *(_DWORD *)(v37 + 16) = v42;
        v44 = *(_DWORD *)(v7 + 16);
        v45 = *(_OWORD *)v7;
        *(_OWORD *)v7 = *(_OWORD *)v38;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v38 + 16);
        *(_OWORD *)v38 = v45;
        *(_DWORD *)(v38 + 16) = v44;
        HalpGetResourceSortValue(v39, &Descriptor, &v57);
        v31 = HIDWORD(v57);
        v33 = Descriptor;
LABEL_55:
        v37 += 20LL;
        v38 += 20LL;
        --v35;
      }
      while ( v35 );
      v30 = v55;
      v29 = v39 + 20;
      v7 += 20LL;
      if ( v40 + 1 >= v55 )
      {
        v2 = (unsigned int *)Pool2;
        v28 = v49;
LABEL_58:
        ++v28;
        v5 = v29;
        v49 = v28;
        if ( v28 >= *v2 )
        {
          v4 = v56;
          break;
        }
        goto LABEL_46;
      }
    }
  }
  IoReportHalResourceUsage(v66, v2, v4, (unsigned int)v59);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v4, 0);
}
