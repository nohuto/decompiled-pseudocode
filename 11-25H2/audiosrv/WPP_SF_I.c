/*
 * XREFs of WPP_SF_I @ 0x1800EAD3C
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180089BC0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_I(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+38h] [rbp-10h]
  __int64 v5; // [rsp+40h] [rbp-8h]
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
           28LL,
           (__int64 *)va,
           8LL,
           0LL,
           v4,
           v5);
}
