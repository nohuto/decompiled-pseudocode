/*
 * XREFs of ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180057C74
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180056D54 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DXGIOutputInfo::Validate(DXGIOutputInfo *this)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v1 = (_WORD *)((char *)this + 224);
  if ( this == (DXGIOutputInfo *)-224LL )
    goto LABEL_11;
  v2 = 32LL;
  do
  {
    if ( !*v1 )
      break;
    ++v1;
    --v2;
  }
  while ( v2 );
  if ( !v2 )
  {
LABEL_11:
    v5 = 62;
LABEL_12:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, v5, 0LL);
    return v3;
  }
  v3 = ((int)(v2 == 0 ? 0x80070057 : 0) >> 31) & 0x80070057;
  if ( ((2 * (32 - v2)) & (unsigned __int64)-(__int64)(v2 != 0)) < 2 )
  {
    v5 = 67;
    goto LABEL_12;
  }
  if ( (*((_BYTE *)this + 220) & 8) != 0 && !*((_QWORD *)this + 13) )
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003304442, 0x4Cu, 0LL);
  }
  return v3;
}
