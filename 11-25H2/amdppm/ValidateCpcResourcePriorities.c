/*
 * XREFs of ValidateCpcResourcePriorities @ 0x140030204
 * Callers:
 *     ValidateAcpiCPC @ 0x14002F0D4 (ValidateAcpiCPC.c)
 * Callees:
 *     CpcRegisterIsSupportedEx @ 0x1400059A4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_Sd @ 0x1400072FC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SDD @ 0x140007450 (WPP_RECORDER_SF_SDD.c)
 *     RtlStringCbPrintfA @ 0x1400083D4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     ValidateAcpiCPCRegister @ 0x14002F270 (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateCpcResourcePriorities(unsigned int *a1, const wchar_t *a2)
{
  int v2; // r12d
  const char **v3; // r10
  unsigned int v4; // esi
  unsigned int *v7; // r14
  _DWORD *v8; // r8
  __int64 i; // rdx
  int v10; // ecx
  __int64 v11; // r15
  unsigned __int8 *v12; // rbx
  void *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  _BYTE *v16; // rcx
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r9
  int v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+30h] [rbp-C8h]
  int v22; // [rsp+38h] [rbp-C0h]
  char pszDest[112]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = (const char **)&CpcResourcePrioritiesRegisterTable;
  v4 = 0;
  while ( 2 )
  {
    if ( v4 >= *a1 )
      return 0;
    v7 = &a1[26 * v4 + 2];
    v8 = *(_DWORD **)v7;
    if ( !*(_QWORD *)v7 || !*v8 )
    {
      v15 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 64;
        goto LABEL_36;
      }
      return v15;
    }
    for ( i = 0LL; (unsigned int)i < *v8; i = (unsigned int)(i + 1) )
    {
      v10 = v8[i + 1];
      if ( (unsigned int)(v10 - 1) > 4 )
      {
        v15 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v17 = 65;
        goto LABEL_27;
      }
      if ( ((1 << v10) & v2) != 0 )
      {
        v15 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v17 = 66;
LABEL_27:
        v22 = i;
        v20 = v4;
        WPP_RECORDER_SF_SDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          i,
          (__int64)v8,
          v17,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2,
          v20,
          v22);
        return v15;
      }
      v2 |= 1 << v10;
    }
    v11 = 0LL;
    while ( (unsigned int)v11 < 4 )
    {
      v12 = (unsigned __int8 *)v7 + LODWORD(v3[3 * v11]);
      RtlStringCbPrintfA(pszDest, 0x64uLL, "ResourcePriorityRegisters[%u].%s", v4, v3[3 * v11 + 1]);
      v13 = &CpcResourcePrioritiesRegisterTable;
      LOBYTE(v14) = *((_BYTE *)&CpcResourcePrioritiesRegisterTable + 24 * v11 + 17);
      LOBYTE(v13) = *((_BYTE *)&CpcResourcePrioritiesRegisterTable + 24 * v11 + 16);
      v15 = ValidateAcpiCPCRegister(v12, (__int64)v13, v14, pszDest, a2);
      if ( (v15 & 0x80000000) != 0 )
        return v15;
      v11 = (unsigned int)(v11 + 1);
      v3 = (const char **)&CpcResourcePrioritiesRegisterTable;
    }
    if ( CpcRegisterIsSupportedEx((__int64)(v7 + 8)) && !CpcRegisterIsSupportedEx((__int64)(v7 + 2)) )
    {
      v15 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v18 = 67;
LABEL_36:
      v21 = v4;
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        (__int64)v8,
        v18,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a2,
        v21);
      return v15;
    }
    if ( !CpcRegisterIsSupportedEx((__int64)(v7 + 8))
      && CpcRegisterIsSupportedEx((__int64)(v7 + 2))
      && (*v16 != 126 || *(_QWORD *)(v7 + 3)) )
    {
      v15 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v15;
      v18 = 68;
      goto LABEL_36;
    }
    if ( *((_BYTE *)v7 + 56) != 126 || v7[15] >= 2 )
    {
      ++v4;
      continue;
    }
    break;
  }
  v15 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 69;
    goto LABEL_36;
  }
  return v15;
}
