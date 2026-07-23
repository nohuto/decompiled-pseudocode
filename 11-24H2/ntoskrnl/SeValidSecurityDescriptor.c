/*
 * XREFs of SeValidSecurityDescriptor @ 0x140835560
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1404AACB0 (RtlNormalizeSecurityDescriptor.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     WmipSDRegistryQueryRoutine @ 0x1408354E0 (WmipSDRegistryQueryRoutine.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1408370F0 (EtwpGetGuidSecurityDescriptor.c)
 *     PiSwValidateCreateData @ 0x1409F1994 (PiSwValidateCreateData.c)
 * Callees:
 *     Feature_2077227322__private_IsEnabledDeviceUsageNoInline @ 0x1406067EC (Feature_2077227322__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

BOOLEAN __stdcall SeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v4; // rbp
  char *v5; // r14
  char *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  ULONG v15; // edx

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( Length >= 0x14 && *(_BYTE *)SecurityDescriptor == 1 && *((__int16 *)SecurityDescriptor + 1) < 0 )
  {
    v7 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)v7;
      if ( ((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v7
        && (unsigned int)v7 <= Length
        && Length - (unsigned int)v7 >= 0xC
        && *((_BYTE *)SecurityDescriptor + v7) == 1 )
      {
        v9 = *((unsigned __int8 *)SecurityDescriptor + v7 + 1);
        if ( (unsigned __int8)v9 <= 0xFu && Length - (unsigned int)v7 >= 4 * v9 + 8 )
        {
          v10 = *((unsigned int *)SecurityDescriptor + 2);
          if ( !(_DWORD)v10
            || ((v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v10
            && (unsigned int)v10 <= Length
            && Length - (unsigned int)v10 >= 0xC
            && (v4 = (char *)SecurityDescriptor + v10, *((_BYTE *)SecurityDescriptor + v10) == 1)
            && (v11 = (unsigned __int8)v4[1], (unsigned __int8)v11 <= 0xFu)
            && Length - (unsigned int)v10 >= 4 * v11 + 8 )
          {
            v12 = *((unsigned int *)SecurityDescriptor + 4);
            if ( !(_DWORD)v12
              || ((v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v12
              && (unsigned int)v12 <= Length
              && Length - (unsigned int)v12 >= 8
              && (v5 = (char *)SecurityDescriptor + v12,
                  Length - (unsigned int)v12 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v12 + 2))
              && RtlValidAcl((PACL)((char *)SecurityDescriptor + v12)) )
            {
              v13 = *((unsigned int *)SecurityDescriptor + 3);
              if ( !(_DWORD)v13
                || ((v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v13
                && (unsigned int)v13 <= Length
                && Length - (unsigned int)v13 >= 8
                && (v6 = (char *)SecurityDescriptor + v13,
                    Length - (unsigned int)v13 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v13 + 2))
                && RtlValidAcl((PACL)((char *)SecurityDescriptor + v13)) )
              {
                if ( !(unsigned int)Feature_2077227322__private_IsEnabledDeviceUsageNoInline() )
                  return 1;
                v14 = *((unsigned __int8 *)SecurityDescriptor + v8 + 1);
                v15 = ((4 * v14 + 11) & 0xFFFFFFFC) + 20;
                if ( ((4 * v14 + 11) & 0xFFFFFFFC) < 0xFFFFFFEC )
                {
                  if ( v4 )
                  {
                    if ( v15 + ((4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC) < v15 )
                      return 0;
                    v15 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
                  }
                  if ( v5 )
                  {
                    if ( v15 + ((*((unsigned __int16 *)v5 + 1) + 3) & 0xFFFFFFFC) < v15 )
                      return 0;
                    v15 += (*((unsigned __int16 *)v5 + 1) + 3) & 0xFFFFFFFC;
                  }
                  if ( v6 )
                  {
                    if ( v15 + ((*((unsigned __int16 *)v6 + 1) + 3) & 0xFFFFFFFC) < v15 )
                      return 0;
                    v15 += (*((unsigned __int16 *)v6 + 1) + 3) & 0xFFFFFFFC;
                  }
                  if ( v15 <= Length )
                    return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
