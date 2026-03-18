/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1801FB648
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1801FB5DC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  __int64 v4; // r11
  __int64 i; // r8
  __int64 v8; // rcx

  v2 = *((_DWORD *)this + 1476);
  v3 = 0;
  v4 = *((_QWORD *)this + 735);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct IAnimationResource **)(v4 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v2 )
  {
    for ( ; (unsigned int)i < v2 - 1; v2 = *((_DWORD *)this + 1476) )
    {
      v8 = (unsigned int)i;
      LODWORD(i) = i + 1;
      *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8LL * (unsigned int)i);
    }
    *((_DWORD *)this + 1476) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x708u, 0LL);
  }
  return v3;
}
