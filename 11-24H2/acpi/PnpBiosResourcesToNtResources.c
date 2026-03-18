/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1400BB1A4
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x14004C5DC (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x14005CACC (TranslateBindMutexResources.c)
 *     ACPIIoctlTranslateBiosResources @ 0x14009ECE0 (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400A1F20 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     TranslateEjectInterface @ 0x1400A84F8 (TranslateEjectInterface.c)
 *     LinkNodeGetPossibleResources @ 0x1400A8ED0 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dL @ 0x140052A68 (WPP_RECORDER_SF_dL.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x140054188 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1400552EC (WPP_RECORDER_SF_dqLD.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     PnpiClearAllocatedMemory @ 0x1400966F0 (PnpiClearAllocatedMemory.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x140097B80 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400A43CC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1400A4C40 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1400A4D08 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1400A4D70 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1400A4DD4 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1400A4EA8 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1400A4F28 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1400A4FBC (PnpiBiosVendorToNtIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400BADE8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1400BBDE0 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1400BC068 (PnpiGrowResourceList.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174 (PnpiBiosAddressDoubleToIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, _BYTE *a2, unsigned int a3, __int64 *a4)
{
  int v4; // esi
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  ULONG_PTR v8; // r10
  PVOID *v9; // r15
  unsigned __int8 v10; // di
  int v11; // edx
  int v12; // r13d
  unsigned __int16 v13; // ax
  _BYTE *v14; // rsi
  unsigned __int16 v15; // cx
  int v16; // eax
  unsigned __int16 v17; // r9
  unsigned int v18; // edi
  int v19; // eax
  unsigned __int8 v20; // di
  unsigned __int16 v21; // r13
  unsigned __int8 j; // si
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // di
  unsigned __int16 i; // si
  unsigned int v26; // eax
  unsigned __int8 v27; // di
  unsigned __int8 v28; // r13
  unsigned __int8 v29; // al
  __int64 DeviceExtension; // rdi
  unsigned __int8 v31; // r12
  unsigned int v32; // esi
  unsigned int v33; // ebx
  int v34; // edi
  _DWORD *v35; // rcx
  int v36; // eax
  int v38; // eax
  unsigned int v39; // ebx
  int v40; // r9d
  __int64 Pool2; // rax
  int v42; // edx
  __int64 v43; // r9
  __int64 *v44; // r13
  __int64 v45; // rdi
  __int64 v46; // rdx
  char *v47; // rdi
  unsigned int v48; // r12d
  _DWORD *v49; // rcx
  int v50; // eax
  size_t v51; // rbx
  char *v52; // rdi
  unsigned int v53; // esi
  _DWORD *v54; // rcx
  int v55; // eax
  size_t v56; // rbx
  int v57; // [rsp+28h] [rbp-49h]
  __int64 v58; // [rsp+30h] [rbp-41h]
  __int64 v59; // [rsp+38h] [rbp-39h]
  unsigned int v60; // [rsp+58h] [rbp-19h]
  unsigned __int8 v61; // [rsp+5Ch] [rbp-15h]
  char v62[3]; // [rsp+5Dh] [rbp-14h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-11h] BYREF
  int v64; // [rsp+64h] [rbp-Dh]
  int v65; // [rsp+68h] [rbp-9h]
  unsigned int v66; // [rsp+6Ch] [rbp-5h]
  unsigned __int16 v67; // [rsp+70h] [rbp-1h]
  int v68; // [rsp+74h] [rbp+3h]
  PVOID P; // [rsp+78h] [rbp+7h] BYREF
  int v70; // [rsp+80h] [rbp+Fh]

  P = 0LL;
  v63 = 0;
  v4 = 0;
  v60 = 0;
  v66 = 0;
  v62[0] = 0;
  v64 = 0;
  v65 = 0;
  v5 = PnpiGrowResourceList(&P, &v63);
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
        v5);
    return (unsigned int)v7;
  }
  v8 = (ULONG_PTR)a2;
  v9 = (PVOID *)P;
  v68 = 32;
  while ( 1 )
  {
    v10 = *(_BYTE *)v8;
    v11 = 3;
    v12 = v4;
    if ( *(char *)v8 < 0 )
    {
      v14 = (_BYTE *)(v8 + 1);
      v15 = *(_WORD *)(v8 + 1) + 3;
      v67 = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v59) = v15;
        LODWORD(v58) = v10;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          0x23u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v58,
          v59);
        v8 = (ULONG_PTR)a2;
      }
    }
    else
    {
      v13 = (v10 & 7) + 1;
      v67 = v13;
      v10 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v59) = v13;
        LODWORD(v58) = v10;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          0x22u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v58,
          v59);
        v8 = (ULONG_PTR)a2;
      }
      v14 = (_BYTE *)(v8 + 1);
    }
    if ( v10 == 120 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          14,
          36,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      }
      if ( !v64 || v65 == v64 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            14,
            55,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        }
        PnpiClearAllocatedMemory(v9, v63);
        *a4 = 0LL;
        return (unsigned int)v7;
      }
      if ( *v9 )
        v32 = *((_DWORD *)*v9 + 1);
      else
        v32 = 0;
      v33 = 1;
      v34 = 32;
      while ( v33 <= v66 )
      {
        v35 = v9[v33];
        if ( !v35 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v58) = v33;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xDu,
              0x39u,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
              v58);
          }
          goto LABEL_140;
        }
        v36 = v35[1];
        if ( v36 )
        {
          v34 += 32 * (v32 + v36) + 8;
          v68 = v34;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x3Au, v57);
        }
        ++v33;
      }
      if ( v66 )
      {
        v39 = v68;
      }
      else
      {
        if ( !*v9 || (v38 = *((_DWORD *)*v9 + 1)) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_140:
            PnpiClearAllocatedMemory(v9, v63);
            *a4 = 0LL;
            return 3221225473LL;
          }
          v40 = 59;
LABEL_147:
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            13,
            v40,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          goto LABEL_140;
        }
        v39 = 32 * v38 + v68 + 8;
      }
      if ( v39 < 0x48 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_140;
        v40 = 60;
        goto LABEL_147;
      }
      Pool2 = ExAllocatePool2(256LL, v39, 1383097153LL);
      v44 = a4;
      *a4 = Pool2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v59) = v39;
        WPP_RECORDER_SF_qL(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          0x3Du,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          Pool2,
          v59);
      }
      v45 = *a4;
      if ( !*a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v42,
            13,
            62,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        }
        v7 = -1073741670;
        goto LABEL_158;
      }
      v46 = v66;
      *(_QWORD *)(v45 + 4) = 15LL;
      *(_DWORD *)v45 = v39;
      v47 = (char *)(v45 + 32);
      v48 = 1;
      if ( (_DWORD)v46 )
      {
        if ( !v32 )
        {
          v53 = 1;
          do
          {
            v54 = v9[v53];
            v55 = v54[1];
            if ( v55 )
            {
              v54[1] = v55;
              v56 = (unsigned int)(32 * v55 + 8);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, v46, 0LL, v43, v57);
              memmove(v47, v9[v53], v56);
              v47 += v56;
              v46 = v66;
              ++*(_DWORD *)(*a4 + 28);
            }
            ++v53;
          }
          while ( v53 <= (unsigned int)v46 );
          goto LABEL_169;
        }
        do
        {
          v49 = v9[v48];
          v50 = v49[1];
          if ( v50 )
          {
            v51 = (unsigned int)(32 * v50 + 8);
            v49[1] = v32 + v50;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, v46, 0LL, v43, v57);
            memmove(v47, v9[v48], v51);
            v52 = &v47[v51];
            memmove(v52, (char *)*v9 + 8, 32LL * v32);
            v44 = a4;
            v47 = &v52[32 * v32];
            v46 = v66;
            ++*(_DWORD *)(*a4 + 28);
          }
          else
          {
            v44 = a4;
          }
          ++v48;
        }
        while ( v48 <= (unsigned int)v46 );
      }
      if ( !(_DWORD)v46 )
      {
        memmove(v47, *v9, 32 * v32 + 8);
        ++*(_DWORD *)(*v44 + 28);
      }
