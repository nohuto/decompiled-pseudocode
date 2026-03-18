/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140047618
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1400476D0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(_QWORD *a1, int a2, __int64 a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebp
  int v8; // ebx
  __int64 v9; // rcx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx

  v6 = ObReferenceObjectByPointer(a1, 3u, ExCompositionObjectType, 0);
  v7 = 0;
  if ( v6 < 0 )
    return (unsigned int)v6;
  RIMLockShared((__int64)(a1 + 4));
  v8 = a2 - 1;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
            goto LABEL_5;
          v9 = a1[12];
        }
        else
        {
          v9 = a1[11];
        }
      }
      else
      {
        v9 = a1[10];
      }
    }
    else
    {
      v9 = a1[9];
    }
  }
  else
  {
    v9 = a1[8];
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, a3);
LABEL_5:
  CInputSink::UnlockAndRelease((CInputSink *)(a1 + 3));
  return v7;
}
