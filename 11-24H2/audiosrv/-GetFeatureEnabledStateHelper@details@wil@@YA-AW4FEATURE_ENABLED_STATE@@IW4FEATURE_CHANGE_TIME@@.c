/*
 * XREFs of ?GetFeatureEnabledStateHelper@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800A8FC0
 * Callers:
 *     <none>
 * Callees:
 *     wil_HasFeatureTestState @ 0x1800AA974 (wil_HasFeatureTestState.c)
 */

enum FEATURE_ENABLED_STATE __fastcall wil::details::GetFeatureEnabledStateHelper(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  UINT32 v4; // ecx
  _DWORD *v5; // r8
  FEATURE_CHANGE_TIME v6; // r9d
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  if ( (unsigned int)wil_HasFeatureTestState(this, &v8, a3, a2) )
  {
    *v5 = 0;
    return v8;
  }
  else
  {
    *v5 = 1;
    return GetFeatureEnabledState(v4, v6);
  }
}
