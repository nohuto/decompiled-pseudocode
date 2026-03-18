/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403FF0F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x14018F6B8 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x14018F7C4 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // r9
  char v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned __int64 v10; // r8
  __int64 v11; // r12
  unsigned int v12; // esi
  unsigned int PhysicalAdapterCapsSizeFromDdiVersion; // eax
  unsigned int v14; // r9d
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int DriverCapsSizeFromDdiVersion; // eax
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  _DWORD *v25; // rax
  _BYTE v27[16]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[144]; // [rsp+A8h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v27,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v2 = 4541LL;
    v3 = L"The adapter is already closed by the guest";
LABEL_91:
    WdLogGlobalForLineNumber = v2;
    goto LABEL_92;
  }
  v4 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v6);
    v8 = *((unsigned int *)a1 + 36);
    v9 = NumDifferentPhysicalAdapters;
    v10 = *(unsigned int *)(v5 + 28);
    if ( v8 - 39 < v10 )
    {
      WdLogSingleEntry1(2LL, v8);
      v2 = *((unsigned int *)a1 + 36);
      v3 = L"Invalid packet size: 0x%I64x";
      WdLogGlobalForLineNumber = 4551;
LABEL_92:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v3, v2, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_93;
    }
    v11 = *(unsigned int *)(v5 + 32);
    v12 = *(_DWORD *)(v5 + 32);
    if ( *(_DWORD *)(v5 + 24) == 1 )
    {
      DriverCapsSizeFromDdiVersion = GetDriverCapsSizeFromDdiVersion(*(_DWORD *)(v6 + 2280));
      v12 = DriverCapsSizeFromDdiVersion;
      if ( *(_DWORD *)(v5 + 28) || *(_DWORD *)(v5 + 32) > DriverCapsSizeFromDdiVersion )
      {
        WdLogSingleEntry0(2LL);
        v2 = 4569LL;
        v3 = L"Invalid buffer size for DXGKQAITYPE_DRIVERCAPS";
        goto LABEL_91;
      }
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v5 + 24) != 10 )
    {
      switch ( *(_DWORD *)(v5 + 24) )
      {
        case 0xD:
          if ( (_DWORD)v10 != 4 || (_DWORD)v11 != 24 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4596LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_GPUMMUCAPS";
            goto LABEL_91;
          }
          if ( *(_DWORD *)(v5 + 36) < NumDifferentPhysicalAdapters )
            goto LABEL_54;
          WdLogSingleEntry0(2LL);
          v2 = 4601LL;
          break;
        case 0xE:
          if ( (_DWORD)v10 != 4 || (_DWORD)v11 != 20 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4609LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_PAGETABLELEVELDESC";
            goto LABEL_91;
          }
          v16 = *(unsigned __int16 *)(v5 + 38);
          if ( (unsigned int)v16 >= NumDifferentPhysicalAdapters
            || (*(_DWORD *)(v6 + 2468) & 0x40) == 0
            || ((v17 = *(_QWORD *)(*(_QWORD *)(v6 + 3128) + 1264LL)) != 0 ? (v18 = v17 + 144 * v16) : (v18 = 0LL),
                (unsigned int)*(unsigned __int16 *)(v5 + 36) >= *(_DWORD *)(v18 + 16)) )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4618LL;
            v3 = L"Invalid parameters DXGKQAITYPE_PAGETABLELEVELDESC";
            goto LABEL_91;
          }
          goto LABEL_54;
        case 0xF:
          PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(*(_DWORD *)(v6 + 2280));
          v12 = PhysicalAdapterCapsSizeFromDdiVersion;
          if ( v15 != 4 || (unsigned int)v11 > PhysicalAdapterCapsSizeFromDdiVersion )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4583LL;
            v3 = L"Invalid buffer size for DXGKQAITYPE_PHYSICALADAPTERCAPS";
            goto LABEL_91;
          }
          if ( *(_DWORD *)(v5 + 36) < v14 )
            goto LABEL_54;
          WdLogSingleEntry0(2LL);
          v2 = 4588LL;
          break;
        case 0x1A:
          if ( (_DWORD)v11 == 28 && (_DWORD)v10 == 4 )
          {
            if ( *(_DWORD *)(v5 + 36) >= NumDifferentPhysicalAdapters )
            {
              WdLogSingleEntry0(2LL);
              v2 = 4663LL;
              v3 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_ADAPTERPERFDATA_CAPS";
              goto LABEL_91;
            }
            goto LABEL_54;
          }
          WdLogSingleEntry0(2LL);
          v2 = 4657LL;
