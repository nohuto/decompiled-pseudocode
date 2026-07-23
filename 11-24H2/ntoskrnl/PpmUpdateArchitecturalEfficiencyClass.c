/*
 * XREFs of PpmUpdateArchitecturalEfficiencyClass @ 0x140C33AC0
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 PpmUpdateArchitecturalEfficiencyClass()
{
  unsigned int v0; // edi
  char v1; // bl
  unsigned __int8 v2; // bp
  unsigned int v3; // r14d
  unsigned __int8 v4; // si
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned int i; // ebp
  __int64 Prcb; // rax
  __int64 result; // rax
  unsigned int v11; // esi
  char v12; // bl

  v0 = KeNumberProcessors_0;
  v1 = 0;
  if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
  {
    v2 = 0;
    v3 = 0;
    v4 = -1;
    if ( !(_DWORD)KeNumberProcessors_0 )
      goto LABEL_9;
    do
    {
      v5 = *(_BYTE *)(KeGetPrcb(v3) + 35405);
      v6 = v2;
      if ( v2 <= v5 )
        v6 = v5;
      v2 = v6;
      v7 = v4;
      if ( v4 >= v5 )
        v7 = v5;
      ++v3;
      v4 = v7;
    }
    while ( v3 < v0 );
    if ( v2 != v7 )
    {
LABEL_9:
      for ( i = 0; i < v0; *(_BYTE *)(Prcb + 35336) = *(_BYTE *)(Prcb + 35405) != v4 )
      {
        Prcb = KeGetPrcb(i);
        if ( *(_BYTE *)(Prcb + 35405) != v4 )
          v1 = 1;
        ++i;
      }
    }
  }
  result = (unsigned int)PpmHeteroMultiCoreClassesRegValue;
  if ( PpmHeteroMultiCoreClassesRegValue == -1 )
    result = (unsigned __int8)v1 >= 2u;
  v11 = 0;
  for ( PpmHeteroMultiCoreClassesEnabled = result; v11 < v0; ++v11 )
  {
    result = KeGetPrcb(v11);
    if ( *(_BYTE *)(result + 35336) && !PpmHeteroMultiCoreClassesEnabled )
      *(_BYTE *)(result + 35336) = 1;
  }
  v12 = v1 + 1;
  PpmMaxCoreClasses = v12;
  if ( !PpmHeteroMultiCoreClassesEnabled && (unsigned __int8)v12 >= 2u )
    PpmMaxCoreClasses = 2;
  return result;
}
