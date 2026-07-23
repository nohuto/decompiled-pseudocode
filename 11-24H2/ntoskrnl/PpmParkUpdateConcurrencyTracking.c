/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x140A6B908
 * Callers:
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  char v1; // r15
  unsigned __int64 result; // rax
  unsigned __int16 i; // r14
  __int64 v4; // rbx
  char v5; // al
  char v6; // cl
  __int64 *v7; // rcx
  unsigned __int8 v8; // si
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[264]; // [rsp+40h] [rbp-C8h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset_0(&v12, 0, 0x108uLL);
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 1296LL * i;
    v5 = *(_BYTE *)(v4 + 1184);
    v6 = v5 & 8;
    if ( v1 )
    {
      if ( !v6 )
      {
        v8 = 0;
        *(_BYTE *)(v4 + 1184) = v5 | 8;
        if ( *(_BYTE *)(v4 + 12) )
        {
          do
          {
            v9 = *(_QWORD *)(v4 + 1288) + 640LL * v8;
            if ( *(_WORD *)v9 )
            {
              if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
              {
                v10 = (__int64 *)(v9 + 40);
              }
              else
              {
                v12 = 2097153LL;
                memset_0(v13, 0, 0x100uLL);
                KeAddGroupAffinityEx((unsigned __int16 *)&v12, *(_WORD *)(v4 + 4), *(_QWORD *)(v9 + 24));
                v10 = &v12;
              }
              PopExecuteOnTargetProcessors(
                (__int64)v10,
                (__int64)PpmIdleInstallConcurrency,
                *(_QWORD *)(v4 + 1104),
                *(_QWORD *)(v9 + 568));
            }
            ++v8;
          }
          while ( v8 < *(_BYTE *)(v4 + 12) );
          v1 = a1;
        }
      }
    }
    else if ( v6 )
    {
      *(_BYTE *)(v4 + 1184) = v5 & 0xF7;
      if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
      {
        v7 = (__int64 *)(v4 + 48);
      }
      else
      {
        v12 = 2097153LL;
        memset_0(v13, 0, 0x100uLL);
        KeAddGroupAffinityEx((unsigned __int16 *)&v12, *(_WORD *)(v4 + 4), *(_QWORD *)(v4 + 16));
        v7 = &v12;
      }
      PopExecuteOnTargetProcessors((__int64)v7, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
