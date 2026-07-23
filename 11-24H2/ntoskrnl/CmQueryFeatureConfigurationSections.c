/*
 * XREFs of CmQueryFeatureConfigurationSections @ 0x140A1A734
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1A8B0 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 */

__int64 __fastcall CmQueryFeatureConfigurationSections(
        __int128 *a1,
        int a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // ebx
  HANDLE *v13; // rdi
  __int64 v14; // rsi
  __int128 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h]
  __int128 v18; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v19[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-48h]

  v16 = 0LL;
  v17 = 0LL;
  memset_0(&v18, 0, 0x68uLL);
  if ( a2 == 32 )
  {
    v16 = *a1;
    v17 = a1[1];
    if ( a4 == 104 )
    {
      LOBYTE(v11) = PreviousMode;
      v12 = CmFcManagerQueryFeatureConfigurationSectionInformation(v10, &v16, &v18, v11);
      if ( v12 >= 0 )
      {
        *(_OWORD *)a3 = v18;
        *(_OWORD *)(a3 + 16) = v19[0];
        *(_OWORD *)(a3 + 32) = v19[1];
        *(_OWORD *)(a3 + 48) = v19[2];
        *(_OWORD *)(a3 + 64) = v19[3];
        *(_OWORD *)(a3 + 80) = v19[4];
        *(_QWORD *)(a3 + 96) = v20;
        *a5 = 104;
        memset_0(&v18, 0, 0x68uLL);
        v12 = 0;
      }
    }
    else
    {
      v12 = -1073741820;
      *a5 = 104;
    }
  }
  else
  {
    v12 = -1073741820;
  }
  v13 = (HANDLE *)v19;
  v14 = 4LL;
  do
  {
    if ( *v13 )
      ObCloseHandle(*v13, PreviousMode);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  return (unsigned int)v12;
}
