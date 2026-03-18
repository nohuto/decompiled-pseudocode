/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x180207D80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  char v4; // al

  v1 = 0LL;
  if ( a1 )
  {
    v4 = a1[456];
    v2 = 0;
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 284) = 0LL;
      v4 &= ~1u;
      *((_DWORD *)a1 + 73) = 0;
      a1[456] = v4;
    }
    if ( (v4 & 2) != 0 )
    {
      v1 = 1065353216LL;
      *((_DWORD *)a1 + 77) = 1065353216;
      *((_DWORD *)a1 + 78) = 1065353216;
      *((_DWORD *)a1 + 79) = 1065353216;
      a1[456] = v4 & 0xFD;
    }
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, v1);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3D1u, 0LL);
  }
  return v2;
}
