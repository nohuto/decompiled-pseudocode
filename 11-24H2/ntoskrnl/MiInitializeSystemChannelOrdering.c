/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x140C59D7C
 * Callers:
 *     MiInitializeChannelOrdering @ 0x1407F7428 (MiInitializeChannelOrdering.c)
 * Callees:
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 */

unsigned __int64 __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char *i; // rcx
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  _BYTE *v10; // r9
  unsigned __int8 v11; // r8
  _BYTE *v12; // r9
  unsigned __int8 v13; // r8
  _BYTE *v14; // r9

  result = (unsigned __int64)MxBootFreeDescriptor;
  v4 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  v5 = 7LL * a2;
  if ( MxBootFreeDescriptor[v5 + 1] )
  {
    result = (unsigned __int8)MiPageToChannel(MxBootFreeDescriptor[v5]);
    *(_BYTE *)((unsigned __int8)result + v4 + 15237) = 2;
  }
  for ( i = (char *)qword_140E2DC68; *(_QWORD *)i != -1LL; i += 16 )
  {
    result = *((unsigned __int16 *)i + 5);
    if ( (_DWORD)result == a2 )
    {
      result = (unsigned __int8)i[12];
      if ( (unsigned __int8)result < (unsigned __int8)MmNumberOfChannels )
      {
        if ( i[14] )
        {
          if ( *(_BYTE *)(result + v4 + 15237) != 2 )
            *(_BYTE *)(result + v4 + 15237) = 1;
        }
        else
        {
          *(_BYTE *)(result + v4 + 15237) = 2;
        }
      }
    }
  }
  v7 = MmNumberOfChannels;
  v8 = 0LL;
  v9 = 0;
  if ( MmNumberOfChannels )
  {
    v10 = (_BYTE *)(v4 + 15237);
    do
    {
      if ( *v10 == 2 )
      {
        *(_BYTE *)(v8 + v4 + 15233) = v9;
        *(_BYTE *)(v8 + v4 + 15235) = v9;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
  }
  v11 = 0;
  if ( v7 )
  {
    v12 = (_BYTE *)(v4 + 15237);
    do
    {
      if ( *v12 == 1 )
      {
        *(_BYTE *)(v8 + v4 + 15233) = v11;
        *(_BYTE *)(v8 + v4 + 15235) = v11;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v11;
      ++v12;
    }
    while ( v11 < v7 );
  }
  v13 = 0;
  if ( v7 )
  {
    v14 = (_BYTE *)(v4 + 15237);
    do
    {
      if ( !*v14 )
      {
        *(_BYTE *)(v8 + v4 + 15233) = v13;
        *(_BYTE *)(v8 + v4 + 15235) = v13;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v13;
      ++v14;
    }
    while ( v13 < v7 );
  }
  return result;
}
