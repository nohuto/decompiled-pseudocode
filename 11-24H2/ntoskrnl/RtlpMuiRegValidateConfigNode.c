/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x1406A3538
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x14082D8F0 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082C3D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14082CB9C (RtlpMuiRegGetInstalledLanguageIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  int InstalledLanguageIndex; // ebx
  const signed __int16 *v7; // rdi
  __int16 v8; // si
  __int16 v9; // bp
  char v10; // r15
  __int16 v11; // r13
  __int16 v12; // r12
  int v13; // edx
  int v14; // r9d
  int v15; // r8d
  __int16 v16; // r8
  const signed __int16 *v18; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+A0h] [rbp+8h]
  __int16 v20; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v21; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int16 v22; // [rsp+B8h] [rbp+20h]

  v19 = a1;
  v3 = a2[1];
  v20 = 0;
  v5 = *a2;
  v21 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3 >> 14, v5, &v20);
  if ( InstalledLanguageIndex >= 0 )
  {
    v7 = (const signed __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v20);
    if ( _bittest16(v7, 0xCu) )
      return (unsigned int)-1073741772;
    v8 = 0;
    v9 = 0;
LABEL_5:
    if ( v9 < 6 )
    {
      v10 = (a2[1] >> v9) & 3;
      if ( v10 )
      {
        if ( v7 )
        {
          v11 = 0;
          v12 = 0;
          v13 = a2[v8 + 3];
          v22 = a2[v8 + 3];
          while ( v12 < 8 )
          {
            v14 = (unsigned __int16)((unsigned __int16)v7[4] >> v12);
            LOBYTE(v14) = v14 & 3;
            v18 = 0LL;
            v15 = (unsigned __int16)v13;
            LOBYTE(v13) = v10;
            if ( (unsigned __int8)RtlpMuiRegConfigMatchesInstalled(
                                    v19,
                                    v13,
                                    v15,
                                    v14,
                                    v7[v11 + 6],
                                    (__int64)&v18,
                                    (__int64)&v21)
              && (!v18 || !_bittest16(v18, 0xCu))
              && ((*(_BYTE *)v7 & 4) == 0 || v18) )
            {
              v16 = v21;
              v7 = v18;
              if ( v21 != -1 )
              {
                a2[1] = (2 << (2 * v8)) | a2[1] & ~(3 << (2 * v8));
                a2[v8 + 3] = v16;
              }
              ++v8;
              v9 += 2;
              goto LABEL_5;
            }
            v13 = v22;
            ++v11;
            v12 += 2;
          }
        }
        return (unsigned int)-1073741772;
      }
      if ( !v8 )
        return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)InstalledLanguageIndex;
}
