/*
 * XREFs of NvmeProtocolSpecificRequestGetData @ 0x140088608
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x140088490 (NvmeProcessQueryProtocolSpecificProperty.c)
 *     NvmeProcessSetProtocolSpecificProperty @ 0x140088568 (NvmeProcessSetProtocolSpecificProperty.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14012AD40 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x14012B8A0 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoCompletion @ 0x14012CC50 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeProtocolSpecificRequestGetData(__int64 a1, char a2, _QWORD *a3, char *a4)
{
  __int64 v4; // rax
  unsigned int v8; // r10d
  int v9; // eax
  char v10; // r9
  char v11; // bl
  __int64 *v12; // rdx
  _QWORD *v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  bool v18; // cf
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 184);
  *a4 = 0;
  *a3 = 0LL;
  v8 = *(_DWORD *)(v4 + 16);
  if ( v8 < 8 )
    return 3221225485LL;
  v9 = *(_DWORD *)(v4 + 24);
  v10 = 1;
  if ( v9 == 2954240 )
  {
    v11 = 1;
  }
  else
  {
    if ( v9 != 2987004 )
      return 3221225485LL;
    v11 = 0;
  }
  v12 = *(__int64 **)(a1 + 24);
  if ( a2 )
  {
    v13 = *(_QWORD **)(a1 + 24);
    v14 = (__int64 *)((char *)v12 + v8 - 8);
    v15 = *v14;
  }
  else
  {
    v15 = *v12;
    v13 = v12 + 1;
    v14 = *(__int64 **)(a1 + 24);
  }
  if ( !HIDWORD(*v14) )
  {
    v16 = v15 - 49;
    if ( v16 && (v17 = v16 - 1) != 0 )
    {
      if ( (unsigned int)(v17 - 17) <= 1 && v8 >= 0x50 )
      {
        ++v13;
LABEL_20:
        *a3 = v13;
        result = 0LL;
        *a4 = v10;
        return result;
      }
    }
    else
    {
      if ( v11 )
        v18 = v8 < 0x30;
      else
        v18 = v8 < 0x48;
      if ( !v18 )
      {
        v10 = 0;
        goto LABEL_20;
      }
    }
  }
  return 3221225485LL;
}
