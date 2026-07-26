/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140039E00
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140039950 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140039B90 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140075740 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140161DA0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0qxzzxxxxxx_EtwWriteTransfer @ 0x140039580 (McTemplateK0qxzzxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KSPIN_LOCK *AoAc; // rdi
  int v4; // edx
  KSPIN_LOCK v5; // rsi
  KSPIN_LOCK v6; // r14
  KSPIN_LOCK v7; // r12
  KSPIN_LOCK v8; // r13
  KSPIN_LOCK v9; // r15
  KIRQL v10; // r8
  KSPIN_LOCK v11; // rcx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  const wchar_t *v14; // rax
  KSPIN_LOCK v15; // r11
  KSPIN_LOCK v16; // r10
  KSPIN_LOCK v17; // r9
  unsigned __int64 v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  KSPIN_LOCK v24; // [rsp+B0h] [rbp-50h]
  KSPIN_LOCK v25; // [rsp+B8h] [rbp-48h]
  struct _NDIS_OID_REQUEST v26; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27; // [rsp+1E0h] [rbp+E0h]
  _BYTE v28[97]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v29; // [rsp+251h] [rbp+151h]
  __int128 v30; // [rsp+261h] [rbp+161h]
  __int128 v31; // [rsp+271h] [rbp+171h]
  int v32; // [rsp+281h] [rbp+181h]
  __int16 v33; // [rsp+285h] [rbp+185h]
  char v34; // [rsp+287h] [rbp+187h]

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v27 = 0LL;
  *(_QWORD *)&v26.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v26, 0, 32);
  *(&v26.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v26.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  memset(&v28[1], 0, 96);
  *(_QWORD *)v28 = 9961856LL;
  memset(&v26.NdisReserved[40], 0, 128);
  *(_DWORD *)&v26.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EtwActivityIdControl(3u, (LPGUID)&v26.NdisReserved[96]);
  v26.Header = (NDIS_OBJECT_HEADER)15466902;
  v26.DATA.QUERY_INFORMATION.InformationBuffer = v28;
  v26.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&v26.RequestType = 2LL;
  v26.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      15,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      (char)&v26,
      (char)a1);
  }
  if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v26, 0, 0LL) )
  {
    v5 = *(_QWORD *)&v28[32];
    v6 = *(_QWORD *)&v28[64];
    v7 = *(_QWORD *)&v28[72];
    v8 = *(_QWORD *)&v28[48];
    v9 = *(_QWORD *)&v28[40];
    *(_QWORD *)&v22 = *(_QWORD *)&v28[40];
    *(_QWORD *)&v21 = *(_QWORD *)&v28[32];
    *((_QWORD *)&v21 + 1) = *(_QWORD *)&v28[64];
    *((_QWORD *)&v22 + 1) = *(_QWORD *)&v28[72];
    *(_QWORD *)&v23 = *(_QWORD *)&v28[48];
    v18 = *(_QWORD *)&v28[80];
    *((_QWORD *)&v23 + 1) = *(_QWORD *)&v28[80];
    v10 = KeAcquireSpinLockRaiseToDpc(AoAc);
    if ( a2 )
    {
      v11 = AoAc[107];
      if ( v5 < v11 || (v24 = AoAc[108], v6 < v24) || (v25 = AoAc[109], v9 < v25) || (v15 = AoAc[110], v7 < v15) )
      {
        v12 = v18;
      }
      else
      {
        v16 = AoAc[111];
        v12 = v18;
        if ( v8 >= v16 )
        {
          v17 = AoAc[112];
          if ( v18 >= v17 )
          {
            v6 -= v24;
            v5 -= v11;
            v9 -= v25;
            v7 -= v15;
            v8 -= v16;
            v12 = v18 - v17;
          }
        }
      }
      AoAc[6 * a2 + 107] += v5;
      AoAc[6 * a2 + 108] += v6;
      AoAc[6 * a2 + 109] += v9;
      AoAc[6 * a2 + 110] += v7;
      AoAc[6 * a2 + 111] += v8;
      AoAc[6 * a2 + 112] += v12;
      v19 = v12;
      *(_OWORD *)(AoAc + 107) = v21;
      *(_OWORD *)(AoAc + 109) = v22;
      *(_OWORD *)(AoAc + 111) = v23;
      KeReleaseSpinLock(AoAc, v10);
      if ( (byte_14011B103 & 4) != 0 )
      {
        v13 = L"D0";
        v14 = L"DX";
        if ( a2 != 1 )
        {
          v14 = L"D0";
          v13 = L"DX";
        }
        McTemplateK0qxzzxxxxxx_EtwWriteTransfer(
          (__int64)v13,
          v19,
          &a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v13,
          v14,
          v5,
          v6,
          v9,
          v7,
          v8,
          v19);
      }
    }
    else
    {
      *(_OWORD *)(AoAc + 107) = v21;
      *(_OWORD *)(AoAc + 109) = v22;
      *(_OWORD *)(AoAc + 111) = v23;
      KeReleaseSpinLock(AoAc, v10);
    }
  }
}
