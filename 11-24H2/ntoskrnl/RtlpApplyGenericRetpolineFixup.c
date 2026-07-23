/*
 * XREFs of RtlpApplyGenericRetpolineFixup @ 0x14044B280
 * Callers:
 *     RtlApplyImportRelocationToImage @ 0x1406A3BD4 (RtlApplyImportRelocationToImage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x1406A3C78 (RtlApplyIndirectRelocationToImage.c)
 *     RtlApplySwitchJumpRelocationToImage @ 0x1406A3D14 (RtlApplySwitchJumpRelocationToImage.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpApplyGenericRetpolineFixup(unsigned __int64 a1, unsigned int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  unsigned __int64 v6; // r11
  char *v7; // r9
  _BYTE *v8; // rdx

  v4 = a4;
  v5 = 0;
  v6 = a1 + a2;
  v7 = (char *)a3 - a4 - a1;
  v8 = (_BYTE *)(v4 + a1);
  do
  {
    if ( (unsigned __int64)v8 >= a1 )
    {
      if ( (unsigned __int64)v8 >= v6 )
        return v4;
      LODWORD(v4) = *a3;
      if ( _bittest((const int *)&v4, v5) )
      {
        LOBYTE(v4) = v8[(_QWORD)v7 + 2];
        *v8 = v4;
      }
    }
    ++v5;
    ++v8;
  }
  while ( v5 < 0xC );
  return v4;
}
