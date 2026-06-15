/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18001A1B0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180017A90 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800187A0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180027C0C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FA64C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2, __int64 a3)
{
  const unsigned __int16 *v3; // rdi
  unsigned int v5; // r15d
  __int64 v6; // rbx
  __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 *v12; // rbp
  _DWORD *v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  ATL::CAtlException *v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp+8h]

  v3 = a2;
  v5 = 0;
  if ( !a2 )
    goto LABEL_5;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !(_DWORD)v6 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(this);
    goto LABEL_10;
  }
  v10 = *(unsigned int *)(*(_QWORD *)this - 16LL);
  v11 = ((__int64)a2 - *(_QWORD *)this) >> 1;
  if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v6)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v6);
  v8 = *(char **)this;
  v9 = 2LL * (int)v6;
  if ( v11 > v10 )
  {
    if ( !v9 )
      goto LABEL_7;
    if ( v8 )
    {
      memcpy_0(v8, v3, 2LL * (int)v6);
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  a2 = (const unsigned __int16 *)&v8[2 * v11];
  if ( v9 )
  {
    if ( !v8 || !a2 )
    {
LABEL_14:
      *(_DWORD *)_o__errno(v8, a2, a3) = 22;
      invalid_parameter_noinfo();
      goto LABEL_7;
    }
    memmove_0(v8, a2, 2LL * (int)v6);
  }
LABEL_7:
  if ( (int)v6 < 0 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( (int)v6 <= *(_DWORD *)(*(_QWORD *)this - 12LL) )
    {
      *(_DWORD *)(*(_QWORD *)this - 16LL) = v6;
      *(_WORD *)(v9 + *(_QWORD *)this) = 0;
      goto LABEL_10;
    }
LABEL_29:
    try
    {
      ATL::AtlThrowImpl(-2147024809);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v14 = &v15;
      v12 = v14;
      v13 = (_DWORD *)v14[4];
      if ( *v13 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v12 + 24) = *v13;
      v5 = v17;
      if ( v17 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v5);
LABEL_10:
      result = v5;
    }
  }
}
