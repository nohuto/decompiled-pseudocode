/*
 * XREFs of CpcInitRegisterAddresses @ 0x140026484
 * Callers:
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     MapAdddressSpaceForGenAddr @ 0x140005764 (MapAdddressSpaceForGenAddr.c)
 *     WPP_RECORDER_SF_S @ 0x140006F38 (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x14000752C (GetSubspaceFromGenAddrEx.c)
 *     RegisterSubspace @ 0x140027F70 (RegisterSubspace.c)
 */

__int64 __fastcall CpcInitRegisterAddresses(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  int v5; // ebx
  __int64 v7; // rsi
  __int64 v9; // r8
  __int64 v11; // rdi
  unsigned int v12; // ebp
  int v13; // edx
  __int64 SubspaceFromGenAddr; // rax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF

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
        v16 = 19;
        goto LABEL_25;
      }
      goto LABEL_19;
    }
LABEL_20:
    v7 = (unsigned int)(v7 + 1);
  }
  v12 = *(unsigned __int8 *)(v11 + 3);
  v18 = 0LL;
  v5 = RegisterSubspace(a1, v12, &v18);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(v18 + 48) == v12 )
    {
      if ( *(_QWORD *)(v11 + 4) <= (__int64)*(unsigned int *)(v18 + 96) )
      {
        *(_QWORD *)(v11 + 16) = v18;
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
    v16 = 17;
LABEL_25:
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      3,
      v16,
      (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
      v5);
    return (unsigned int)v5;
  }
  SubspaceFromGenAddr = GetSubspaceFromGenAddrEx(v11);
  v15 = *(_QWORD *)(a1 + 256);
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 256) = SubspaceFromGenAddr;
LABEL_19:
    v9 = a2;
    goto LABEL_20;
  }
  if ( v15 == SubspaceFromGenAddr )
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
