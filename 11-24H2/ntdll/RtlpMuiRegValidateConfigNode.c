/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x1800DCE8C
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180015070 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800DD070 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  int InstalledLanguageIndex; // ebx
  _WORD *v7; // rdi
  __int16 v8; // si
  __int16 v9; // bp
  char v10; // r15
  __int16 v11; // r13
  __int16 v12; // r12
  int v13; // edx
  int v14; // r9d
  int v15; // r8d
  __int16 v16; // r8
  int v18; // [rsp+90h] [rbp+8h]
  unsigned __int16 v19; // [rsp+98h] [rbp+10h] BYREF
  __int16 v20; // [rsp+A0h] [rbp+18h] BYREF
  _WORD *v21; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a1;
  v3 = a2[1];
  v19 = 0;
  v5 = *a2;
  v20 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3 >> 14, v5, &v19);
  if ( InstalledLanguageIndex >= 0 )
  {
    v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * (__int16)v19);
    if ( (*v7 & 0x1000) != 0 )
      return (unsigned int)-1073741772;
    v8 = 0;
    v9 = 0;
LABEL_4:
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
          v19 = a2[v8 + 3];
          while ( v12 < 8 )
          {
            v14 = (unsigned __int16)(v7[4] >> v12);
            LOBYTE(v14) = v14 & 3;
            v21 = 0LL;
            v15 = (unsigned __int16)v13;
            LOBYTE(v13) = v10;
            if ( (unsigned __int8)RtlpMuiRegConfigMatchesInstalled(
                                    v18,
                                    v13,
                                    v15,
                                    v14,
                                    v7[v11 + 6],
                                    (__int64)&v21,
                                    (__int64)&v20)
              && (!v21 || (*v21 & 0x1000) == 0)
              && ((*(_BYTE *)v7 & 4) == 0 || v21) )
            {
              v16 = v20;
              v7 = v21;
              if ( v20 != -1 )
              {
                a2[1] = (2 << (2 * v8)) | a2[1] & ~(3 << (2 * v8));
                a2[v8 + 3] = v16;
              }
              ++v8;
              v9 += 2;
              goto LABEL_4;
            }
            v13 = v19;
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
