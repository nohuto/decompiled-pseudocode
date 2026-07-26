/*
 * XREFs of ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x140097908
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x1400A0204 (-EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??$MakeSizedPoolPtr@E@@YA?AV?$unique_ptr@EU?$KFreePool@E@@@wistd@@K_K@Z @ 0x140142850 (--$MakeSizedPoolPtr@E@@YA-AV-$unique_ptr@EU-$KFreePool@E@@@wistd@@K_K@Z.c)
 */

unsigned __int8 __fastcall EthAddConversionFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER *a3)
{
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned __int8 *v9; // r14
  __int64 v10; // rdx
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdi
  unsigned __int8 *v14; // rsi
  struct _NDIS_RW_LOCK_EX *BindListLock; // rbp
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  if ( !a1 )
  {
    a3->MaxMulticastAddresses = 0;
    return 1;
  }
  if ( is_mul_ok(6u, a1) )
  {
    v7 = 6 * a1;
    MakeSizedPoolPtr<unsigned char>(&P, a2, 6 * a1);
    v9 = (unsigned __int8 *)P;
    if ( P )
    {
      MakeSizedPoolPtr<unsigned char>(&P, v8, v7);
      v11 = (unsigned __int8 *)P;
      if ( P )
      {
        MakeSizedPoolPtr<unsigned char>(&P, v10, v7);
        v13 = (unsigned __int8 *)P;
        if ( P )
        {
          MakeSizedPoolPtr<unsigned char>(&P, v12, 6 * a1);
          v14 = (unsigned __int8 *)P;
          if ( P )
          {
            BindListLock = a3->BindListLock;
            EthFreeFilterBuffers(a3, 0);
            memset(a3, 0, sizeof(struct _X_FILTER));
            *(_DWORD *)a3->AdapterAddress = *(_DWORD *)a2;
            *(_WORD *)&a3->AdapterAddress[4] = *((_WORD *)a2 + 2);
            a3->MaxMulticastAddresses = a1;
            a3->BindListLock = BindListLock;
            a3->MiniportMCastAddressBuf = (unsigned __int8 (*)[6])v9;
            a3->MiniportOldMCastAddressBuf = (unsigned __int8 (*)[6])v11;
            a3->NextMCastAddressBuf = (unsigned __int8 (*)[6])v13;
            a3->NextOldMCastAddressBuf = (unsigned __int8 (*)[6])v14;
            return 1;
          }
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
        }
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
  }
  return 0;
}
