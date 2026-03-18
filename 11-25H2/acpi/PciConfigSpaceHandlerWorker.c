/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x140014A50
 * Callers:
 *     PciConfigSpaceHandler @ 0x140014950 (PciConfigSpaceHandler.c)
 *     PciConfigInternal @ 0x14001F82C (PciConfigInternal.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     GetPciAddress @ 0x140015038 (GetPciAddress.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     GetOpRegionScope @ 0x14001612C (GetOpRegionScope.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     RtlStringCchPrintfW @ 0x140041DB4 (RtlStringCchPrintfW.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x140064454 (WPP_RECORDER_SF_ss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, _WORD *a3, unsigned int *a4)
{
  ULONG BusDataByOffset; // r15d
  unsigned int *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // r13
  int v8; // esi
  KIRQL CurrentIrql; // al
  KIRQL v10; // r14
  __int64 v11; // rcx
  char v13; // cl
  unsigned int v14; // eax
  __int64 v15; // rcx
  int PciAddress; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  int OpRegionScope; // eax
  void (__fastcall *v20)(_QWORD); // rax
  ULONG v21; // r15d
  __int64 v22; // rax
  ULONG v23; // esi
  int v24; // r10d
  ULONG v25; // ecx
  ULONG v26; // r12d
  ULONG Length; // r12d
  ULONG v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  const char *v32; // rax
  const char *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  ULONG Offset; // [rsp+20h] [rbp-79h]
  __int64 v37; // [rsp+40h] [rbp-59h]
  ULONG v38; // [rsp+50h] [rbp-49h]
  int v39; // [rsp+54h] [rbp-45h]
  int v40; // [rsp+58h] [rbp-41h]
  _WORD *v41; // [rsp+60h] [rbp-39h]
  _QWORD v42[2]; // [rsp+68h] [rbp-31h] BYREF
  int v43; // [rsp+78h] [rbp-21h] BYREF
  char v44; // [rsp+7Ch] [rbp-1Dh]
  int v45; // [rsp+80h] [rbp-19h] BYREF
  char v46; // [rsp+84h] [rbp-15h]
  __int64 v47; // [rsp+88h] [rbp-11h] BYREF
  wchar_t v48; // [rsp+90h] [rbp-9h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-1h] BYREF

  BusDataByOffset = 0;
  v47 = *(_QWORD *)L"ACPI";
  v5 = a4;
  v48 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)a4 + 20);
  v6 = (__int64 *)(a4 + 14);
  if ( (int)a2 < 0 )
  {
    v8 = 0;
    goto LABEL_11;
  }
  if ( !*v6 )
  {
    v17 = a4[19];
    if ( (v17 & 0x1000) != 0 )
      goto LABEL_63;
    v18 = *((_QWORD *)a4 + 1);
    a4[19] = v17 | 0x1000;
    OpRegionScope = GetOpRegionScope(v18, a2, a4, a4 + 14);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
LABEL_34:
      v8 = 0;
      goto LABEL_11;
    }
    v34 = *((_QWORD *)v5 + 1);
    if ( v34 )
    {
      *(_QWORD *)(*(_QWORD *)v34 + 104LL) = *v6;
      AMLIReferenceHandleEx(*v6);
    }
  }
  a2 = *(_QWORD *)(*(_QWORD *)*v6 + 104LL);
  if ( !a2 )
    goto LABEL_34;
  v7 = *(_QWORD *)(a2 + 80);
  if ( v7 )
    goto LABEL_5;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 184), 0, 0);
  if ( (((v13 & 1) == 0) & ((_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), 0, 0) & 2) == 0)) == 0 )
    goto LABEL_22;
  v29 = AMLIGetParent(*v6);
  if ( v29 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)v29 + 104LL);
    AMLIDereferenceHandleEx(v29);
    if ( v30 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v30 + 184), 0, 0) & 1) == 0 )
      {
        v31 = *(_QWORD *)(v30 + 8);
        v32 = byte_140075488;
        v33 = byte_140075488;
        if ( (v31 & 0x200000000000LL) != 0 )
        {
          v32 = *(const char **)(v30 + 608);
          if ( (v31 & 0x400000000000LL) != 0 )
            v33 = *(const char **)(v30 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = (__int64)v33;
          LOBYTE(v33) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v33,
            21,
            10,
            (__int64)&WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids,
            1,
            v30,
            (__int64)v32,
            v37);
        }
      }
