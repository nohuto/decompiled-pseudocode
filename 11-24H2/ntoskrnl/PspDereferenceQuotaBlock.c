/*
 * XREFs of PspDereferenceQuotaBlock @ 0x1409C57F0
 * Callers:
 *     PspDereferenceQuota @ 0x1408FF678 (PspDereferenceQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     PspRemoveQuotaBlock @ 0x1409C59F0 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspDereferenceQuotaBlock(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 128, 0xFFFFFFFF) == 1 )
  {
    if ( (PspResourceFlags[0] & 3) != 1 )
      goto LABEL_6;
    v5 = *((_QWORD *)P + 10);
    a3 = *((_QWORD *)P + 8);
    a4 = v5 != 0;
    if ( a3 + *((_QWORD *)P + 9) )
    {
      if ( v5 )
      {
        v7 = _InterlockedExchange64((volatile __int64 *)P + 9, 0LL);
        a3 = _InterlockedExchange64((volatile __int64 *)P + 8, 0LL) + v7;
      }
      if ( a3 )
      {
LABEL_22:
        PspReturnResourceQuota(0, (__int64)P, a3, a4);
LABEL_6:
        if ( (byte_140FC7398 & 3) != 1 )
          goto LABEL_10;
        a4 = *((_QWORD *)P + 26);
        a3 = *((_QWORD *)P + 24);
        if ( a3 + *((_QWORD *)P + 25) )
        {
          if ( a4 )
          {
            v8 = _InterlockedExchange64((volatile __int64 *)P + 25, 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)P + 24, 0LL) + v8;
          }
          if ( a3 )
          {
LABEL_26:
            PspReturnResourceQuota(1u, (__int64)(P + 128), a3, a4 != 0);
LABEL_10:
            if ( (byte_140FC73A0 & 3) != 1 )
              goto LABEL_14;
            a4 = *((_QWORD *)P + 42);
            a3 = *((_QWORD *)P + 40);
            if ( a3 + *((_QWORD *)P + 41) )
            {
              if ( a4 )
              {
                v9 = _InterlockedExchange64((volatile __int64 *)P + 41, 0LL);
                a3 = _InterlockedExchange64((volatile __int64 *)P + 40, 0LL) + v9;
              }
              if ( a3 )
              {
LABEL_30:
                PspReturnResourceQuota(2u, (__int64)(P + 256), a3, a4 != 0);
LABEL_14:
                v6 = P + 384;
                if ( (byte_140FC73A8 & 3) != 1 )
                {
LABEL_18:
                  PspRemoveQuotaBlock(P, v6, a3, a4);
                  ExFreePoolWithTag(P, 0);
                  return;
                }
                a4 = *((_QWORD *)P + 58);
                a3 = *((_QWORD *)P + 56);
                if ( a3 + *((_QWORD *)P + 57) )
                {
                  if ( a4 )
                  {
                    v10 = _InterlockedExchange64((volatile __int64 *)P + 57, 0LL);
                    a3 = _InterlockedExchange64((volatile __int64 *)P + 56, 0LL) + v10;
                  }
                  if ( a3 )
                    goto LABEL_34;
                }
                else
                {
                  a3 = 0LL;
                }
                if ( !a4 )
                  goto LABEL_18;
LABEL_34:
                PspReturnResourceQuota(3u, (__int64)v6, a3, a4 != 0);
                goto LABEL_18;
              }
            }
            else
            {
              a3 = 0LL;
            }
            if ( !a4 )
              goto LABEL_14;
            goto LABEL_30;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( !a4 )
          goto LABEL_10;
        goto LABEL_26;
      }
    }
    else
    {
      a3 = 0LL;
    }
    if ( !v5 )
      goto LABEL_6;
    goto LABEL_22;
  }
}
