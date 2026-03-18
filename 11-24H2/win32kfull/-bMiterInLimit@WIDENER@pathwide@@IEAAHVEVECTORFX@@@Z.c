/*
 * XREFs of ?bMiterInLimit@WIDENER@pathwide@@IEAAHVEVECTORFX@@@Z @ 0x1400E8E30
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall pathwide::WIDENER::bMiterInLimit(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  EXFORMOBJ::bXform((EXFORMOBJ *)(a1 + 808), (const struct _VECTORFX *)&v4, (struct _VECTORL *)&v4, 1uLL);
  return *(float *)(a1 + 1288) >= (float)((float)((float)SHIDWORD(v4) * (float)SHIDWORD(v4))
                                        + (float)((float)(int)v4 * (float)(int)v4));
}