LABEL_22:
      v14 = v5[19];
      if ( (v14 & 0x100) != 0 )
        goto LABEL_5;
      v15 = *v6;
      v5[19] = v14 | 0x100;
      PciAddress = GetPciAddress(
                     v15,
                     (unsigned int)PciConfigSpaceHandlerWorker,
                     (_DWORD)v5,
                     (int)v5 + 88,
                     (__int64)(v5 + 21));
      if ( PciAddress != 259 )
      {
        if ( PciAddress < 0 )
          goto LABEL_34;
LABEL_5:
        v8 = 0;
        CurrentIrql = KeGetCurrentIrql();
        v10 = CurrentIrql;
        if ( *v5 )
        {
          if ( *v5 == 1 )
          {
            v21 = v5[4];
            a3 = &unk_1400754C2;
            LODWORD(a2) = v5[5];
            v41 = &unk_1400754C2;
            v22 = 0LL;
            v40 = 0;
            v23 = 0;
            v39 = 0;
            v24 = 0;
            v25 = 0;
            LODWORD(a4) = v21;
            do
            {
              v26 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v22);
              if ( v21 < v26 )
              {
                Length = v26 - v21;
                if ( (unsigned int)a2 + (_DWORD)a4 - v21 <= Length )
                  Length = a2 + (_DWORD)a4 - v21;
                if ( v7 )
                {
                  if ( v10 < 2u )
                    v10 = KfRaiseIrql(2u);
                  Offset = Length;
                  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v7 + 48))(
                          *(_QWORD *)(v7 + 8),
                          0LL,
                          *((_QWORD *)v5 + 3) + 4 * (v21 - (unsigned __int64)v5[4]),
                          v21);
                  if ( v10 < 2u )
                    KeLowerIrql(v10);
                }
                else
                {
                  v28 = HalSetBusDataByOffset(
                          PCIConfiguration,
                          v5[22],
                          v5[21],
                          (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v21 - (unsigned __int64)(unsigned int)a4)),
                          v21,
                          Length);
                }
                a3 = v41;
                v25 = Length + v39;
                v24 = v40;
                v23 += v28;
                v39 += Length;
              }
              LODWORD(a4) = v5[4];
              v21 = (unsigned int)a4;
              LODWORD(a2) = v5[5];
              if ( (unsigned int)a4 <= (unsigned int)(unsigned __int16)*a3 + 1 )
                v21 = (unsigned __int16)*a3 + 1;
              if ( v21 >= (int)a2 + (int)a4 )
                break;
              v22 = 4LL * (unsigned int)++v24;
              v40 = v24;
              a3 = (_WORD *)((char *)&PciConfigDisallowedRanges + v22 + 2);
              v41 = a3;
            }
            while ( *a3 );
            v38 = v23;
            v6 = (__int64 *)(v5 + 14);
            v8 = 0;
            if ( !v25 )
            {
              RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x");
              v42[0] = &v47;
              v42[1] = pszDest;
              ACPIWriteEventLogEntry(3221553162LL, v42, 2LL);
            }
            BusDataByOffset = v38;
          }
          else
          {
            v8 = -1073741822;
          }
        }
        else if ( v7 )
        {
          if ( CurrentIrql < 2u )
            v10 = KfRaiseIrql(2u);
          Offset = v5[5];
          BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v7 + 56))(
                              *(_QWORD *)(v7 + 8),
                              0LL,
                              *((_QWORD *)v5 + 3),
                              v5[4]);
          if ( v10 < 2u )
            KeLowerIrql(v10);
        }
        else
        {
          BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
        }
        goto LABEL_11;
      }
      return 259LL;
    }
  }
LABEL_63:
  v8 = -1073741772;
LABEL_11:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v20)(*v6, (unsigned int)v8, 0LL, *((_QWORD *)v5 + 6));
    else
      v20(*((_QWORD *)v5 + 6));
  }
  if ( v8 < 0 )
  {
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v35 = *((_QWORD *)v5 + 1);
    if ( v35 )
    {
      dword_140088A80 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_140088A84 = 0;
      v45 = dword_140088A80;
    }
    if ( *v6 )
    {
      dword_140088A80 = *(_DWORD *)(*(_QWORD *)*v6 + 40LL);
      byte_140088A84 = 0;
      v43 = dword_140088A80;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        (_DWORD)a4,
        Offset,
        (__int64)&v45,
        (__int64)&v43);
  }
  v11 = *((_QWORD *)v5 + 1);
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    *((_QWORD *)v5 + 1) = 0LL;
  }
  if ( *v6 )
  {
    AMLIDereferenceHandleEx(*v6);
    *v6 = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v8;
}
