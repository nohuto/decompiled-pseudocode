/*
 * XREFs of GetCppcRequestMsrPerfControlHandler @ 0x140023BB0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_QosHysteresisExperiment__private_GetVariant @ 0x14000424C (Feature_QosHysteresisExperiment__private_GetVariant.c)
 *     Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline @ 0x140004288 (Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline.c)
 *     IsFastCppcSupported @ 0x1400042D8 (IsFastCppcSupported.c)
 *     IsTargettedCpuForQosExperiment_AMD @ 0x140004354 (IsTargettedCpuForQosExperiment_AMD.c)
 */

__int64 __fastcall GetCppcRequestMsrPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ebx
  void *v14; // rax
  __int64 v15; // rax
  bool v16; // cl
  __int64 v17; // rcx
  int Variant; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v13;
    v11 = *(_QWORD *)(v10 + 132);
    v12 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) != 8 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 156) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 156);
    }
    v12 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 180) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 180);
    }
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 420) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 420);
    }
    v12 |= 0xFF000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 129) && !*(_BYTE *)(a2 + 130) && v11 == 3221291699LL )
  {
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = PerfSelectionCppcRequestMsr;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = PerfControlCppcRequestMsrLp;
      *a4 = PerfControlCppcRequestMsrLp;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
      return 0;
    }
    *a3 = PerfControlCppcRequestMsr;
    v14 = PerfControlCppcRequestMsrHidden;
    if ( dword_140015EE0 == 1 )
      v14 = PerfControlCppcRequestMsrHiddenHv;
    *a4 = v14;
    *a5 = 0LL;
    *a7 = 1;
    *a8 = 0;
    v15 = *(_QWORD *)(a1 + 1240);
    if ( v15 )
      v16 = *(_DWORD *)(v15 + 16) > 1u;
    else
      v16 = 0;
    *a9 = v16;
    if ( !(unsigned int)Feature_QosHysteresisExperiment__private_IsEnabledDeviceUsageNoInline()
      || !IsTargettedCpuForQosExperiment_AMD() )
    {
      *a10 = IsFastCppcSupported() ? 100 : 1000;
      return 0;
    }
    Variant = Feature_QosHysteresisExperiment__private_GetVariant(v17);
    if ( Variant )
    {
      v19 = Variant - 1;
      if ( !v19 )
        goto LABEL_53;
      v20 = v19 - 1;
      if ( !v20 )
      {
        *a10 = 500;
        return 0;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        *a10 = 200;
        return 0;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_52:
        *a10 = 100;
        return 0;
      }
      if ( v22 == 1 )
      {
        *a10 = 10;
        return 0;
      }
    }
    if ( IsFastCppcSupported() )
      goto LABEL_52;
LABEL_53:
    *a10 = 1000;
    return 0;
  }
  return v13;
}
