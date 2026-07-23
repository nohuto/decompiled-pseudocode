/*
 * XREFs of PpmEventHeteroConfigUpdate @ 0x140A59448
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PpmEventHeteroConfigUpdate()
{
  _UNKNOWN **v0; // rax
  unsigned __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int8 *Prcb; // rax
  __int16 v5; // cx
  unsigned __int8 v7; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int8 v8; // [rsp+39h] [rbp-18h] BYREF
  unsigned __int8 v9; // [rsp+3Ah] [rbp-17h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int8 *v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  unsigned __int8 *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  unsigned __int8 *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  unsigned __int8 *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v0 = &retaddr;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v0) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE);
    if ( (_BYTE)v0 )
    {
      v1 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v2) = 0;
      while ( 1 )
      {
        while ( v1 )
        {
          _BitScanForward64(&v3, v1);
          v1 &= ~(1LL << v3);
          Prcb = (unsigned __int8 *)KeGetPrcb(*((_DWORD *)qword_140F22998
                                              + 64 * (unsigned __int16)v2
                                              + (unsigned __int8)v3));
          v7 = Prcb[35336];
          v5 = Prcb[208];
          UserData.Ptr = (ULONGLONG)&v10;
          v14 = &v7;
          v10 = v5;
          v12 = Prcb + 209;
          *(_QWORD *)&UserData.Size = 2LL;
          v13 = 1LL;
          v15 = 1LL;
          v8 = Prcb[35337];
          v16 = &v8;
          v17 = 1LL;
          v9 = Prcb[35338];
          v18 = &v9;
          v19 = 1LL;
          LOBYTE(v0) = EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
        }
        v2 = (unsigned __int16)(v2 + 1);
        if ( (unsigned int)v2 >= PpmCheckRegistered.Count )
          break;
        v1 = PpmCheckRegistered.Bitmap[v2];
      }
    }
  }
  return (char)v0;
}
