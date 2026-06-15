/*
 * XREFs of ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140044780
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050E00 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140086450 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckSampleForSilence(float *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r10d
  unsigned int v6; // edx
  unsigned __int8 *v8; // r8

  v5 = 1;
  v6 = 0;
  switch ( a3 )
  {
    case 0x10u:
      while ( v6 < a2 )
      {
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(__int16 *)a1 * 0.000030517578)) & _xmm) >= 0.004999999888241291 )
          return 0;
        a1 = (float *)((char *)a1 + 2);
        ++v6;
      }
      break;
    case 8u:
      while ( v6 < a2 )
      {
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(char)(*(_BYTE *)a1 + 0x80) * 0.0078125)) & _xmm) > 0.004999999888241291 )
          return 0;
        a1 = (float *)((char *)a1 + 1);
        ++v6;
      }
      break;
    case 0x18u:
      v8 = (unsigned __int8 *)a1 + 1;
      while ( v6 < a2 )
      {
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((*(v8 - 1) | (*(unsigned __int16 *)v8 << 8)) << 8 >> 8)
                                                       * 0.00000011920929)) & _xmm) >= 0.004999999888241291 )
          return 0;
        v8 += 3;
        ++v6;
      }
      break;
    default:
      if ( a4 == 3 )
      {
        while ( v6 < a2 )
        {
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*a1) & _xmm) >= 0.004999999888241291 )
            return 0;
          a1 = (float *)((char *)a1 + ((unsigned __int64)a3 >> 3));
          ++v6;
        }
      }
      else
      {
        while ( v6 < a2 )
        {
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(int *)a1 * 4.6566129e-10)) & _xmm) >= 0.004999999888241291 )
            return 0;
          a1 = (float *)((char *)a1 + ((unsigned __int64)a3 >> 3));
          ++v6;
        }
      }
      break;
  }
  return v5;
}
