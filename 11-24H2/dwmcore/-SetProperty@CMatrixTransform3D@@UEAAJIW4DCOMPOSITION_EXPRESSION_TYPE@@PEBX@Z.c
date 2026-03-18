/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18029FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  unsigned int v5; // edx
  float *v6; // rbx
  unsigned int v7; // ebx

  if ( a3 == 18
    && (v4 = *a4, v5 = a2 - 1, v5 <= 0xF)
    && (v6 = (float *)&a1[4 * ((unsigned __int64)v5 >> 2) + 40 + (v5 & 3)]) != 0LL )
  {
    if ( *v6 != v4 )
    {
      *v6 = v4;
      CResource::NotifyOnChanged(a1, 0LL, 0LL);
    }
    return v6 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x44u, 0LL);
  }
  return v7;
}
