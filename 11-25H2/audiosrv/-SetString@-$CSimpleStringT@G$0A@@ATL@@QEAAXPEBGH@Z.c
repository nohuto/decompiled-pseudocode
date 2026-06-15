/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001A840
 * Callers:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001AAE0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C004 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180028670 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A248 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  char *v9; // rcx
  __int64 v10; // rsi

  v3 = (int)a3;
  v4 = a2;
  if ( !(_DWORD)a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  if ( !a2 )
    goto LABEL_3;
  v7 = (__int64)&a2[-*a1] >> 1;
  v8 = *(unsigned int *)(*a1 - 16);
  if ( (int)((*(_DWORD *)(*a1 - 12) - a3) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)a3);
  v9 = (char *)*a1;
  v10 = 2 * v3;
  if ( v7 > v8 )
  {
    if ( !v10 )
      goto LABEL_6;
    if ( v9 )
    {
      memcpy_0(v9, v4, 2 * v3);
      goto LABEL_6;
    }
    goto LABEL_14;
  }
  a2 = &v9[2 * v7];
  if ( v10 )
  {
    if ( !v9 || !a2 )
    {
LABEL_14:
      *(_DWORD *)_o__errno(v9, a2, a3) = 22;
      invalid_parameter_noinfo();
      goto LABEL_6;
    }
    memmove_0(v9, a2, 2 * v3);
  }
LABEL_6:
  if ( (int)v3 < 0 || (int)v3 > *(_DWORD *)(*a1 - 12) )
LABEL_3:
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = v3;
  result = *a1;
  *(_WORD *)(v10 + *a1) = 0;
  return result;
}
