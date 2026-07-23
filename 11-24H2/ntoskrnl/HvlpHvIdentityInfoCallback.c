/*
 * XREFs of HvlpHvIdentityInfoCallback @ 0x1405805A0
 * Callers:
 *     <none>
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x14049E658 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorInterface @ 0x1406623E8 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorVersion @ 0x140662430 (HviGetHypervisorVersion.c)
 */

void __fastcall HvlpHvIdentityInfoCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rax

  v4 = ReasonSpecificData[4];
  *((_OWORD *)ReasonSpecificData + 1) = HvlpSecondaryDumpDataGuid;
  if ( v4 )
  {
    if ( *((_DWORD *)ReasonSpecificData + 2) < 0x44u )
    {
      v8 = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 0;
      ReasonSpecificData[4] = v8;
    }
    else
    {
      v6 = (_DWORD *)*ReasonSpecificData;
      v7 = (_DWORD *)(*ReasonSpecificData + 8LL);
      *v6 = 1213614404;
      v6[1] = 68;
      HviGetHypervisorVendorAndMaxFunction(v7);
      HviGetHypervisorInterface(v6 + 6);
      HviGetHypervisorVersion(v6 + 10);
      v6[14] = HvlpFlags;
      v6[15] = HvlpRootFlags;
      v6[16] = HvlpEnlightenments;
      ReasonSpecificData[4] = v6;
      *((_DWORD *)ReasonSpecificData + 10) = 68;
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 68;
  }
}
