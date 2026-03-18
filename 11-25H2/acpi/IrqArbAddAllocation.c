/*
 * XREFs of IrqArbAddAllocation @ 0x1400A9380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1400464E8 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x14004B234 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     WPP_RECORDER_SF_Dq @ 0x140053194 (WPP_RECORDER_SF_Dq.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1400566BC (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 *     IcGetPossibleInput @ 0x140096758 (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x140096BAC (IcAddPossibleReference.c)
 *     ProcessorGetDestinationMode @ 0x140096C38 (ProcessorGetDestinationMode.c)
 *     LinkNodeGetPossibleGsiv @ 0x1400A8EAC (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1400A8ED0 (LinkNodeGetPossibleResources.c)
 *     IcRemovePossibleReference @ 0x1400AAE18 (IcRemovePossibleReference.c)
 *     IcSetPossibleInput @ 0x1400B12E8 (IcSetPossibleInput.c)
 *     IrqArbGetDeviceIrql @ 0x1400B1664 (IrqArbGetDeviceIrql.c)
 *     PcisuppIsPciDevice @ 0x1400B1EC4 (PcisuppIsPciDevice.c)
 *     IrqArbGsivFromIrq @ 0x1400B3244 (IrqArbGsivFromIrq.c)
 *     IcIsInterruptTypeSecondary @ 0x1400C0568 (IcIsInterruptTypeSecondary.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400C05C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     ProcessorGetMsiConnectionData @ 0x1400C087C (ProcessorGetMsiConnectionData.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2, __int64 a3)
{
  int v3; // r13d
  char v4; // r14
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // r11d
  ULONGLONG v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int IsPciDevice; // r14d
  int PossibleInput; // eax
  int v15; // r13d
  unsigned __int8 v16; // bl
  bool v17; // zf
  __int64 v18; // rcx
  __int16 v19; // bx
  ULONGLONG v20; // rax
  BOOL v21; // r10d
  __int64 v22; // r11
  int v23; // r8d
  ULONGLONG v24; // r9
  int v25; // edx
  __int64 v26; // r8
  PVOID v27; // r9
  int v28; // r9d
  int v29; // edx
  __int64 Pool2; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // r8
  unsigned int i; // ebx
  __int64 v35; // r8
  int v36; // eax
  _DWORD *v37; // rcx
  __int128 v38; // xmm0
  unsigned int v39; // edx
  BOOL v40; // eax
  char v41; // bl
  int v42; // eax
  int v43; // ecx
  int v44; // r8d
  int v45; // ebx
  const char *v46; // r9
  const char *v47; // rdx
  const char *v48; // r8
  UCHAR v49; // r14
  NTSTATUS v50; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int Flagsa; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  char v55; // [rsp+80h] [rbp-80h] BYREF
  char v56; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned __int8 v57; // [rsp+82h] [rbp-7Eh] BYREF
  char v58; // [rsp+83h] [rbp-7Dh]
  char v59; // [rsp+84h] [rbp-7Ch]
  char v60; // [rsp+85h] [rbp-7Bh]
  int v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+8Ch] [rbp-74h]
  unsigned int v63; // [rsp+90h] [rbp-70h] BYREF
  int v64; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+A0h] [rbp-60h] BYREF
  int v67; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  __int128 v71; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v72; // [rsp+D0h] [rbp-30h]
  __int128 v73; // [rsp+E0h] [rbp-20h]
  __int128 v74; // [rsp+F0h] [rbp-10h]
  _QWORD v75[12]; // [rsp+100h] [rbp+0h] BYREF

  P = 0LL;
  v67 = 0;
  v4 = 0;
  v66 = 0;
  v64 = 0;
  v71 = 0LL;
  v55 = 0;
  v72 = 0LL;
  v70 = a1;
  v73 = 0LL;
  v56 = 0;
  v74 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Owner = *(PVOID *)(a2[4] + 32);
    WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, 0xDu, Flags);
  }
  v6 = *(_DWORD *)a2;
  v65 = 0LL;
  v59 = 0;
  v60 = 0;
  v69 = v6;
  v7 = IrqArbGsivFromIrq(v6);
  v9 = a2[5];
  v10 = 0LL;
  v63 = 0;
  LOBYTE(v3) = 0;
  v11 = v7;
  v61 = v3;
  v58 = 0;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v55);
    if ( IsPciDevice < 0 )
    {
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(UserData) = IsPciDevice;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x11u,
          (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
          UserData);
      }
      if ( DWORD1(v72) )
        ProcessorDeleteDeviceIdtAssignment(*(void **)(a2[4] + 32), v11, DWORD1(v72), 1);
      if ( v59 )
        --*(_DWORD *)(v65 + 28);
      if ( v60 )
      {
        LOBYTE(v12) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v11, v12);
      }
      if ( v10 && !(_BYTE)v3 )
        ExFreePoolWithTag((PVOID)v10, 0);
      return;
    }
    v4 = v55;
  }
  if ( (a2[8] & 2) != 0 && v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        20,
        14,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
    }
    return;
  }
  LOBYTE(v8) = 0;
  v57 = 0;
  v62 = v8;
  if ( v11 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v11, v12, &v57);
    if ( PossibleInput >= 0 )
    {
      v8 = (unsigned __int8)v8;
      if ( PossibleInput != 263 )
        v8 = 1;
      v62 = v8;
    }
  }
  v15 = 3;
  if ( v4 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v16 = 3;
    if ( (a2[8] & 2) != 0 )
    {
LABEL_21:
      v12 = 1LL;
      goto LABEL_22;
    }
    IsPciDevice = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v65, &v66, 1);
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    if ( !v65 )
    {
      v11 = v66;
      LOBYTE(v8) = v62;
      goto LABEL_21;
    }
    IsPciDevice = LinkNodeGetPossibleResources(v65, &P, &v56);
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    ExFreePoolWithTag(P, 0);
    v16 = v56 & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v65, &v66) < 0 )
    {
      if ( *(_DWORD *)(v18 + 28) )
      {
        IsPciDevice = -1073741823;
        goto LABEL_32;
      }
      *(_DWORD *)(v65 + 36) = v11;
    }
    v12 = 1LL;
    v59 = 1;
    ++*(_DWORD *)(v65 + 28);
LABEL_47:
    LOBYTE(v8) = v62;
    goto LABEL_22;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v11, &v63) )
  {
    v16 = byte_140088474[8 * v63];
    if ( v16 != 0xFF )
      goto LABEL_21;
  }
  v19 = *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v11) )
  {
    v58 = 1;
    IsPciDevice = AcpiIrqTranslateSecondaryInterruptToNtResources();
    if ( IsPciDevice < 0 )
      goto LABEL_32;
    v12 = 1LL;
    v16 = v74 | ((v19 & 1) == 0);
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v69, &v64) )
  {
    v12 = 1LL;
    v16 = (v19 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v12 = 1LL;
    v16 = v64 | ((v19 & 1) == 0);
  }
  LOBYTE(v8) = v62;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v16 |= 4u;
LABEL_22:
  v17 = (a2[8] & 2) == 0;
  v55 = 0;
  if ( !v17 )
  {
    v55 = 1;
    if ( (_BYTE)v8 )
    {
      if ( ((v16 ^ v57) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            20,
            15,
            (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
        }
        LOBYTE(v3) = v61;
        IsPciDevice = -1073741823;
        goto LABEL_33;
      }
    }
  }
  v20 = a2[5];
  v21 = 0;
  v22 = *(_QWORD *)(v20 + 40);
  P = (PVOID)v22;
  if ( (*(_WORD *)(v22 + 4) & 2) != 0 )
  {
    v23 = *(_DWORD *)(v22 + 12) - *(_DWORD *)(v22 + 8) + 1;
    v63 = v23;
  }
  else
  {
    v17 = (*(_BYTE *)(v20 + 36) & 1) == 0;
    v23 = 1;
    v63 = 1;
    v21 = !v17;
  }
  v64 = 0;
  v24 = a2[9];
  v25 = v21 | 2;
  v17 = (*(_BYTE *)(v22 + 4) & 8) == 0;
  v64 = ((v16 & 1) == 0) | (v16 >> 2) & 2;
  if ( v17 )
    v25 = v21;
  LODWORD(Owner) = v25;
  IsPciDevice = ProcessorReserveIdtEntries(*(_QWORD *)(a2[4] + 32), v22, v11, v24, v23, v64, Owner, 1, &v71);
  if ( IsPciDevice >= 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    {
      v28 = 1;
LABEL_70:
      v62 = 0;
      if ( (v16 & 4) == 0 )
      {
        v29 = v28;
        if ( ((unsigned __int8)v28 & *(_BYTE *)(a2[5] + 36)) != 0 )
          v29 = 3;
        v62 = v29;
      }
      Pool2 = ExAllocatePool2(256LL, 88LL * (v63 - 1) + 120, 1232102209LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 4) = 4;
        *(_DWORD *)Pool2 = 1;
        v31 = 4;
        v32 = *(_DWORD *)(a2[4] + 40);
        if ( v32 && v32 != 2 )
        {
          v31 = 5;
          *(_DWORD *)(Pool2 + 4) = 5;
        }
        if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
        {
          v31 |= 2u;
          *(_DWORD *)(Pool2 + 4) = v31;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
          *(_DWORD *)(Pool2 + 4) = v31 | 0x10;
        if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
        {
          *(_DWORD *)(Pool2 + 8) = 3;
          memset(v75, 0, 0x5CuLL);
          IsPciDevice = ProcessorGetMsiConnectionData(&v71, DWORD1(v72), v33, v75);
          if ( IsPciDevice >= 0 )
          {
            *(_QWORD *)(v10 + 16) = v75[10];
            *(_WORD *)(v10 + 24) = v75[11];
            *(_BYTE *)(v10 + 26) = BYTE8(v72);
            ProcessorGetDestinationMode((__int64)&v71, &v67);
            for ( i = 0; i < v63; ++i )
            {
              v35 = 88LL * i;
              v36 = v67;
              v37 = (_DWORD *)(v35 + v10 + 32);
              *v37 = 3;
              v38 = v71;
              *(_DWORD *)(v35 + v10 + 44) = 0;
              *(_DWORD *)(v35 + v10 + 48) = 1;
              *(_OWORD *)(v35 + v10 + 56) = v38;
              v39 = i + DWORD1(v72);
              *(_DWORD *)(v35 + v10 + 104) = v36;
              *(_DWORD *)(v35 + v10 + 36) = v39;
              *(_DWORD *)(v35 + v10 + 88) = i + v11;
              IsPciDevice = IrqArbGetDeviceIrql(v37, v35 + v10 + 40);
              if ( IsPciDevice < 0 )
                goto LABEL_32;
            }
LABEL_103:
            v45 = v62;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = v55;
            }
            else
            {
              v46 = "RTL_RANGE_LIST_ADD_SHARED";
              v47 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
              v48 = "ARBITER_RANGE_BOOT_ALLOCATED";
              if ( (v62 & 2) == 0 )
                v46 = " ";
              v49 = v55;
              if ( (v62 & 1) == 0 )
                v47 = " ";
              if ( !v55 )
                v48 = " ";
              WPP_RECORDER_SF_DDDssDssqq(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                (__int64)v47,
                (__int64)v48,
                (__int64)v46,
                Flagsa);
            }
            v50 = RtlAddRange(
                    *(PRTL_RANGE_LIST *)(v70 + 48),
                    *a2,
                    a2[1],
                    v49,
                    v45 | 0x10,
                    (PVOID)v10,
                    *(PVOID *)(a2[4] + 32));
            IsPciDevice = v50;
            if ( v50 < 0 )
            {
              LOBYTE(v3) = v61;
              if ( v50 != -1073741823 )
                LOBYTE(v3) = 1;
              goto LABEL_33;
            }
            return;
          }
        }
        else
        {
          if ( v65 )
          {
            *(_DWORD *)(Pool2 + 8) = 2;
            *(_QWORD *)(Pool2 + 16) = v65;
          }
          else
          {
            *(_DWORD *)(Pool2 + 8) = 1;
          }
          *(_DWORD *)(Pool2 + 32) = 0;
          v17 = v58 == 0;
          *(_DWORD *)(Pool2 + 36) = DWORD1(v72);
          *(_OWORD *)(Pool2 + 56) = v71;
          v40 = (!v17 || (v16 & 8) != 0) && (v16 & 1) == 0;
          v41 = v16 & 0xA;
          *(_DWORD *)(v10 + 48) = v40;
          if ( v41 != 10 )
          {
            if ( v41 == 8 )
            {
              v15 = 4;
            }
            else if ( v41 == 2 )
            {
              v15 = 2;
            }
            else
            {
              v15 = v41 == 0;
            }
          }
          *(_DWORD *)(v10 + 44) = v15;
          v42 = IrqArbGsivFromIrq(*a2);
          v43 = *(_DWORD *)(v10 + 4) >> 4;
          *(_DWORD *)(v10 + 88) = v42;
          *(_DWORD *)(v10 + 92) = *(_DWORD *)(v10 + 92) & 0xFFFFFFFE | v44 & v43;
          IsPciDevice = IrqArbGetDeviceIrql(v10 + 32, v10 + 40);
          if ( IsPciDevice >= 0 )
            goto LABEL_103;
        }
      }
      goto LABEL_32;
    }
    if ( (_BYTE)v62
      || (v27 = P,
          LOBYTE(v26) = v16,
          LOBYTE(v27) = (*((_BYTE *)P + 4) & 8) != 0,
          IsPciDevice = IcSetPossibleInput(v11, &v71, v26, v27),
          IsPciDevice >= 0) )
    {
      IcAddPossibleReference(v11, (a2[8] & 2) != 0);
      v60 = v28;
      goto LABEL_70;
    }
LABEL_32:
    LOBYTE(v3) = v61;
    goto LABEL_33;
  }
}
