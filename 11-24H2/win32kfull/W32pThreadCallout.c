/*
 * XREFs of W32pThreadCallout @ 0x140105BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140105CF0 (GreIsCurrentProcessSystemCritical.c)
 *     FreeW32Thread @ 0x140105DBC (FreeW32Thread.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int W32ThreadImpl; // ebp

  if ( (unsigned int)GreIsCurrentProcessSystemCritical() )
  {
    W32ThreadImpl = 0;
    if ( !a2 )
      W32ThreadImpl = AllocateW32ThreadImpl(a1);
    v4 = GdiThreadCallout(a1, a2);
    if ( !a2 )
    {
      if ( W32ThreadImpl < 0 )
        return (unsigned int)v4;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    if ( a2 == 1 )
      goto LABEL_8;
  }
  else
  {
    if ( !a2 )
    {
      v4 = AllocateW32ThreadImpl(a1);
      if ( v4 < 0 )
      {
        UserSetLastError(8);
        return (unsigned int)v4;
      }
    }
    v4 = DCompositionThreadCallout(a1, a2);
    if ( v4 >= 0 )
    {
      v4 = GdiThreadCallout(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = UserThreadCallout(a1, a2);
        if ( v4 < 0 )
        {
          if ( !a2 )
          {
            GdiThreadCalloutCleanup(a1);
LABEL_8:
            FreeW32Thread(a1);
            return (unsigned int)v4;
          }
        }
        else
        {
          v4 = 0;
          if ( !a2 )
            return (unsigned int)v4;
        }
      }
    }
    if ( a2 == 1 || v4 < 0 )
      goto LABEL_8;
  }
  return (unsigned int)v4;
}
