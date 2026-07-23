/*
 * XREFs of PopDirectedDripsInitializeDeviceTree @ 0x140A35D00
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     <none>
 */

_QWORD *PopDirectedDripsInitializeDeviceTree()
{
  volatile signed __int32 *v0; // rdx
  volatile signed __int32 *i; // rax
  volatile signed __int32 *v2; // rax
  _QWORD *result; // rax
  int v4; // eax
  _QWORD *v5; // rcx
  char v6; // r10
  _DWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *j; // rcx
  __int64 v11; // r9

  v0 = (volatile signed __int32 *)IopRootDeviceNode;
  for ( i = (volatile signed __int32 *)*((_QWORD *)IopRootDeviceNode + 1);
        i;
        i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
  {
    v0 = i;
  }
  while ( 1 )
  {
    result = IopRootDeviceNode;
    if ( v0 == IopRootDeviceNode )
      break;
    _InterlockedAnd(v0 + 74, 0xFFFFFEFF);
    *((_QWORD *)v0 + 92) = v0 + 182;
    *((_QWORD *)v0 + 91) = v0 + 182;
    *((_QWORD *)v0 + 94) = v0 + 186;
    *((_QWORD *)v0 + 93) = v0 + 186;
    v4 = *((_DWORD *)v0 + 190);
    *((_DWORD *)v0 + 191) = 0;
    *((_DWORD *)v0 + 190) = v4 & 0xFFF0FFFF;
    v2 = *(volatile signed __int32 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = (volatile signed __int32 *)*((_QWORD *)v2 + 1);
      }
      while ( v2 );
    }
    else
    {
      v0 = (volatile signed __int32 *)*((_QWORD *)v0 + 2);
    }
  }
  do
  {
    v5 = (_QWORD *)result[1];
    v6 = 0;
    while ( v5 )
    {
      result = v5;
      v5 = (_QWORD *)v5[1];
    }
    v7 = result;
    if ( result == IopRootDeviceNode )
      break;
    do
    {
      if ( v7[192] )
        v7[190] |= 0x80000u;
      if ( (v7[190] & 0x80000) != 0 )
      {
        v9 = *((_QWORD *)v7 + 2);
        if ( v9 )
          *(_DWORD *)(*((_QWORD *)v7 + 2) + 760LL) = *(_DWORD *)(v9 + 760) | 0x80000;
        for ( j = (_QWORD *)*((_QWORD *)v7 + 24); j != (_QWORD *)(v7 + 48); j = (_QWORD *)*j )
        {
          v11 = j[5];
          if ( (*(_DWORD *)(v11 + 600) & 0x80000) == 0 )
          {
            v6 = 1;
            *(_DWORD *)(v11 + 600) |= 0x80000u;
          }
        }
      }
      v8 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( v8 );
      }
      else
      {
        v7 = (_DWORD *)*((_QWORD *)v7 + 2);
      }
      result = IopRootDeviceNode;
    }
    while ( v7 != IopRootDeviceNode );
  }
  while ( v6 );
  return result;
}
