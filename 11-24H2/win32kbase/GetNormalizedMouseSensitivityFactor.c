/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1400BB04C
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BAA98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1402204DC (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x14022051C (-GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // eax
  signed int v6; // r8d

  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 16368);
  LODWORD(v3) = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivityFactor((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v2 + 104));
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v2 + 104));
  if ( a1 )
  {
    v4 = *(unsigned __int16 *)(a1 + 20);
    if ( (unsigned int)v4 > 0x60 )
    {
      v5 = -(int)v3;
      v6 = ((int)v3 >> 31) & 0xFFFFFFFE;
      if ( (v3 & 0x80000000) == 0LL )
        v5 = v3;
      v3 = (v4 * v5 + 48) / 96;
      if ( v3 > 0x7FFFFFFF )
      {
        LODWORD(v3) = 0x80000000;
        if ( v6 > -1 )
          LODWORD(v3) = 0x7FFFFFFF;
      }
      else if ( v6 <= -1 )
      {
        LODWORD(v3) = (v4 * v5 + 48) / -96;
      }
    }
  }
  return (unsigned int)v3;
}
