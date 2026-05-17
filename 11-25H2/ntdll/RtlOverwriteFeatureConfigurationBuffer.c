/*
 * XREFs of RtlOverwriteFeatureConfigurationBuffer @ 0x1801487A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemInformation @ 0x180166990 (ZwSetSystemInformation.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1801732A8 (RtlpFcValidateFeatureConfigurationBuffer.c)
 */

__int64 __fastcall RtlOverwriteFeatureConfigurationBuffer(_QWORD *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-18h]

  v4 = a4;
  v12 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  result = RtlpFcValidateFeatureConfigurationBuffer(a3, a4);
  if ( (int)result >= 0 )
  {
    LODWORD(v9) = 1;
    LODWORD(v10) = a2;
    if ( a1 )
      *((_QWORD *)&v9 + 1) = *a1;
    *((_QWORD *)&v10 + 1) = v4;
    *(_QWORD *)&v11 = a3;
    result = ZwSetSystemInformation(210LL, &v9, 40LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