LABEL_169:
      PnpiClearAllocatedMemory(v9, v63);
      return 0LL;
    }
    ++v64;
    v70 = v10;
    if ( v10 > 0x85u )
      break;
    if ( v10 == 133 )
      goto LABEL_113;
    if ( v10 <= 0x48u )
    {
      if ( v10 != 72 )
      {
        switch ( v10 )
        {
          case ' ':
            v24 = *(_WORD *)(v8 + 1);
            v21 = 0;
            for ( i = 0; v24; v24 >>= 1 )
            {
              if ( v7 < 0 )
                break;
              if ( (v24 & 1) != 0 )
                v7 = PnpiBiosIrqToIoDescriptor(a2, i, (__int64)v9, v60, v21++);
              ++i;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v23 = 37;
            break;
          case '(':
            v20 = *(_BYTE *)(v8 + 1);
            v21 = 0;
            for ( j = 0; v20; v20 >>= 1 )
            {
              if ( v7 < 0 )
                break;
              if ( (v20 & 1) != 0 )
                v7 = PnpiBiosDmaToIoDescriptor((__int64)a2, j, (__int64)v9, v60, v21++);
              ++j;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v23 = 39;
            break;
          case '0':
            v18 = v66 + 1;
            v66 = v18;
            v60 = v18;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                0x29u,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            if ( v18 == v63 )
            {
              v19 = PnpiGrowResourceList(&P, &v63);
              v9 = (PVOID *)P;
              v7 = v19;
            }
            goto LABEL_117;
          case '8':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                0x2Au,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            v60 = 0;
            goto LABEL_117;
          case '@':
            v16 = PnpiBiosPortToIoDescriptor(v8, (__int64)v9, v60, a3);
            v7 = v16;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v17 = 43;
            goto LABEL_115;
          default:
            goto LABEL_71;
        }
        v26 = v21;
        goto LABEL_45;
      }
      v16 = PnpiBiosPortFixedToIoDescriptor(v8, (__int64)v9, v60, a3);
      v7 = v16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v17 = 44;
LABEL_115:
      LODWORD(v58) = v16;
      goto LABEL_116;
    }
    switch ( v10 )
    {
      case 0x50u:
        v16 = PnpiBiosDmaToIoDescriptorV3(v8, (__int64)v9, v60);
        v7 = v16;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v17 = 40;
        goto LABEL_115;
      case 0x70u:
        ++v65;
        v7 = 0;
        goto LABEL_119;
      case 0x81u:
        goto LABEL_113;
      case 0x84u:
        v7 = 0;
        if ( a1 )
        {
          if ( (int)PnpiBiosVendorToNtIoDescriptor(a1, v8, v6, (__int64)v9, v60, a3, v62) < 0 || !v62[0] )
            ++v65;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x35u,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        }
        else
        {
          ++v65;
        }
        goto LABEL_118;
    }
LABEL_71:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xDu,
        0x36u,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
    v8 = (ULONG_PTR)a2;
    v7 = 0;
    v64 = v12;
    v4 = v12;
LABEL_120:
    v8 += v67;
    a2 = (_BYTE *)v8;
  }
  switch ( v10 )
  {
    case 0x86u:
LABEL_113:
      v16 = PnpiBiosMemoryToIoDescriptor(v8, v9, v60);
      v7 = v16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v17 = 45;
      goto LABEL_115;
    case 0x87u:
      v16 = PnpiBiosAddressDoubleToIoDescriptor(v8);
      v7 = v16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v17 = 47;
      goto LABEL_115;
    case 0x88u:
      v16 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)v8, (__int64)v9, v60, a3);
      v7 = v16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v17 = 46;
      goto LABEL_115;
  }
  if ( v10 != 137 )
  {
    switch ( v10 )
    {
      case 0x8Au:
        v16 = PnpiBiosAddressQuadToIoDescriptor((unsigned __int8 *)v8, (__int64)v9, v60, a3);
        v7 = v16;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v17 = 48;
        goto LABEL_115;
      case 0x8Bu:
        v16 = PnpiBiosAddressExtendedToIoDescriptor((unsigned __int8 *)v8, (__int64)v9, v60, a3);
        v7 = v16;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v17 = 49;
        goto LABEL_115;
      case 0x8Cu:
        v27 = 0;
        if ( a1 )
        {
          do
          {
            if ( v7 < 0 )
              break;
            v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, (__int64)a2, v6, (__int64)v9, v60, a3);
            ++v27;
          }
          while ( !v27 );
        }
        else
        {
          v7 = -1073741637;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v26 = v27;
        v23 = 51;
        goto LABEL_45;
      case 0x8Du:
        if ( a1 )
          v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v8, v6, (__int64)v9, v60, a3);
        else
          v7 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v17 = 50;
LABEL_84:
        LODWORD(v58) = v7;
LABEL_116:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          v17,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v58);
        goto LABEL_117;
      case 0x8Eu:
        if ( a1 )
          v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v8, v6, (__int64)v9, v60, a3);
        else
          v7 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 52;
          goto LABEL_84;
        }
