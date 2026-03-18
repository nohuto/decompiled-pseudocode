/*
 * XREFs of ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005EC0C
 * Callers:
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005ECA4 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x14009AF4C (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CCompositionBuffer::QueryStats(CCompositionBuffer *this, struct CSM_BUFFER_STATISTICS *a2)
{
  unsigned int v4; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  char v6; // cl

  v4 = -1073741823;
  IsEnabledDeviceUsageNoInline = Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline();
  v6 = *((_BYTE *)this + 42);
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( !v6 )
      return v4;
LABEL_5:
    v4 = 0;
    *(_OWORD *)a2 = *((_OWORD *)this + 12);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 13);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 14);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 15);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 16);
    return v4;
  }
  if ( v6 )
    goto LABEL_5;
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 32);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 66);
  return v4;
}
