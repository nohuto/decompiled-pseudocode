/*
 * XREFs of ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400CD33C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140147DA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x140067950 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400CCF9C (ndisIfCreateNetworkBlock.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 ndisIfNetworkSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int v1; // edx
  unsigned int v2; // edx
  int v3; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 Pool2; // rax
  int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // r14d
  KIRQL v10; // r12
  struct _NDIS_IF_NETWORK_BLOCK *v11; // rdi
  __int64 v12; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r15
  _QWORD v19[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v20[20]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v21; // [rsp+130h] [rbp+67h]
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+138h] [rbp+6Fh] BYREF
  void *v23; // [rsp+140h] [rbp+77h]

  v0 = 0LL;
  memset(v19, 0, 0x48uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      24,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids);
  }
  memset(v20, 0, 0x70uLL);
  LODWORD(v20[3]) = 6;
  v20[2] = &NPI_MS_NDIS_MODULEID;
  v20[4] = 0x100000000LL;
  v20[5] = 0LL;
  LODWORD(v20[6]) = 16;
  v20[7] = 0LL;
  LODWORD(v20[8]) = 528;
  LODWORD(v20[13]) = 0;
  v3 = NsiEnumerateObjectsAllParametersEx(v20);
  if ( v3 >= 0 )
  {
    v4 = v20[13];
    if ( LODWORD(v20[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v4 = v20[13];
        }
        v2 = 16 * v4;
        if ( 16 * (unsigned __int64)v4 > 0xFFFFFFFF || 544 * v4 < 16 * v4 )
        {
          v3 = -1073741670;
          goto LABEL_29;
        }
        v5 = v2;
        Pool2 = ExAllocatePool2(64LL, v2 + 528LL * v4, 1718174798LL);
        v23 = (void *)Pool2;
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          v3 = -1073741670;
          goto LABEL_29;
        }
        v20[5] = Pool2;
        LODWORD(v20[6]) = 16;
        v20[7] = v5 + Pool2;
        LODWORD(v20[8]) = 528;
        v7 = NsiEnumerateObjectsAllParametersEx(v20);
        if ( v7 != 261 )
          break;
        v4 = v20[13];
      }
      v3 = v7;
      if ( v7 >= 0 )
      {
        v8 = v20[7];
        NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v20[5];
        v21 = v20[7];
        v9 = 0;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        if ( LODWORD(v20[13]) )
        {
          v11 = NetworkBlock;
          do
          {
            v12 = v8 + 528LL * v9;
            if ( *(_BYTE *)v12 == 0xAC && *(_BYTE *)(v12 + 1) && *(_WORD *)(v12 + 2) >= 0x210u )
            {
              CompartmentBlock = ndisIfFindCompartmentBlock(*(_DWORD *)(v12 + 4));
              v15 = 2 * v14;
              v16 = (__int64)CompartmentBlock;
              v17 = (__int64)v11 + 8 * v15;
              if ( CompartmentBlock )
              {
                NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)v11 + 8 * v15));
                if ( !NetworkBlock )
                  v3 = ndisIfCreateNetworkBlock(v16, v17, v12, &NetworkBlock);
              }
              else
              {
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
                v19[1] = 0LL;
                v19[2] = &NPI_MS_NDIS_MODULEID;
                v19[3] = 6LL;
                v19[6] = 16LL;
                v19[8] = 528LL;
                v19[0] = 0LL;
                v19[4] = 0x300000000LL;
                v19[5] = v17;
                v19[7] = v12;
                NsiSetAllParametersEx(v19);
                v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              }
              v8 = v21;
            }
            ++v9;
          }
          while ( v9 < LODWORD(v20[13]) );
          v0 = v23;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
      }
      ExFreePoolWithTag(v0, 0);
    }
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      22,
      25,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