LABEL_117:
        if ( v7 < 0 )
          goto LABEL_122;
LABEL_118:
        v8 = (ULONG_PTR)a2;
LABEL_119:
        v4 = v64;
        goto LABEL_120;
    }
    goto LABEL_71;
  }
  v28 = *(_BYTE *)(v8 + 4);
  v61 = 0;
  LOBYTE(v6) = *v14 + 3;
  v29 = 4 * v28 + 5;
  if ( AcpiInterruptCombiningSupported != 1 || (unsigned __int8)v6 <= v29 )
  {
    DeviceExtension = 0LL;
    if ( gAcpiHonorBiosPolarities && a1 )
      DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    if ( v28 )
    {
      v31 = 0;
      do
      {
        if ( v7 < 0 )
          break;
        LOBYTE(v6) = v31++;
        v7 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, (__int64)a2, v6, (__int64)v9, v60);
      }
      while ( v31 < v28 );
      v61 = v31;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_117;
    v26 = v61;
    v23 = 38;
LABEL_45:
    LODWORD(v59) = v7;
    LODWORD(v58) = v26;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      v23,
      (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
      v58,
      v59);
    goto LABEL_117;
  }
  if ( a1 )
  {
    v7 = PnpiBiosInterruptCombineToIoDescriptor(a1, v8, (unsigned __int8)v6 - v29 - 1, (int)v9, v60, a3);
    goto LABEL_117;
  }
  v7 = -1073741637;
LABEL_122:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 0xDu, 0x38u, v57);
LABEL_158:
  PnpiClearAllocatedMemory(v9, v63);
  return (unsigned int)v7;
}
