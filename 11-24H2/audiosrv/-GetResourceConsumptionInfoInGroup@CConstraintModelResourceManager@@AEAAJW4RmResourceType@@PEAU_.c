/*
 * XREFs of ?GetResourceConsumptionInfoInGroup@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAKPEAPEAU3@@Z @ 0x1800ED4C0
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18007AC9C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800EE800 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::GetResourceConsumptionInfoInGroup(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  unsigned int v10; // edi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  char *v13; // r9
  __int64 v14; // r11
  _DWORD *v15; // rdx
  int v16; // r10d
  _DWORD *v17; // rcx
  __int64 v18; // rax
  char *v19; // r8
  __int128 v20; // xmm1

  v6 = 0;
  v8 = a4;
  v10 = 0;
  *a6 = 0LL;
  *a5 = 0;
  if ( !a4 )
    return v6;
  v11 = (_DWORD *)(a3 + 528);
  v12 = a4;
  do
  {
    if ( *(v11 - 1) )
    {
      if ( !*v11 )
        goto LABEL_9;
LABEL_7:
      if ( v11[1] != a2 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( *v11 )
      goto LABEL_7;
LABEL_8:
    ++v10;
LABEL_9:
    v11 += 135;
    --v12;
  }
  while ( v12 );
  if ( v10 )
  {
    v13 = (char *)operator new(saturated_mul(v10, 0x21CuLL));
    if ( !v13 )
      return (unsigned int)-2147024882;
    v14 = v8;
    v15 = (_DWORD *)(a3 + 528);
    v16 = 0;
    while ( 2 )
    {
      if ( *(v15 - 1) )
      {
        if ( *v15 )
          goto LABEL_18;
      }
      else if ( *v15 )
      {
LABEL_18:
        if ( v15[1] == a2 )
          goto LABEL_19;
      }
      else
      {
LABEL_19:
        v17 = v15 - 132;
        v18 = 4LL;
        v19 = &v13[540 * v16];
        do
        {
          *(_OWORD *)v19 = *(_OWORD *)v17;
          *((_OWORD *)v19 + 1) = *((_OWORD *)v17 + 1);
          *((_OWORD *)v19 + 2) = *((_OWORD *)v17 + 2);
          *((_OWORD *)v19 + 3) = *((_OWORD *)v17 + 3);
          *((_OWORD *)v19 + 4) = *((_OWORD *)v17 + 4);
          *((_OWORD *)v19 + 5) = *((_OWORD *)v17 + 5);
          *((_OWORD *)v19 + 6) = *((_OWORD *)v17 + 6);
          v19 += 128;
          v20 = *((_OWORD *)v17 + 7);
          v17 += 32;
          *((_OWORD *)v19 - 1) = v20;
          --v18;
        }
        while ( v18 );
        ++v16;
        *(_OWORD *)v19 = *(_OWORD *)v17;
        *((_QWORD *)v19 + 2) = *((_QWORD *)v17 + 2);
        *((_DWORD *)v19 + 6) = v17[6];
      }
      v15 += 135;
      if ( !--v14 )
      {
        *a5 = v10;
        *a6 = v13;
        return v6;
      }
      continue;
    }
  }
  return v6;
}
