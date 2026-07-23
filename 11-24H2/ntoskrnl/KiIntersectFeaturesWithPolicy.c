/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x140B58F34
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140B58B20 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x1405BD9EC (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x140B590D8 (KiIsXSaveFeatureAllowed.c)
 *     KeHwPolicyLocateResource @ 0x140C2A950 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall KiIntersectFeaturesWithPolicy(int a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  char IsXSaveFeatureAllowed; // al
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  v2 = 0LL;
  result = 0LL;
  v20 = 0LL;
  v6 = 0;
  LODWORD(v16) = 0;
  v7 = 0LL;
  v15 = 0;
  v19 = 0LL;
  if ( *a2 )
  {
    v17 = 0LL;
    v18 = 0LL;
    result = KeHwPolicyLocateResource(a1, 101, KeXSavePolicyId, (unsigned int)&v17, (__int64)&v18);
    if ( (int)result < 0 && KeXSavePolicyId != 1 )
    {
      KeXSavePolicyId = 1LL;
      result = KeHwPolicyLocateResource(a1, 101, 1, (unsigned int)&v17, (__int64)&v18);
    }
    if ( (_DWORD)result == -1073741204 )
    {
      *((_DWORD *)a2 + 5) &= 0xFFFFFFF8;
      a2[67] = 0LL;
    }
    else
    {
      KiGetProcessorInformation(&v19, (_DWORD *)&v19 + 3, &v16, &v15);
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *a2;
      v10 = a2[67] | *a2;
      result = CurrentPrcb->UpdateSignature.QuadPart;
      v20 = result;
      if ( v10 )
      {
        v11 = v17;
        do
        {
          if ( v6 >= 0x40 )
            break;
          if ( (v10 & 1) != 0 )
          {
            result = *(_QWORD *)(v11 + 16);
            if ( _bittest64(&result, v6) )
            {
              result = *(unsigned int *)(v11 + 24);
              v12 = 0;
              v15 = result;
              if ( (_DWORD)result )
              {
                v13 = v15;
                result = v11 + 32;
                v16 = v11 + 32;
                do
                {
                  if ( *(_DWORD *)result == v6 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v11, v12, CurrentPrcb, &v19);
                    v13 = v15;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v7, v6);
                    result = v16;
                  }
                  result += 16LL;
                  ++v12;
                  v16 = result;
                }
                while ( v12 < v13 );
              }
            }
          }
          ++v6;
          v10 >>= 1;
        }
        while ( v10 );
      }
      v2 = v7 & v9;
      a2[67] &= v7;
    }
    *a2 = v2;
  }
  return result;
}
