/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140017620
 * Callers:
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1400173B0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140017A50 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14016D440 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     McTemplateK0qxzzxxxxxx_EtwWriteTransfer @ 0x140017DD0 (McTemplateK0qxzzxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KSPIN_LOCK *AoAc; // rdi
  KSPIN_LOCK v4; // rsi
  KSPIN_LOCK v5; // r14
  KSPIN_LOCK v6; // r12
  KSPIN_LOCK v7; // r13
  KSPIN_LOCK v8; // r15
  KIRQL v9; // r8
  KSPIN_LOCK v10; // rcx
  KSPIN_LOCK v11; // rax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rax
  KSPIN_LOCK v14; // r11
  KSPIN_LOCK v15; // r10
  KSPIN_LOCK v16; // r9
  KSPIN_LOCK v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+70h] [rbp-90h]
  __int128 v20; // [rsp+80h] [rbp-80h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  KSPIN_LOCK v23; // [rsp+B0h] [rbp-50h]
  KSPIN_LOCK v24; // [rsp+B8h] [rbp-48h]
  struct _NDIS_OID_REQUEST v25; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v26; // [rsp+1E0h] [rbp+E0h]
  _BYTE v27[97]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v28; // [rsp+251h] [rbp+151h]
  __int128 v29; // [rsp+261h] [rbp+161h]
  __int128 v30; // [rsp+271h] [rbp+171h]
  int v31; // [rsp+281h] [rbp+181h]
  __int16 v32; // [rsp+285h] [rbp+185h]
  char v33; // [rsp+287h] [rbp+187h]

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v26 = 0LL;
  *(_QWORD *)&v25.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v25, 0, 32);
  *(&v25.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v25.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  memset(&v27[1], 0, 96);
  *(_QWORD *)v27 = 9961856LL;
  memset(&v25.NdisReserved[40], 0, 128);
  *(_DWORD *)&v25.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  EtwActivityIdControl(3u, (LPGUID)&v25.NdisReserved[96]);
  v25.Header = (NDIS_OBJECT_HEADER)15466902;
  v25.DATA.QUERY_INFORMATION.InformationBuffer = v27;
  v25.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&v25.RequestType = 2LL;
  v25.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      (char)&v25,
      a1);
  if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v25, 0, 0LL) )
  {
    v4 = *(_QWORD *)&v27[32];
    v5 = *(_QWORD *)&v27[64];
    v6 = *(_QWORD *)&v27[72];
    v7 = *(_QWORD *)&v27[48];
    v8 = *(_QWORD *)&v27[40];
    *(_QWORD *)&v21 = *(_QWORD *)&v27[40];
    *(_QWORD *)&v20 = *(_QWORD *)&v27[32];
    *((_QWORD *)&v20 + 1) = *(_QWORD *)&v27[64];
    *((_QWORD *)&v21 + 1) = *(_QWORD *)&v27[72];
    *(_QWORD *)&v22 = *(_QWORD *)&v27[48];
    v17 = *(_QWORD *)&v27[80];
    *((_QWORD *)&v22 + 1) = *(_QWORD *)&v27[80];
    v9 = KeAcquireSpinLockRaiseToDpc(AoAc);
    if ( a2 )
    {
      v10 = AoAc[107];
      if ( v4 < v10 || (v23 = AoAc[108], v5 < v23) || (v24 = AoAc[109], v8 < v24) || (v14 = AoAc[110], v6 < v14) )
      {
        v11 = v17;
      }
      else
      {
        v15 = AoAc[111];
        v11 = v17;
        if ( v7 >= v15 )
        {
          v16 = AoAc[112];
          if ( v17 >= v16 )
          {
            v5 -= v23;
            v4 -= v10;
            v8 -= v24;
            v6 -= v14;
            v7 -= v15;
            v11 = v17 - v16;
          }
        }
      }
      AoAc[6 * a2 + 107] += v4;
      AoAc[6 * a2 + 108] += v5;
      AoAc[6 * a2 + 109] += v8;
      AoAc[6 * a2 + 110] += v6;
      AoAc[6 * a2 + 111] += v7;
      AoAc[6 * a2 + 112] += v11;
      v18 = v11;
      *(_OWORD *)(AoAc + 107) = v20;
      *(_OWORD *)(AoAc + 109) = v21;
      *(_OWORD *)(AoAc + 111) = v22;
      KeReleaseSpinLock(AoAc, v9);
      if ( (byte_140125103 & 4) != 0 )
      {
        v12 = L"D0";
        v13 = L"DX";
        if ( a2 != 1 )
        {
          v13 = L"D0";
          v12 = L"DX";
        }
        McTemplateK0qxzzxxxxxx_EtwWriteTransfer(
          (_DWORD)v12,
          v18,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          (__int64)v12,
          (__int64)v13,
          v4,
          v5,
          v8,
          v6,
          v7,
          v18);
      }
    }
    else
    {
      *(_OWORD *)(AoAc + 107) = v20;
      *(_OWORD *)(AoAc + 109) = v21;
      *(_OWORD *)(AoAc + 111) = v22;
      KeReleaseSpinLock(AoAc, v9);
    }
  }
}
