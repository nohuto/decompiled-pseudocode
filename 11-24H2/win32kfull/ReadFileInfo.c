/*
 * XREFs of ReadFileInfo @ 0x1400B75D0
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1400B735C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadFileInfo(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= a2 )
      return 1LL;
    v5 = *(_QWORD *)(a1 + 8 * v4);
    v8 = 0LL;
    if ( !(unsigned int)Win32FileInfo(*(_QWORD *)(v5 + 80), v5, &v8) )
      break;
    v6 = *(_QWORD *)(a1 + 8 * v4);
    v4 = (unsigned int)(v4 + 1);
    *(_DWORD *)(v6 + 24) = v8;
  }
  return 0LL;
}
