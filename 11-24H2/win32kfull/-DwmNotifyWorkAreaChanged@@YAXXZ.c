/*
 * XREFs of ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x1402ADFDC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14020A840 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DwmNotifyWorkAreaChanged(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+48h] [rbp-10h]

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  if ( v2 )
  {
    v5 = 1073741879;
    v4 = 0LL;
    memset(v3, 0, sizeof(v3));
    LODWORD(v3[0]) = 2883588;
    WORD2(v3[0]) = 0x8000;
    LpcRequestPort(v2, v3);
    ObfDereferenceObject(v2);
  }
}
