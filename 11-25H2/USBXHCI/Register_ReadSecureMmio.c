/*
 * XREFs of Register_ReadSecureMmio @ 0x140009A08
 * Callers:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUchar @ 0x14000CC84 (XilRegister_ReadUchar.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024440 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400252D0 (RootHub_UcxEvtInterruptTransfer.c)
 *     XilRegister_ReadBufferUlong @ 0x1400354B0 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong64 @ 0x140049C24 (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x140049C88 (XilRegister_ReadUshort.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, int a3, unsigned int a4, void *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v13; // rsi
  int *p_P; // rbx
  __int64 v15; // rax
  int v16; // edx
  int v17; // edx
  __int64 v19; // [rsp+38h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  __int128 v21; // [rsp+48h] [rbp-39h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+64h] [rbp-1Dh]
  __int64 v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+70h] [rbp-11h]
  unsigned int v27; // [rsp+74h] [rbp-Dh]
  __int64 P; // [rsp+78h] [rbp-9h] BYREF
  int v29; // [rsp+80h] [rbp-1h]

  v29 = 0;
  P = 0LL;
  v8 = 8LL;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 2LL;
        break;
      case 2:
        v9 = 4LL;
        break;
      case 3:
        v9 = 8LL;
        break;
      default:
        v10 = a4;
LABEL_6:
        v12 = 0;
        goto LABEL_7;
    }
  }
  else
  {
    v9 = 1LL;
  }
  v10 = a4;
  v11 = v9 * a4;
  if ( v9 * (unsigned __int64)a4 > 0xFFFFFFFF )
    goto LABEL_6;
  if ( !v11 )
    goto LABEL_6;
  v12 = v11 + 8;
  if ( v11 + 8 < v11 )
    goto LABEL_6;
  if ( v12 < 0x10 )
    v12 = 16;
LABEL_7:
  switch ( a3 )
  {
    case 0:
      v8 = 1LL;
      goto LABEL_11;
    case 1:
      v8 = 2LL;
      goto LABEL_11;
    case 2:
      v8 = 4LL;
      goto LABEL_11;
    case 3:
LABEL_11:
      v13 = v8 * v10;
      if ( v13 <= 0xFFFFFFFF )
        goto LABEL_13;
      break;
  }
  LODWORD(v13) = 0;
LABEL_13:
  if ( v12 <= 0x10 )
  {
    p_P = (int *)&P;
    v12 = 16;
LABEL_15:
    v15 = *(_QWORD *)(a1 + 128);
    v20 = 0LL;
    v24 = 0;
    v22 = v15;
    v25 = a2;
    v21 = 0LL;
    v23 = 10;
    v26 = a3;
    v27 = a4;
    if ( (int)SecureChannel_SendRequestSynchronously(v19, &v20, 56LL, p_P, v12) >= 0 )
    {
      v16 = *p_P;
      if ( *p_P < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v16,
            6,
            75,
            (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
            *p_P);
        }
      }
      else
      {
        memmove(a5, p_P + 2, (unsigned int)v13);
      }
    }
    if ( p_P )
    {
      if ( p_P != (int *)&P )
        ExFreePoolWithTag(p_P, 0x49434858u);
    }
    return;
  }
  p_P = (int *)ExAllocatePool2(64LL, v12, 1229146200LL);
  if ( p_P )
    goto LABEL_15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v17,
      6,
      74,
      (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
      v12);
  }
}
