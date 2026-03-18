/*
 * XREFs of ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1402F27D0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 */

__int64 __fastcall UserTextOutWInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  return GreExtTextOutW(a1, a2, a3, 0, 0LL, (__int64)a4, a5);
}
