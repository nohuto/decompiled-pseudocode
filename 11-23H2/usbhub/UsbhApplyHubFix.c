/*
 * XREFs of UsbhApplyHubFix @ 0x1C0051430
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C005182C (UsbhCheckHubErrata.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhApplyHubFix(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 6;
  if ( v2 )
  {
    v3 = v2 - 2;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 4 )
          a1[641] |= 2u;
      }
      else
      {
        a1[642] |= 2u;
      }
    }
    else
    {
      a1[642] |= 1u;
    }
  }
  else
  {
    a1[640] |= 0x10000000u;
  }
}
