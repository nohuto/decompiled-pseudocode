/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x180218CF4
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18021892C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmMousewheelInteractionConfigurati.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 i; // rdx
  __int64 v7; // r9
  int v8; // ecx
  _DWORD *v9; // r8
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v14; // eax

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
        v14 = *(_DWORD *)(v7 + 12 * i + 8);
        *(_QWORD *)a2 = *(_QWORD *)(v7 + 12 * i);
        a2[2] = v14;
        break;
      }
    }
    v8 = 0;
    v9 = (_DWORD *)(a4 + 4);
    v10 = 0;
    v11 = 3LL;
    do
    {
      if ( *((_BYTE *)v9 - 4) )
      {
        v8 |= *v9 & v9[1];
        v10 |= v9[1];
      }
      v9 += 3;
      --v11;
    }
    while ( v11 );
    a2[2] = v8 & v10 | a2[2] & ~v10;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 8);
    a2[2] = v12;
  }
  return a2;
}
