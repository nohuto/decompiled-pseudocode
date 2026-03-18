/*
 * XREFs of ?Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x18012B3B0
 * Callers:
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x18012B060 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CSpringAccelerator::Accelerate(CSpringAccelerator *this, struct IntegrationState *a2, float a3)
{
  return (float)(COERCE_FLOAT(*((_DWORD *)this + 6) ^ _xmm) * *((float *)a2 + 2))
       - (float)((float)(*((float *)a2 + 1) - *((float *)this + 9)) * *((float *)this + 5));
}
