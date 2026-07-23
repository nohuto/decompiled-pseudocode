/*
 * XREFs of PiDevCfgQueryDriverPolicy @ 0x14072896C
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PiDevCfgReadDriverPolicy @ 0x1407292E8 (PiDevCfgReadDriverPolicy.c)
 */

__int64 __fastcall PiDevCfgQueryDriverPolicy(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-30h] BYREF
  __int64 v4; // [rsp+30h] [rbp-20h]
  __int128 v5; // [rsp+38h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-8h]

  v1 = a1;
  v6 = 0;
  LODWORD(v4) = 0;
  LOBYTE(a1) = 1;
  v5 = 0LL;
  v3 = 0LL;
  if ( (PiDevCfgSystemDriverPolicy & 1) != 0 )
    goto LABEL_4;
  if ( (int)PiDevCfgReadDriverPolicy(a1, &v3) >= 0 )
  {
    _InterlockedExchange64((_QWORD *)&PiDevCfgSystemDriverPolicy + 1, *((__int64 *)&v3 + 1));
    _InterlockedExchange64(&qword_140FD82F0, v4);
    _InterlockedExchange((volatile __int32 *)&PiDevCfgSystemDriverPolicy, v3);
LABEL_4:
    *(_OWORD *)v1 = PiDevCfgSystemDriverPolicy;
    *((_QWORD *)v1 + 2) = qword_140FD82F0;
    goto LABEL_5;
  }
  *(_OWORD *)v1 = 0LL;
  *((_QWORD *)v1 + 2) = 0LL;
LABEL_5:
  result = *v1;
  if ( (result & 2) == 0 )
  {
    result = PiDevCfgReadDriverPolicy(0LL, &v5);
    if ( (int)result >= 0 )
    {
      result = v5 & 2;
      *v1 |= result;
    }
  }
  return result;
}
