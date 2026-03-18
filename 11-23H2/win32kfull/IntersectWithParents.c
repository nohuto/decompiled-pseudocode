/*
 * XREFs of IntersectWithParents @ 0x1C0063940
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000DF2C (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0063518 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxGetUpdateRgn @ 0x1C00635B8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C00637FC (xxxGetUpdateRect.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C0051224 (PhysicalToLogicalInPlaceRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 i; // rbx
  __int64 v5; // rcx
  char v6; // al
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) == 0 )
  {
    for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
    {
      v5 = *(_QWORD *)(i + 40);
      v6 = *(_BYTE *)(v5 + 31);
      if ( (v6 & 0x10) == 0 )
        return 0LL;
      if ( (v6 & 0x20) != 0 )
        return 0LL;
      *(_OWORD *)v8 = *(_OWORD *)(v5 + 104);
      PhysicalToLogicalInPlaceRect(v3, v8);
      if ( !(unsigned int)IntersectRect(a2, a2, v8) )
        return 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 27LL) & 0x20) != 0 )
        return 1LL;
      v3 = i;
    }
  }
  return 1LL;
}
