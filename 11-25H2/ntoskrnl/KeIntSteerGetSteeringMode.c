/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x140201708
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140201794 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407A5B14 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     IntPartIsInterruptSteerable @ 0x140200E7C (IntPartIsInterruptSteerable.c)
 */

__int64 __fastcall KeIntSteerGetSteeringMode(bool a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int IsInterruptSteerable; // eax
  bool v8; // cl
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v5 = 0;
  if ( KiIntSteerEnabled && a3 )
  {
    v10 = 0;
    IsInterruptSteerable = IntPartIsInterruptSteerable(a5, &v10);
    v8 = v10;
    if ( IsInterruptSteerable < 0 )
      v8 = 0;
    if ( v8 )
    {
      if ( (KiInterruptControllerInfo & 1) != 0 && !a4 )
        return 1;
      if ( (KiInterruptControllerInfo & 2) != 0 )
      {
        if ( a4 == 1 )
          return 1;
      }
      else if ( a4 == 1 && (KiInterruptControllerInfo & 1) != 0 && (KiInterruptControllerInfo & 2) == 0 )
      {
        return 2;
      }
    }
  }
  return v5;
}
