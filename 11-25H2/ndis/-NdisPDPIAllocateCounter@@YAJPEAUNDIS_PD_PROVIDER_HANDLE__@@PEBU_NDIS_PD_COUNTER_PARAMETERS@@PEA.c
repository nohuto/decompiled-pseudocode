/*
 * XREFs of ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x140145DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1400AC1D8 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qdSS @ 0x1400AD994 (WPP_RECORDER_SF_qdSS.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x140144618 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x140148EC0 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 */

__int64 __fastcall NdisPDPIAllocateCounter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_COUNTER_PARAMETERS *a2,
        struct NDIS_PD_COUNTER_HANDLE__ **a3,
        __int64 a4)
{
  const wchar_t *CounterName; // rax
  const wchar_t *v8; // rdx
  int v9; // edi
  struct NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  struct NDIS_PD_COUNTER_HANDLE__ *v11; // rbx
  _QWORD *v12; // rax
  const wchar_t *v13; // rdx
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  struct NDIS_PD_COUNTER_HANDLE__ *v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    CounterName = a2->CounterName;
    v8 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v8 = L" ";
    WPP_RECORDER_SF_qdSS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)v8,
      (__int64)a3,
      a4,
      v15,
      (char)a1,
      a2->Type,
      CounterName,
      v8);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v9 >= 0 )
      *((_QWORD *)*a3 + 5) = a1;
  }
  else
  {
    *a3 = 0LL;
    if ( a2->Header.Type == 0x80
      && a2->Header.Revision == 1
      && a2->Header.Size >= 0x14u
      && !a2->Flags
      && (unsigned int)(a2->Type - 1) <= 2 )
    {
      PoolWithTag = (struct NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_QWORD *)PoolWithTag + 4) = 0LL;
        *((_QWORD *)PoolWithTag + 5) = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        *((_DWORD *)PoolWithTag + 14) = 0;
        *((_BYTE *)PoolWithTag + 60) = 0;
        *((_QWORD *)PoolWithTag + 8) = 0LL;
        *((_DWORD *)PoolWithTag + 22) = 0;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 3) = 0LL;
        *((_QWORD *)PoolWithTag + 2) = 0LL;
        v12 = PoolWithTag + 18;
        v12[1] = v12;
        *v12 = v12;
        *((_OWORD *)v11 + 6) = 0LL;
        *((_WORD *)v11 + 49) = 0;
        *((_QWORD *)v11 + 13) = 0LL;
        *((_OWORD *)v11 + 7) = 0LL;
        *((_WORD *)v11 + 57) = 0;
        *((_QWORD *)v11 + 15) = 0LL;
        *((_DWORD *)v11 + 17) = ndisGetNextPDCounterId();
        v13 = a2->CounterName;
        if ( !v13
          || RtlCreateUnicodeString((PUNICODE_STRING)v11 + 6, (PCWSTR)v13)
          && RtlCreateUnicodeString((PUNICODE_STRING)v11 + 7, (PCWSTR)a2->CounterName) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
                 *((_QWORD *)a1 + 9),
                 a2,
                 &v17);
          if ( v9 >= 0 )
          {
            ndisSetupPDCounter((struct NDIS_PD_COUNTER *)v11, v17, a2->Type, (struct NDIS_PD_ASSOCIATION *)a1, 0);
            *a3 = v11;
            goto LABEL_23;
          }
        }
        else
        {
          v9 = -1073741670;
        }
        NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v11);
        goto LABEL_23;
      }
      v9 = -1073741670;
    }
    else
    {
      v9 = -1073741811;
    }
  }
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v9;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x2Bu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a3,
      v16);
  }
  return (unsigned int)v9;
}
