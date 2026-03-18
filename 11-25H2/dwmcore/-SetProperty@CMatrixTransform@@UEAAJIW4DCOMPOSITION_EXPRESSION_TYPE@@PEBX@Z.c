/*
 * XREFs of ?SetProperty@CMatrixTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802A9840
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixTransform::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  float *v11; // rbx
  unsigned int v12; // ebx

  if ( a3 != 18 )
    goto LABEL_18;
  v4 = *a4;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
LABEL_18:
              v12 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x61u, 0LL);
              return v12;
            }
            v10 = 45LL;
          }
          else
          {
            v10 = 44LL;
          }
        }
        else
        {
          v10 = 43LL;
        }
      }
      else
      {
        v10 = 42LL;
      }
    }
    else
    {
      v10 = 41LL;
    }
  }
  else
  {
    v10 = 40LL;
  }
  v11 = (float *)&a1[v10];
  if ( !&a1[v10] )
    goto LABEL_18;
  if ( *v11 != v4 )
  {
    *v11 = v4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v11 == 0LL ? 0x80070057 : 0;
}
