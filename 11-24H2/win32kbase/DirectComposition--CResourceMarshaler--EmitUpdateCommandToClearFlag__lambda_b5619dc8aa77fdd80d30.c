/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_b5619dc8aa77fdd80d3011396791c4ac___ @ 0x1402353B4
 * Callers:
 *     ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14012F250 (-EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4ac___ @ 0x140235288 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4a.c)
 */

char DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_b5619dc8aa77fdd80d3011396791c4ac___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        ...)
{
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (*(_DWORD *)(a1 + 16) & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4ac___(
         a1,
         a2,
         (__int64)va) )
  {
    *(_DWORD *)(a1 + 16) &= ~0x80u;
    return 1;
  }
  return 0;
}