LABEL_21:
          v3 = L"Invalid output buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
          goto LABEL_91;
        case 0x1B:
          if ( (_DWORD)v11 != 128 )
          {
            WdLogSingleEntry0(2LL);
            v2 = 4672LL;
            v3 = L"Invalid output buffer size for DXGKQAITYPE_GPUVERSION";
            goto LABEL_91;
          }
LABEL_54:
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, (struct DXGADAPTER *const)v6, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL) < 0 )
          {
LABEL_89:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
            return v4;
          }
          v22 = *(_DWORD *)(v5 + 24);
          memset(&v28[1], 0, 48);
          LODWORD(v28[1]) = v22;
          HIDWORD(v28[5]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 1;
          LODWORD(v28[3]) = *(_DWORD *)(v5 + 28);
          v28[2] = v5 + 36;
          if ( v12 )
          {
            if ( v12 > 0x20000 )
            {
              WdLogSingleEntry1(2LL, v12);
              WdLogGlobalForLineNumber = 4695;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid output buffer size: 0x%I64x",
                v12,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_89;
            }
            LODWORD(v28[5]) = v12;
            v28[4] = operator new[](v12, 0x4B677844u, 64LL);
            if ( !v28[4] )
            {
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 4704;
              DxgkLogInternalTriageEvent(
                0LL,
                262145LL,
                0xFFFFFFFFLL,
                L"Failed to allocate pOutputData",
                4704LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_89;
            }
          }
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v6, (struct _DXGKARG_QUERYADAPTERINFO *)&v28[1], v21) < 0 )
          {
LABEL_87:
            if ( v28[4] )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v28[4]);
            goto LABEL_89;
          }
          v23 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL);
          if ( *(_DWORD *)(v5 + 24) != 1 )
          {
            if ( *(_DWORD *)(v5 + 24) == 13 )
            {
              if ( v23 <= 0x25 )
                *(_DWORD *)v28[4] &= 0x7FFu;
            }
            else if ( *(_DWORD *)(v5 + 24) == 15 )
            {
              v24 = v28[4];
              *(_QWORD *)(v28[4] + 8LL) = 0LL;
              if ( v23 > 0x10 )
              {
                if ( v23 <= 0x25 )
                  *(_DWORD *)(v24 + 16) &= 0x3Fu;
              }
              else
              {
                *(_DWORD *)(v24 + 16) &= 0x1Fu;
              }
            }
            goto LABEL_86;
          }
          v25 = (_DWORD *)v28[4];
          if ( v23 > 0x25 )
          {
            if ( v23 > 0x28 )
            {
LABEL_86:
              VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v28[4], v11);
              v4 = 1;
              goto LABEL_87;
            }
          }
          else
          {
            *(_DWORD *)(v28[4] + 60LL) &= 0x7Fu;
            v25[16] &= 0x7FFu;
          }
          v25[12] &= 0x3Fu;
          v25[13] &= ~0x80000000;
          if ( v23 > 0x10 )
          {
            if ( v23 > 0x1B )
            {
              if ( v23 <= 0x25 )
              {
                if ( (int)v25[84] > 10240 )
                  v25[84] = 10240;
                v25[17] &= 0x3FFFu;
                v25[144] &= 0x3Fu;
              }
            }
            else
            {
              if ( (int)v25[84] > 9984 )
                v25[84] = 9984;
              v25[17] &= 0x3FFFu;
              v25[144] &= 0x1Fu;
            }
          }
          else
          {
            if ( (int)v25[84] > 9728 )
              v25[84] = 9728;
            v25[17] &= 0x1FFFu;
            v25[144] &= 0xFu;
          }
          goto LABEL_86;
        default:
          WdLogSingleEntry1(2LL, *(int *)(v5 + 24));
          v2 = *(int *)(v5 + 24);
          v3 = L"Invalid query type: 0x%I64x";
          WdLogGlobalForLineNumber = 4678;
          goto LABEL_92;
      }
      v3 = L"Invalid physical adapter index";
      goto LABEL_91;
    }
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 4 )
      {
        WdLogSingleEntry0(2LL);
        v2 = 4634LL;
        v3 = L"Invalid input buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
        goto LABEL_91;
      }
      v19 = *(unsigned int *)(v5 + 36);
    }
    else
    {
      v19 = 0LL;
    }
    if ( (unsigned int)v19 >= v9 )
    {
      WdLogSingleEntry0(2LL);
      v2 = 4641LL;
      v3 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_HISTORYBUFFERPRECISION";
      goto LABEL_91;
    }
    if ( v11 == 4LL * *(unsigned __int16 *)(344 * v19 + *(_QWORD *)(v6 + 2992)) )
      goto LABEL_54;
    WdLogSingleEntry0(2LL);
    v2 = 4647LL;
    goto LABEL_21;
  }
LABEL_93:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return 0;
}
