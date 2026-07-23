/*
 * XREFs of KiIntSteerEnable @ 0x1402B3D44
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerEnable(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r9

  v2 = a1;
  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 168);
  if ( !v4 )
    return (unsigned int)-1073741637;
  if ( !*(_BYTE *)(v4 + 56) )
    return 0;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = *(_DWORD *)(v5 + 128);
  if ( v6 == 2 )
  {
    if ( !a2 || (v8 = *(_QWORD *)(v3 + 272)) == 0 )
      __fastfail(5u);
    *(_BYTE *)(v8 + 16) = 1;
  }
  else if ( v6 != 1 )
  {
    return (unsigned int)-1073741637;
  }
  v7 = 0;
  *(_BYTE *)(v5 + 132) = 1;
  _InterlockedExchange(&KiIntTrackRootEnabled, 1);
  if ( a2 )
  {
    v9 = a2;
    do
    {
      _InterlockedOr((volatile signed __int32 *)(*v2++ + 104LL), 4u);
      --v9;
    }
    while ( v9 );
  }
  return v7;
}
