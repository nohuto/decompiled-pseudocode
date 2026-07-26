/*
 * XREFs of ndisFindRootDevice @ 0x140183630
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x14005E4D0 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_Zqq @ 0x14006D8C0 (WPP_RECORDER_SF_Zqq.c)
 */

wchar_t *__fastcall ndisFindRootDevice(
        UNICODE_STRING *a1,
        char a2,
        const struct _UNICODE_STRING **a3,
        const struct _UNICODE_STRING **a4,
        struct _NDIS_MINIPORT_BLOCK **a5,
        char a6)
{
  char v6; // r15
  const struct _UNICODE_STRING **v7; // rbx
  const struct _UNICODE_STRING **v8; // rsi
  __int64 v12; // rdx
  wchar_t *result; // rax
  wchar_t *v14; // rdi
  KIRQL v15; // al
  struct _NDIS_M_DRIVER_BLOCK *v16; // r13
  const struct _UNICODE_STRING *i; // rbx
  wchar_t *Buffer; // rax
  unsigned int v19; // esi
  wchar_t *v20; // r15
  int v21; // edx
  const struct _UNICODE_STRING *v22; // rbp
  const struct _UNICODE_STRING *v23; // r15
  unsigned int v24; // [rsp+40h] [rbp-68h]
  const struct _UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-60h]
  char v26[8]; // [rsp+50h] [rbp-58h]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  char v28; // [rsp+B0h] [rbp+8h]
  KIRQL v31; // [rsp+D0h] [rbp+28h]

  v24 = 1;
  v6 = 0;
  *(_QWORD *)v26 = 0LL;
  v28 = 0;
  v7 = a4;
  v8 = a3;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      &a1->Length);
  DestinationString.Length = a1->Length;
  v12 = (unsigned __int16)(DestinationString.Length + 2);
  DestinationString.MaximumLength = DestinationString.Length + 2;
  *v8 = 0LL;
  *v7 = 0LL;
  *a5 = 0LL;
  result = (wchar_t *)ExAllocatePool2(66LL, v12, 1953711182);
  DestinationString.Buffer = result;
  v14 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    p_DestinationString = &DestinationString;
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v16 = ndisMiniDriverList;
    v31 = v15;
    if ( ndisMiniDriverList )
    {
LABEL_5:
      KeAcquireSpinLockAtDpcLevel(&v16->Ref.SpinLock);
      for ( i = (const struct _UNICODE_STRING *)v16->MiniportQueue; ; i = (const struct _UNICODE_STRING *)i->Buffer )
      {
        if ( !i )
        {
          KeReleaseSpinLockFromDpcLevel(&v16->Ref.SpinLock);
          if ( a2 && v6 || (v16 = v16->NextDriver) == 0LL )
          {
            v8 = a3;
            v7 = a4;
            break;
          }
          goto LABEL_5;
        }
        if ( a2 )
        {
          if ( ndisEqualUnicodeStringDispatchLevel(p_DestinationString, i + 238) )
          {
            v23 = i + 238;
            LOBYTE(p_DestinationString) = (_BYTE)i - 32;
            v22 = i + 238;
            *(_QWORD *)v26 = i + 238;
            *a5 = (struct _NDIS_MINIPORT_BLOCK *)i;
            KeReleaseSpinLockFromDpcLevel(&v16->Ref.SpinLock);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v31);
            ndisDereferencePackage((PVOID *)&ndisPkgs);
            ExFreePoolWithTag(v14, 0);
            v7 = a4;
            v8 = a3;
            goto LABEL_17;
          }
        }
        else
        {
          Buffer = i[235].Buffer;
          v19 = *(_DWORD *)Buffer;
          if ( *(_DWORD *)Buffer >= v24 )
          {
            v20 = Buffer + 4;
            if ( ndisEqualUnicodeStringDispatchLevel(&DestinationString, (const struct _UNICODE_STRING *)(Buffer + 4)) )
            {
              *(_QWORD *)v26 = v20;
              v6 = 1;
              p_DestinationString = i + 238;
              v28 = 1;
              *a5 = (struct _NDIS_MINIPORT_BLOCK *)i;
              v24 = v19;
            }
            else
            {
              v6 = v28;
            }
          }
        }
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v31);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    ExFreePoolWithTag(v14, 0);
    if ( v6 )
    {
      v22 = *(const struct _UNICODE_STRING **)v26;
      v23 = p_DestinationString;
LABEL_17:
      if ( *a5 )
      {
        if ( (unsigned __int8)ndisReferenceMiniportByHandle(*a5, 1, a6) )
        {
          *v8 = v23;
          *v7 = v22;
        }
        else
        {
          *a5 = 0LL;
        }
      }
    }
    result = (wchar_t *)&WPP_RECORDER_INITIALIZED;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      return (wchar_t *)WPP_RECORDER_SF_Zqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v21,
                          0xDu,
                          0x16u,
                          (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
                          &a1->Length,
                          (char)p_DestinationString,
                          *(_QWORD *)v26);
  }
  return result;
}
