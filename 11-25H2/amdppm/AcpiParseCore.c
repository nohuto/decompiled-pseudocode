/*
 * XREFs of AcpiParseCore @ 0x140029DD0
 * Callers:
 *     AcpiEval_CPC @ 0x14002754C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x140027CB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x140027FB8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x140028680 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x140028884 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x140028B84 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x140028ECC (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1400293D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1400296E0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x14002A274 (AcpiParseCpcResourcePriorityRegisterDescriptor.c)
 *     AcpiParseLpiObject @ 0x14002A410 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x14000782C (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x140007AB8 (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x140007C40 (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     GetObjectTypeName @ 0x14002D53C (GetObjectTypeName.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned __int16 *v11; // rbx
  unsigned __int8 *v12; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // r8
  unsigned __int8 *v16; // rbp
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int8 *v21; // rdx
  __int64 ObjectTypeName; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdi
  int v26; // r9d
  unsigned __int16 v27; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v11 >= v14 )
    {
      if ( v10 == v13 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v27 = 77;
      goto LABEL_47;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v27 = 70;
LABEL_47:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v27, v29, a7);
      return (unsigned int)-1072431093;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_16;
      v16 = &v12[24 * v9];
      if ( *v16 == v10 && *((_WORD *)v16 + 1) == v15 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v16 )
    {
LABEL_16:
      v20 = 0;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v21 = v12;
      do
      {
        if ( *v21 == v10 )
          break;
        ++v20;
        v21 += 24;
      }
      while ( v20 < (unsigned int)v8 );
      if ( v20 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ObjectTypeName = GetObjectTypeName(v15, v21);
        WPP_RECORDER_SF_sss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v23,
          ObjectTypeName,
          v24,
          v29,
          a7,
          *(const char **)&v12[24 * v24 + 8],
          ObjectTypeName);
      }
      v25 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_38;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v26 = 73;
          }
          else
          {
            if ( *((_WORD *)v12 + 1) != 2 )
            {
              if ( *((_WORD *)v12 + 1) == 3 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v26 = 75;
                break;
              }
LABEL_38:
              v12 += 24;
              if ( !--v25 )
                return (unsigned int)-1072431096;
              continue;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v26 = 74;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_38;
          v26 = 72;
        }
        break;
      }
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v21,
        1,
        v26,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      goto LABEL_38;
    }
    v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v16 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
    if ( v17 < 0 )
      break;
    v19 = v11[1];
    ++v10;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v19 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v18, v29, a7, *((const char **)v16 + 1));
  return (unsigned int)v17;
}
