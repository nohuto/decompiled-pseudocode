/*
 * XREFs of ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028DF0
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180027C0C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180049468 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FA64C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x180029FCC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002A100 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioIdentifier::UnescapeIdentifierString(__int64 *a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // ecx
  __int16 v8; // cx
  __int64 v9; // r15

  result = *a1;
  v3 = 0;
  v4 = *(_DWORD *)(*a1 - 16);
  if ( v4 > 0 )
  {
    v5 = 1LL;
    v6 = 0LL;
    do
    {
      if ( v3 < 0 || (result = *a1, v7 = *(_DWORD *)(*a1 - 16), v3 > v7) )
LABEL_19:
        ATL::AtlThrowImpl(-2147024809);
      if ( *(_WORD *)(v6 + result) == 37 )
      {
        if ( v5 < 0 || v3 >= v7 )
          goto LABEL_19;
        v8 = *(_WORD *)(result + v6 + 2);
        if ( v8 == 37 )
        {
          result = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
                     a1,
                     (unsigned int)v3);
LABEL_18:
          --v4;
          goto LABEL_6;
        }
        if ( v8 == 98 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
            a1,
            (unsigned int)v3);
          v9 = *(int *)(*a1 - 16);
          if ( v3 >= (int)v9 )
            goto LABEL_19;
          if ( *(int *)(*a1 - 8) > 1 )
            ATL::CSimpleStringT<unsigned short,0>::Fork(a1, (unsigned int)v9);
          *(_WORD *)(v6 + *a1) = 124;
          if ( (int)v9 < 0 || (int)v9 > *(_DWORD *)(*a1 - 12) )
            goto LABEL_19;
          *(_DWORD *)(*a1 - 16) = v9;
          result = *a1;
          *(_WORD *)(*a1 + 2 * v9) = 0;
          goto LABEL_18;
        }
      }
LABEL_6:
      ++v3;
      ++v5;
      v6 += 2LL;
    }
    while ( v3 < v4 );
  }
  return result;
}
