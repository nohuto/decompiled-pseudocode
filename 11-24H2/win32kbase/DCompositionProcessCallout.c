/*
 * XREFs of DCompositionProcessCallout @ 0x140073290
 * Callers:
 *     <none>
 * Callees:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400732D8 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x140073364 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DCompositionProcessCallout(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  void *v5; // rcx

  v2 = 0;
  if ( a2 )
  {
    return (unsigned int)DirectComposition::CProcessData::OnProcessCreation((struct _W32PROCESS *)a1);
  }
  else
  {
    v5 = *(void **)(a1 + 256);
    if ( v5 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v5, a2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
  }
  return v2;
}
