/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14085A690
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     RtlpFreeAtom @ 0x14085AC78 (RtlpFreeAtom.c)
 *     ObpChargeQuotaForObject @ 0x1409857D0 (ObpChargeQuotaForObject.c)
 *     PspFreeRateControl @ 0x14098CF0C (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 *     PspRemoveQuotaBlock @ 0x1409D5BC0 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rdx
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8

  if ( P != (char *)1 )
  {
    v4 = a3;
    if ( a2 )
      PspReturnQuota((__int64 *)P, 0LL, 1, a2);
    if ( v4 )
      PspReturnQuota((__int64 *)P, 0LL, 0, v4);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 128, 0xFFFFFFFF) == 1 )
    {
      if ( (PspResourceFlags[0] & 3) != 1 )
        goto LABEL_12;
      v6 = *((_QWORD *)P + 10);
      a3 = *((_QWORD *)P + 8);
      a4 = v6 != 0;
      if ( a3 + *((_QWORD *)P + 9) )
      {
        if ( v6 )
        {
          v8 = _InterlockedExchange64((volatile __int64 *)P + 9, 0LL);
          a3 = _InterlockedExchange64((volatile __int64 *)P + 8, 0LL) + v8;
        }
        if ( a3 )
        {
LABEL_28:
          PspReturnResourceQuota(0, (__int64)P, a3, a4);
LABEL_12:
          if ( (byte_140FC6348 & 3) != 1 )
            goto LABEL_16;
          a4 = *((_QWORD *)P + 26);
          a3 = *((_QWORD *)P + 24);
          if ( a3 + *((_QWORD *)P + 25) )
          {
            if ( a4 )
            {
              v9 = _InterlockedExchange64((volatile __int64 *)P + 25, 0LL);
              a3 = _InterlockedExchange64((volatile __int64 *)P + 24, 0LL) + v9;
            }
            if ( a3 )
            {
LABEL_32:
              PspReturnResourceQuota(1u, (__int64)(P + 128), a3, a4 != 0);
LABEL_16:
              if ( (byte_140FC6350 & 3) != 1 )
                goto LABEL_20;
              a4 = *((_QWORD *)P + 42);
              a3 = *((_QWORD *)P + 40);
              if ( a3 + *((_QWORD *)P + 41) )
              {
                if ( a4 )
                {
                  v10 = _InterlockedExchange64((volatile __int64 *)P + 41, 0LL);
                  a3 = _InterlockedExchange64((volatile __int64 *)P + 40, 0LL) + v10;
                }
                if ( a3 )
                {
LABEL_36:
                  PspReturnResourceQuota(2u, (__int64)(P + 256), a3, a4 != 0);
LABEL_20:
                  v7 = P + 384;
                  if ( (byte_140FC6358 & 3) != 1 )
                  {
LABEL_24:
                    PspRemoveQuotaBlock(P, v7, a3, a4);
                    ExFreePoolWithTag(P, 0);
                    return;
                  }
                  a4 = *((_QWORD *)P + 58);
                  a3 = *((_QWORD *)P + 56);
                  if ( a3 + *((_QWORD *)P + 57) )
                  {
                    if ( a4 )
                    {
                      v11 = _InterlockedExchange64((volatile __int64 *)P + 57, 0LL);
                      a3 = _InterlockedExchange64((volatile __int64 *)P + 56, 0LL) + v11;
                    }
                    if ( a3 )
                      goto LABEL_40;
                  }
                  else
                  {
                    a3 = 0LL;
                  }
                  if ( !a4 )
                    goto LABEL_24;
LABEL_40:
                  PspReturnResourceQuota(3u, (__int64)v7, a3, a4 != 0);
                  goto LABEL_24;
                }
              }
              else
              {
                a3 = 0LL;
              }
              if ( !a4 )
                goto LABEL_20;
              goto LABEL_36;
            }
          }
          else
          {
            a3 = 0LL;
          }
          if ( !a4 )
            goto LABEL_16;
          goto LABEL_32;
        }
      }
      else
      {
        a3 = 0LL;
      }
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_28;
    }
  }
}
