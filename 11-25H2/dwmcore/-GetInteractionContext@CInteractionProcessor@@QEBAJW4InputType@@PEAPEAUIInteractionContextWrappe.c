/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F1EE0
 * Callers:
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180132D90 (-GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x1801F03E0 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x1801F0474 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x1801F1954 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x1801F1A9C (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180232180 (-GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F114C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801F1FB8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(CInteractionProcessor *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // edx
  int v9; // edx
  __int64 (__fastcall ***v10)(_QWORD); // rax

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1);
      *a3 = *(_QWORD *)a1;
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( !*((_QWORD *)a1 + 20) )
      return (unsigned int)-2147019873;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 20);
    v10 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 20);
LABEL_17:
    *a3 = v10;
    return v3;
  }
  v9 = v7 - 1;
  if ( !v9 )
  {
    if ( !CInteractionProcessor::AllowPenGestureDetection(a1) )
      return (unsigned int)-2147467259;
    if ( !*((_QWORD *)a1 + 40) )
      return (unsigned int)-2147019873;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 40);
    v10 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 40);
    goto LABEL_17;
  }
  if ( v9 != 2 )
    return v3;
  if ( *((_QWORD *)a1 + 60) )
  {
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 60);
    v10 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 60);
    goto LABEL_17;
  }
  return (unsigned int)-2147019873;
}
