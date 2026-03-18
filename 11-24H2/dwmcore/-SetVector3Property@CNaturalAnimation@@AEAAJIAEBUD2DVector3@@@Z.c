/*
 * XREFs of ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x180217894
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180217800 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector3Property(CNaturalAnimation *this, int a2, const struct D2DVector3 *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v7; // ecx

  v3 = 0;
  switch ( a2 )
  {
    case '*':
      *((_QWORD *)this + 40) = *(_QWORD *)a3;
      v5 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 572) |= 0x10u;
      *((_DWORD *)this + 82) = v5;
      break;
    case '&':
      *((_QWORD *)this + 43) = *(_QWORD *)a3;
      v7 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 572) |= 0x20u;
      *((_DWORD *)this + 88) = v7;
      break;
    case '.':
      *(_QWORD *)((char *)this + 356) = *(_QWORD *)a3;
      *((_DWORD *)this + 91) = *((_DWORD *)a3 + 2);
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x43Au, 0LL);
      break;
  }
  return v3;
}
