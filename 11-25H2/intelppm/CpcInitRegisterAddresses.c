/*
 * XREFs of CpcInitRegisterAddresses @ 0x14002D25C
 * Callers:
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     MapAdddressSpaceForGenAddr @ 0x1400089E4 (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x140009708 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x14000C030 (GetSubspaceFromGenAddrEx.c)
 *     RegisterSubspace @ 0x1400287E4 (RegisterSubspace.c)
 */

__int64 __fastcall CpcInitRegisterAddresses(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  int v5; // ebx
  __int64 v7; // rsi
  __int64 v9; // r8
  __int64 v11; // rdi
  unsigned int v12; // ebp
  __int64 SubspaceFromGenAddr; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // r9
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v7 = 0LL;
  v9 = a2;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= a4 )
      return (unsigned int)v5;
    v11 = v9 + *(unsigned int *)(a3 + 24 * v7);
    if ( *(_BYTE *)v11 == 10 )
      break;
    if ( !*(_BYTE *)v11 && *(_QWORD *)(v11 + 4) )
    {
      v5 = MapAdddressSpaceForGenAddr(v9 + *(unsigned int *)(a3 + 24 * v7));
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v5;
        v15 = 19;
        goto LABEL_25;
      }
      goto LABEL_19;
    }
LABEL_20:
    v7 = (unsigned int)(v7 + 1);
  }
  v12 = *(unsigned __int8 *)(v11 + 3);
  v17 = 0LL;
  v5 = RegisterSubspace(a1, v12, &v17);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(v17 + 48) == v12 )
    {
      if ( *(_QWORD *)(v11 + 4) <= (__int64)*(unsigned int *)(v17 + 96) )
      {
        *(_QWORD *)(v11 + 16) = v17;
        v5 = 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741637;
    }
  }
  *a5 = 1;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    v15 = 17;
LABEL_25:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v15,
      (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
      v5);
    return (unsigned int)v5;
  }
  SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v11);
  v14 = *(_QWORD *)(a1 + 256);
  if ( !v14 )
  {
    *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
LABEL_19:
    v9 = a2;
    goto LABEL_20;
  }
  if ( v14 == SubspaceFromGenAddr )
    goto LABEL_19;
  v5 = -1073741270;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x12u,
      (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
      *(const wchar_t **)(a1 + 64));
  return (unsigned int)v5;
}
