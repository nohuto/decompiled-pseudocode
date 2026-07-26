/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400D0CC0
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140152A70 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x140069280 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D18DC (ndisIfCreateCompartmentBlock.c)
 *     Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B48 (Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int v1; // edx
  int CompartmentBlock; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 Pool2; // rax
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int16 v13; // cx
  __int128 v14; // xmm0
  KIRQL v15; // si
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 i; // [rsp+40h] [rbp-C8h]
  _QWORD v19[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // [rsp+98h] [rbp-70h]
  _QWORD v21[14]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v22[206]; // [rsp+118h] [rbp+10h] BYREF

  memset(v19, 0, 0x48uLL);
  v20 = 0LL;
  v0 = 0LL;
  memset(v22, 0, 0x668uLL);
  LODWORD(v17) = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      57,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids);
  }
  memset(v21, 0, sizeof(v21));
  v21[4] = 0x100000000LL;
  v21[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v21[3]) = 7;
  v21[5] = 0LL;
  LODWORD(v21[6]) = 4;
  v21[7] = 0LL;
  LODWORD(v21[8]) = 1640;
  LODWORD(v21[13]) = 0;
  CompartmentBlock = NsiEnumerateObjectsAllParametersEx(v21);
  if ( CompartmentBlock >= 0 )
  {
    v3 = v21[13];
    if ( LODWORD(v21[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v3 = v21[13];
        }
        v4 = (4 * v3 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v3 > 0xFFFFFFFF || v4 + 1640 * v3 < v4 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_34;
        }
        v5 = v4;
        Pool2 = ExAllocatePool2(64LL, v4 + 1640LL * v3, 1718174798);
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          CompartmentBlock = -1073741670;
          goto LABEL_34;
        }
        v21[5] = Pool2;
        LODWORD(v21[6]) = 4;
        v21[7] = v5 + Pool2;
        LODWORD(v21[8]) = 1640;
        v7 = NsiEnumerateObjectsAllParametersEx(v21);
        if ( v7 != 261 )
          break;
        v3 = v21[13];
      }
      CompartmentBlock = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        v9 = v21[7];
        v10 = v21[5];
        for ( i = v21[7]; v8 < LODWORD(v21[13]); ++v8 )
        {
          v11 = v9 + 1640LL * v8;
          if ( *(_BYTE *)v11 == 0xAD )
          {
            v12 = *(_BYTE *)(v11 + 1);
            if ( v12 )
            {
              v13 = *(_WORD *)(v11 + 2);
              if ( v13 >= 0x448u )
              {
                if ( v12 < 3u || v13 < 0x664u )
                {
                  *(_DWORD *)v11 = 107479981;
                  memset((void *)(v11 + 1096), 0, 0x204uLL);
                  *(_QWORD *)(v11 + 1612) = 1LL;
                  if ( *(_DWORD *)(v10 + 4LL * v8) == 1 )
                  {
                    *(_WORD *)(v11 + 1096) = 38;
                    *(_OWORD *)(v11 + 1098) = *(_OWORD *)L"Default Compartment";
                    *(_OWORD *)(v11 + 1114) = *(_OWORD *)L"Compartment";
                    *(_DWORD *)(v11 + 1130) = *(_DWORD *)L"ent";
                    *(_WORD *)(v11 + 1134) = aDefaultCompart[18];
                    v14 = *(_OWORD *)(v11 + 1080);
                    *(_DWORD *)(v11 + 1616) = 4;
                    *(_OWORD *)(v11 + 1620) = v14;
                  }
                  v19[5] = v10 + 4LL * v8;
                  v19[2] = &NPI_MS_NDIS_MODULEID;
                  v19[1] = 0LL;
                  v19[3] = 7LL;
                  v19[6] = 4LL;
                  v19[8] = 1640LL;
                  v19[0] = 0LL;
                  v19[4] = 0LL;
                  v19[7] = v11;
                  NsiSetAllParametersEx(v19);
                }
                CompartmentBlock = ndisIfCreateCompartmentBlock(*(_DWORD *)(v10 + 4LL * v8));
                if ( CompartmentBlock >= 0 )
                {
                  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                  if ( (unsigned int)Feature_TCPIP_2025_Wave2_NdisCompIdReuse__private_IsEnabledDeviceUsageNoInline()
                    && dword_140124F2C <= (unsigned int)(*(_DWORD *)(v10 + 4LL * v8) + 1) )
                  {
                    dword_140124F2C = *(_DWORD *)(v10 + 4LL * v8) + 1;
                  }
                  COMPARTMENTBLOCK_DECREMENT_REF(v20);
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v15);
                }
              }
              v9 = i;
            }
          }
        }
      }
      ExFreePoolWithTag(v0, 0);
    }
    else
    {
      v19[3] = 7LL;
      v19[5] = &v17;
      *(_DWORD *)((char *)&v22[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v22[135] = xmmword_140107398;
      HIWORD(v22[141]) = aDefaultCompart[18];
      v19[7] = v22;
      HIDWORD(v19[1]) = 0;
      v19[6] = 4LL;
      v19[8] = 1640LL;
      v19[2] = &NPI_MS_NDIS_MODULEID;
      v19[4] = 0x100000002LL;
      LODWORD(v22[0]) = 107479981;
      LOWORD(v22[137]) = 38;
      *(_OWORD *)((char *)&v22[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v22[201]) = 1;
      *(_OWORD *)((char *)&v22[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v22[202]) = 4;
      CompartmentBlock = NsiSetAllParametersEx(v19);
    }
  }
LABEL_34:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x3Au,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      CompartmentBlock,
      v17);
  return (unsigned int)CompartmentBlock;
}
