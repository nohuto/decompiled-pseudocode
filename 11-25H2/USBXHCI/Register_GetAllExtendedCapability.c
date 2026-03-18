/*
 * XREFs of Register_GetAllExtendedCapability @ 0x140035398
 * Callers:
 *     Wmi_CreateControllerCapabilities @ 0x140033EC4 (Wmi_CreateControllerCapabilities.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilRegister_ReadBufferUlong @ 0x1400354B0 (XilRegister_ReadBufferUlong.c)
 */

void __fastcall Register_GetAllExtendedCapability(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  int Ulong; // eax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = *(unsigned int **)(a1 + 56);
  if ( v2 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v2);
      *(_DWORD *)a2 = Ulong;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v10) = *(unsigned __int8 *)(a2 + 1);
        LODWORD(v9) = (unsigned __int8)Ulong;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          5u,
          6u,
          0x47u,
          (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
          v9,
          v10);
      }
      if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
        break;
      if ( (unsigned __int8)*(_DWORD *)a2 == 2 )
      {
        XilRegister_ReadBufferUlong(a1, v2, a2, 4LL);
        v6 = *(_DWORD *)(a2 + 8) >> 28;
        if ( (_DWORD)v6 )
        {
          v7 = a2 + 16;
LABEL_10:
          XilRegister_ReadBufferUlong(a1, v2, v7, v6);
        }
      }
      if ( *(_DWORD *)a2 == -1 )
        return;
      if ( !*(_BYTE *)(a2 + 1) )
        return;
      v8 = 4LL * *(unsigned __int8 *)(a2 + 1);
      v2 = (unsigned int *)((char *)v2 + v8);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return;
      a2 += v8;
    }
    v6 = 2LL;
    v7 = a2;
    goto LABEL_10;
  }
}
