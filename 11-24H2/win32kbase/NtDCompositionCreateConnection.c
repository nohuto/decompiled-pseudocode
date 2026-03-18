/*
 * XREFs of NtDCompositionCreateConnection @ 0x140223030
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224048 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224304 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionCreateConnection(int a1, void *a2, void *a3)
{
  signed int v4; // ebx
  struct HDCOMPOSITIONCONNECTION__ *Src; // [rsp+40h] [rbp+18h] BYREF

  Src = 0LL;
  v4 = a3 == 0LL ? 0xC000000D : 0;
  if ( a3 )
    v4 = DirectComposition::CConnection::Create(a1 != 0, a2, &Src);
  if ( v4 >= 0 )
    RtlCopyToUser(a3, &Src, 8uLL);
  return (unsigned int)v4;
}
