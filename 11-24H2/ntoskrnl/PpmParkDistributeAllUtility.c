/*
 * XREFs of PpmParkDistributeAllUtility @ 0x1404E5B80
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140417110 (PpmParkDistributeUtility.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkDistributeUtilityEx @ 0x1405E0904 (PpmParkDistributeUtilityEx.c)
 */

char __fastcall PpmParkDistributeAllUtility(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  unsigned int i; // edi
  __int64 v8; // rbx
  int v9; // r9d

  v4 = PpmCurrentProfile[0];
  v5 = 61LL * dword_140F0B38C;
  v6 = BYTE3(PpmCurrentProfile[0][v5 + 22]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v8 = PpmParkNodes + 1296LL * i;
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(v5 * 8, v4, a3, a4) )
    {
      LOBYTE(v9) = v6;
      PpmParkDistributeUtilityEx(v8 + 48, v8 + 312, *(unsigned __int16 *)(v8 + 1180), v9, 0, 0LL);
    }
    else
    {
      PpmParkDistributeUtility(
        *(_QWORD *)(v8 + 16),
        *(_QWORD *)(v8 + 24),
        *(_WORD *)(v8 + 4),
        *(_BYTE *)(v8 + 1180),
        v6,
        0,
        0LL);
    }
  }
  return 1;
}
