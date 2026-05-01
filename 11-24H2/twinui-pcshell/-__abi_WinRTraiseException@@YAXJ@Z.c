/*
 * XREFs of ?__abi_WinRTraiseException@@YAXJ@Z @ 0x180457B4C
 * Callers:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A74F0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __abi_WinRTraiseException(int a1)
{
  if ( a1 <= -2147467259 )
  {
    if ( a1 != -2147467259 )
    {
      if ( a1 != -2147483637 )
      {
        if ( a1 != -2147483636 )
        {
          if ( a1 != -2147483629 )
          {
            if ( a1 != -2147467263 )
            {
              if ( a1 != -2147467262 )
              {
                if ( a1 != -2147467261 )
                {
                  if ( a1 != -2147467260 )
                    goto LABEL_24;
                  __abi_WinRTraiseOperationCanceledException();
                  __debugbreak();
                }
                __abi_WinRTraiseNullReferenceException();
                __debugbreak();
              }
              __abi_WinRTraiseInvalidCastException();
              __debugbreak();
            }
            __abi_WinRTraiseNotImplementedException();
            __debugbreak();
          }
          __abi_WinRTraiseObjectDisposedException();
          __debugbreak();
        }
        __abi_WinRTraiseChangedStateException();
        __debugbreak();
      }
      __abi_WinRTraiseOutOfBoundsException();
      __debugbreak();
    }
    __abi_WinRTraiseFailureException();
    __debugbreak();
  }
  switch ( a1 )
  {
    case -2147417848:
LABEL_30:
      __abi_WinRTraiseDisconnectedException();
      __debugbreak();
      JUMPOUT(0x180457C96LL);
    case -2147417842:
LABEL_29:
      __abi_WinRTraiseWrongThreadException();
      __debugbreak();
      goto LABEL_30;
    case -2147221164:
LABEL_28:
      __abi_WinRTraiseClassNotRegisteredException();
      __debugbreak();
      goto LABEL_29;
    case -2147024891:
LABEL_27:
      __abi_WinRTraiseAccessDeniedException();
      __debugbreak();
      goto LABEL_28;
    case -2147024882:
LABEL_26:
      __abi_WinRTraiseOutOfMemoryException();
      __debugbreak();
      goto LABEL_27;
    case -2147024809:
LABEL_25:
      __abi_WinRTraiseInvalidArgumentException();
      __debugbreak();
      goto LABEL_26;
  }
LABEL_24:
  __abi_WinRTraiseCOMException(a1);
  __debugbreak();
  goto LABEL_25;
}
