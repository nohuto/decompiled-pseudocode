/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801E7F4C
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801E7B0C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 i; // rdx
  __int64 v7; // r9
  unsigned int v8; // eax
  int v9; // ecx
  _DWORD *v10; // r8
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // eax

  a2[2] = 0;
  *a2 = a3;
  a2[1] = a3;
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 112); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a1 + 88);
      if ( a3 < *(_DWORD *)(v7 + 12 * i) )
        break;
      if ( a3 <= *(_DWORD *)(v7 + 12 * i + 4) )
      {
        v8 = *(_DWORD *)(v7 + 12 * i + 8);
        *(_QWORD *)a2 = *(_QWORD *)(v7 + 12 * i);
        a2[2] = v8;
        break;
      }
    }
    v9 = 0;
    v10 = (_DWORD *)(a4 + 4);
    v11 = 0;
    v12 = 3LL;
    do
    {
      if ( *((_BYTE *)v10 - 4) )
      {
        v9 |= *v10 & v10[1];
        v11 |= v10[1];
      }
      v10 += 3;
      --v12;
    }
    while ( v12 );
    a2[2] = v9 & v11 | a2[2] & ~v11;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 8);
    a2[2] = v13;
  }
  return a2;
}
